// #include <bits/stdc++.h>
// using namespace std;
// vector<long long> another;
// bool helper(long long absicca, long long ordinate, long long number)
// {
//     if (number == 1)
//     {
//         return true;
//     }

//     if (min(ordinate, another[number + 1] - ordinate + 1) > another[number + 1] - another[number])
//     {
//         return false;
//     }

//     ordinate = min(ordinate, another[number + 1] - ordinate + 1);

//     return helper(ordinate, absicca, number - 1);
// }

// void solvingtheproblem()
// {
//     long long number, absiccaa1, ordinate1;
//     cin >> number >> absiccaa1 >> ordinate1;
//     if (helper(absiccaa1, ordinate1, number))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main()
// {
//     int taaa;
//     cin >> taaa;
//     another.push_back(1);
//     another.push_back(1);
//     for (int iterator = 0; iterator < 46; iterator++)
//     {
//         another.push_back(another[iterator] + another[iterator + 1]);
//     }
//     while (taaa--)
//     {
//         solvingtheproblem();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// long long helper(long long number)
// {
//     vector<long long> another;
//     int numerical = 0;
//     int highcalv = 0;
//     long long ans = 0;
//     while (number > 0)
//     {
//         another.push_back(number % 9);

//         number = number / 9;
//     }
//     long long scoring = another.size();
//     for (long long i = scoring - 1; i >= 0; i--)
//     {
//         ans = ans * 10 + another[i];
//     }
//     return ans;
// }

// int main()
// {
//     int taaa;
//     cin >> taaa;

//     while (taaa--)
//     {
//         long long number;
//         cin >> number;
//         string conversionof = to_string(helper(number));
//         int mng = 0;
//         int jhkl = 0;
//         int tyeyur = 0;
//         replace(conversionof.begin(), conversionof.end(), '8', '9');
//         replace(conversionof.begin(), conversionof.end(), '7', '8');
//         replace(conversionof.begin(), conversionof.end(), '6', '7');
//         replace(conversionof.begin(), conversionof.end(), '5', '6');
//         replace(conversionof.begin(), conversionof.end(), '4', '5');
//         cout << conversionof << endl;
//     }
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int taaa;
    cin >> taaa;

    while (taaa--)
    {
        long long n , l , r;
        cin>>n>>l>>r;
        vector<long long > v(n);
        unordered_set<long long > ls ;
         unordered_set<long long > rs ;

         for(int i=0;i<n;i++){
            cin>>v[i];
         }
         for(int i=0;i<n;i++){
            if(l > 0){
                ls.insert(v[i]);
                l--;

            }
            else{
                rs.insert(v[i]);
                r--;
            }
         }
         long long pair = 0;
         for(auto x : ls){
            if(rs.find(x)!=rs.end()){
                ls.erase(x);
                rs.erase(x);
                pair++;
            }
         }
        long long ans = 0;
        if(rs.size()==ls.size()){
          ans = rs.size();
          cout<<ans<<endl;
        }
        else{
                if(rs.size() > ls.size()){
                    map<long long , long long > mp;
                        pair+=ls.size();
                    // for(auto x : rs){
                    //     mp[x]++;
                    // }
                }
        }


    }
}