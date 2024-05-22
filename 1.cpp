// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//    int t;
//    cin>>t;
//    while(t--){
//     long long x , y;
//     cin>>x>>y;
//     if(y > x){
//             cout<<(y - (y%x)/2)<<endl;
//     }
//     else if(x==y){
//         cout<<x<<endl;
//     }
//     else{
//         cout<<(x * 2 ) + y<<endl;
//     }
//    }
//    return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long n ;
    cin>>n;
    vector<long long> v(n);
    map<long long  , long long> mp;

    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    long long ans = 0;
    for(auto x : mp){
        ans+=(x.second/2);
    }
    cout<<ans<<endl;

}
