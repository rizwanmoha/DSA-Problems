// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ;
//     cin>>n;
    
//     vector<pair<long long , long long >> pa;
//     for(int i=0;i<n;i++){
//         long long a , b;
//         cin>>a>>b;
//         pa.push_back({a , b});
//     }
//     sort(pa.begin() , pa.end());
//     long long ans = -1;
//     for(int i=0;i<n;i++){
//         if(ans <= pa[i].second){
//             ans = pa[i].second;
//         }
//         else{
//             ans = pa[i].first;
//         }
//     }
//     cout<<ans<<endl;
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    
    vector<long long > a(n);
    vector<long long > b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<vector<long long >> dp(n+1 , vector<long long>(2 , 0));
    for(int i=1;i<=n;i++){
        if(i==1){
            dp[i][0] = a[i-1];
            dp[i][1] = b[i-1];
        }
        else{
            long long upp1 = dp[i-2][0] + a[i-1];
            long long left = dp[i-1][1] + a[i-1];
            dp[i][0] = max(dp[i-1][0], max(upp1 , left));
            
            long long upp2 = dp[i-2][1] + b[i-1];
            long long right = dp[i-1][0] + b[i-1];
            dp[i][1] = max(dp[i-1][1] , max(upp2 , right));
            
        }
    }
    cout<<max(dp[n][0] , dp[n][1])<<endl;
    
    
}








