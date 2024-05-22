// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<long long> d;
//         vector<long long> m;
//         for(int i=0;i<2*n;i++){
//             int x , y;
//             cin>>x>>y;
//             if(x==0){
//                 m.push_back(abs(y));
//             }
//             else{
//                 d.push_back(abs(x));
//             }
//         }
        
//         sort(d.begin() , d.end());
//         sort(m.begin() , m.end());
        
//         double ans = 0;
//         for(int i=0;i<n;i++){
//             double temp = sqrt(m[i]*m[i]  + d[i]*d[i]);
//             ans+=temp;
//         }
//         cout<<fixed<<setprecision(15)<<ans<<endl;
        
//     }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n , u , v;
        cin>>n>>u>>v;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        for(int i=0;i<n;i++){
            if(i==0){
                if(v[i]==v[1]){
                   long long temp = u+v;
                   ans = min(ans  , temp);
                }
                else{
                    
                }
            }
        }
    }
}
        
