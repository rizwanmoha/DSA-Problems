// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       long long n ;
       cin>>n;
       vector<long long > v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       vector<long long > an;
      // vector<long long > iterator iter;
      map<long long  , long long > mp;
       long long ans = 0;
       for(int i=0;i<n;i++){
           long long temp = 0;
           for(auto x: mp){
               if(x.first >= v[i]){
                   temp+=(x.second);
               }
           }
           ans+=temp;
           mp[v[i]]++;
       }
       cout<<ans<<endl;
   }

    return 0;
}
