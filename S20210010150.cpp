
#include<bits/stdc++.h>

using namespace std;



void dijkstra(vector<vector<pair<int, int>>>& Topology, int source, vector<int>& distance) {
    //  Solving the dijkstra algorithm using min Priority queue 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    que.push({0, source});
    distance[source] = 0;

    while (!que.empty()) {
        pair<int, int> curr_node = que.top();
        que.pop();
        int node = curr_node.second;

        for (auto& iter : Topology[node]) {
            int target = iter.first;
            int weights = iter.second;
            if (distance[target] > distance[node] + weights) {
                distance[target] = distance[node] + weights;
                que.push({distance[target], target});
            }
        }
    }
}

void function_for_calculating_fragments(vector<vector<pair<int, int>>>& Topology, int Source, int destination, int Payload, int MTU) {
    
    int total_size = Payload;
    int Number_of_fragments = ceil(double(Payload)/MTU);

    for (int i = 0; i < Number_of_fragments; i++) {
        int Fragment_size = min(MTU - sizeof(int), total_size - i * (MTU - sizeof(int))); // size of current fragment
        vector<int> distance(Topology.size(), INT_MAX);
        dijkstra(Topology, Source, distance);
        cout << "Fragment " << i + 1 << " sent from " << Source << " to " << destination << " via shortest path with distance " << distance[destination] << endl;
    }
}
void solve(){
     int source, destination, Payload_of_the_topology, MTU_SIZE;
     // First I am taking the input of  source and destination nodes, payload size, MTU size
     cout<<"Please Enter the source destination and Payload size and mtu size"<<endl;
    cin >> source >> destination >> Payload_of_the_topology >> MTU_SIZE; 
    // Then calculating the number of fragments we have to sent 
    int Numbers_of_fragments = ceil(double(Payload_of_the_topology)/MTU_SIZE);
    while(Numbers_of_fragments--){
        cout<<"Please Enter The Number of nodes and no of edges "<<endl;
         int no_of_nodes, edges;
         // Now taking the input  for number pf nodes and number of edges n
    cin >> no_of_nodes >> edges; 

    vector<vector<pair<int, int>>> Topology(no_of_nodes + 1); 
    // Topology   Taking the input for topology
    cout<<"Please Enter the edges and weights "<<endl;
    for (int i = 0; i < edges; i++) {
        int s, d, weight;
        cin >> s >> d >> weight; 
        Topology[s].push_back({d, weight});
        
    }

   
   // Here I am wheather I can reach the destination or not 

    if(destination > no_of_nodes || destination  <= 0){
        cout<<"This destination is out of bound Sorry  we can not reach that destination  "<<endl;
        continue;
    }
    else{
        // Calling the function for calculating the fragments
        function_for_calculating_fragments(Topology, source, destination, Payload_of_the_topology, MTU_SIZE);
    }
    }
}

int main() {
    solve();

    return 0;
}


