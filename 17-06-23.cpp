// #include <bits/stdc++.h>
// using namespace std;




// int main() {
//     int n ;
//     cin>>n;
//     string s;
//     cin>>s;
//     for(int i=0;i<n;i++){
//         cout<<s[i]<<s[i];
//     }
//     cout<<endl;

// }

// #include <bits/stdc++.h>
// using namespace std;




// int main() {
//         vector<long long > v(64);
//         for(int i=0;i<64;i++){
//             cin>>v[i];
//         }
//         long long ans = 0;
//         for(int i=0;i<64;i++){
//             long long tr = pow(2  , i);
//             long long temp = v[i] * tr;
//             ans+=temp;

//         }
//         cout<<ans<<endl;
// }



// #include <bits/stdc++.h>
// using namespace std;




// int main() {
//     int n ;
//     cin>>n;
//     vector<long long > v(3 *n);
//     for(int i=0;i<3 *n;i++){
//         cin>>v[i];
//     }
//     map<int , vector<int>> mp;
//     for(int i =0;i<3 *n ;i++){
//         mp[v[i]].push_back(i+1);
//     }
//     vector<pair<int , int>> pa;
//     for(auto x : mp){
//         vector<int> temp = x.second;
//         sort(temp.begin() , temp.end());
//         pa.push_back({temp[1] , x.first});
//     }
//     sort(pa.begin() , pa.end());
//     for(int i=0;i<n;i++){
//         cout<<pa[i].second<<" ";
//     }
//     cout<<endl;

// }

#include <bits/stdc++.h>
using namespace std;


long long  helper(vector<pair<int , int>> &pa ,  vector<long long > &dp , int ind , int n , int flag ){


if(ind==n){
    return 0;
}
if(dp[ind]!=-1){
    return dp[ind];
}

if(flag==0){
    if(pa[ind].first==1){
        if(pa[ind].second > 0){
           return dp[ind] =max(pa[ind].second + helper(pa , dp , ind+1 , n , 1 ) ,helper(pa , dp , ind , n , flag ) );
            
        }

    }
    else{
         return dp[ind] =max(pa[ind].second + helper(pa , dp , ind+1 , n , flag ) ,helper(pa , dp , ind , n , flag ) );
    }

}
else{
     if(pa[ind].first==0){
            return dp[ind] =max(pa[ind].second + helper(pa , dp , ind+1 , n , 1 ) ,helper(pa , dp , ind , n , flag ) );
     }
}





}


int main() {
    int n ;
    cin>>n;
    vector<pair<int , int>> pa(n);
    for(int i=0;i<n;i++){
        cin>>pa[i].first>>pa[i].second;
    }


    vector<long long > dp(n+1 , -1);
    cout<<helper(pa , dp ,0 , n , 0)<<endl;
    

}

