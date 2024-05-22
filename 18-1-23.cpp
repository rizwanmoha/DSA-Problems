// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     long long n , q , k;
//     cin>>n>>q>>k;
//     vector<long long> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<pair<int , int>> pa ;
    
//     for(int i=0;i<q;i++){
//         int a , b;
//         cin>>a>>b;
//         pa.push_back(make_pair(a , b));
//     }
    
    
   
//     for(int i=0;i<q;i++){
//         long long ans = 0;
//          int  ch = 0;
       
//       ans+=(v[pa[i].first - 1] - 1);
//         ans+=(k-v[pa[i].second-1]);
//         long long temp =(v[pa[i].second - 1] -  v[pa[i].first-1]) - (pa[i].second - pa[i].first);
//         temp = temp * 2;
//         ans+=temp;
//         cout<<ans<<endl;
//     }
    
    
    
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long ans = 0;
        long long temp = 0;
        long long start = 1;
        while(temp < x){
            ans++;
            temp+=start;
            if(temp==x){
                break;
            }
            else if((temp + start+1) > x){
                ans+=2;
                break;
            }
            
            start++;
        }
        cout<<ans<<endl;
    }
}





