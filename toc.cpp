#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define a struct for the production rules
struct Rule {
    string lhs;   // Left-hand side of the rule
    string rhs;   // Right-hand side of the rule
};

// Define a struct for the CFG
struct CFG {
    string start;  // Start symbol
    vector<Rule> rules;  // Vector of production rules
};

// Function to read in a CFG from user input
void read_cfg(CFG &cfg) {
    string line;
    int num_rules;

    // Get the start symbol
    std::cout << "Enter the start symbol: ";
    getline(std::cin, cfg.start);

    // Get the number of rules
    std::cout << "Enter the number of rules: ";
    std::cin >> num_rules;
    std::cin.ignore();  // Ignore the newline character

    // Get each rule and add it to the vector
    for (int i = 0; i < num_rules; i++) {
        Rule rule;

        // Get the left-hand side of the rule
        std::cout << "Enter the left-hand side of rule " << i+1 << ": ";
        getline(std::cin, rule.lhs);

        // Get the right-hand side of the rule
        std::cout << "Enter the right-hand side of rule " << i+1 << ": ";
        getline(std::cin, rule.rhs);

        cfg.rules.push_back(rule);
    }
}

// Function to print a CFG
void print_cfg(const CFG &cfg) {
    // Print the start symbol
    std::cout << "Start symbol: " << cfg.start << endl;

    // Print each rule
    for (int i = 0; i < cfg.rules.size(); i++) {
        std::cout << cfg.rules[i].lhs << " -> " << cfg.rules[i].rhs << endl;
    }
}

// Function to convert a CFG to CNF
void cfg_to_cnf(CFG &cfg) {
    map<string, int> nonterminals;  // Map to keep track of non-terminals
    vector<string> new_symbols;     // Vector to store new non-terminals
    string new_symbol = "Z";        // Initial new non-terminal symbol
    int i, j, k, l, m;

    // Step 1: Remove epsilon productions
    // Loop through each rule and check if it has an epsilon production
    for (i = 0; i < cfg.rules.size(); i++) {
        if (cfg.rules[i].rhs == "") {
            // Epsilon production found
            // Loop through each rule again and replace any instances of the LHS
            // of this rule with the RHS of this rule without the LHS
            for (j = 0; j < cfg.rules.size(); j++) {
                if (j != i) {
                    l = cfg.rules[j].rhs.find(cfg.rules[i].lhs);
                    while (l != string::npos) {
                        cfg.rules[j].rhs.erase(l, cfg.rules[i].lhs.length());
                        l = cfg.rules[j].rhs.find(cfg.rules[i].lhs, l);
                    }
                }
            }
            // Remove the epsilon production from the vector of rules
            cfg.rules.erase(cfg.rules.begin() + i);
            i--; // Decrement i since the vector has been shortened
        }
    }

        // Step 2: Remove unit productions
    // Loop through each rule and check if it has a unit production
    for (i = 0; i < cfg.rules.size(); i++) {
        if (cfg.rules[i].rhs.length() == 1 && isupper(cfg.rules[i].rhs[0])) {
            // Unit production found
            // Loop through each rule again and replace any instances of the LHS
            // of this rule with the RHS of this rule
            for (j = 0; j < cfg.rules.size(); j++) {
                if (j != i && cfg.rules[j].lhs == cfg.rules[i].rhs) {
                    // Found a rule with the same LHS as the RHS of the unit production
                    // Add this rule's RHS to the RHS of the unit production rule
                    cfg.rules[i].rhs = cfg.rules[i].rhs + cfg.rules[j].rhs;
                    // Remove this rule from the vector of rules
                    cfg.rules.erase(cfg.rules.begin() + j);
                    j--; // Decrement j since the vector has been shortened
                }
            }
        }
    }

    // Step 3: Convert long productions to two non-terminals
    // Loop through each rule and check if it has a right-hand side with more than 2 symbols
    for (i = 0; i < cfg.rules.size(); i++) {
        if (cfg.rules[i].rhs.length() > 2) {
            // Long production found
            // Create new non-terminals and replace the RHS of this rule
            string original_rhs = cfg.rules[i].rhs;
            cfg.rules[i].rhs = "";
            for (j = 0; j < original_rhs.length() - 2; j++) {
                // Create a new non-terminal symbol
                if (nonterminals.find(original_rhs.substr(j, 2)) == nonterminals.end()) {
                    // This pair of symbols has not been seen before
                    nonterminals[original_rhs.substr(j, 2)] = new_symbols.size();
                    new_symbols.push_back(new_symbol);
                    new_symbol[0]++;
                }
                // Add the new non-terminal symbol to the RHS of the current rule
                cfg.rules[i].rhs += new_symbols[nonterminals[original_rhs.substr(j, 2)]] + " ";
            }
            // Add the last two symbols to the RHS of the current rule
            cfg.rules[i].rhs += original_rhs.substr(j, 2);
        }
    }

    // Step 4: Replace terminals in the right-hand side of each rule with new non-terminals
    // Loop through each rule and check each symbol in its RHS
    for (i = 0; i < cfg.rules.size(); i++) {
        for (j = 0; j < cfg.rules[i].rhs.length(); j++) {
            if (!isupper(cfg.rules[i].rhs[j])) {
                // Terminal symbol found
                // Create a new non-terminal symbol
                string new_nonterminal = new_symbol;
                new_symbol[0]++;
                // Add a rule to the CFG for this new non-terminal symbol
                cfg.rules.push_back(Rule{new_nonterminal, string(1, cfg.rules[i].rhs[j])});
                // Replace the terminal symbol in the RHS with the new non-terminal symbol
                cfg.rules[i].rhs.replace(j, 1, new_nonterminal);
            }
        }
    }
}

// Main function
int main() {
    CFG cfg;

    // Read in the CFG from user input
    read_cfg(cfg);

        // Print the original CFG
    std::cout << "Original CFG:\n";
    print_cfg(cfg);

    // Convert the CFG to CNF
    cfg_to_cnf(cfg);

    // Print the CNF
    std::cout << "CNF:\n";
    print_cfg(cfg);

    return 0;
}