// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , k;
//         cin>>n>>k;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin() , v.end());
//         long long ans = 0;
//       for(int j=30;j>=0;j--){
//           int cnt = 0;
//           for(int i=0;i<n;i++){
//               if(v[i] & (1<<j)){
//                   cnt++;
//               }
//           }
//           cnt = n - cnt;
//           if(cnt <= k){
//               ans+=(1<<j);
//               k-=cnt;
//           }
//       }
      
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
        long long n ;
        cin>>n;
        long long ans = 0;
        vector<pair<long long , long long >> pa;
        
        for(int i=0;i<n;i++){
            long long k;
            cin>>k;
            vector<long long > v(k);
            for(int j=0;j<k;j++){
                cin>>v[j];
            }
            long long start = v[0] + 1;
            long long end = start +1;
            for(int j=1;j<k;j++){
                if(v[j]  < end){
                    end++;
                }
                else{
                    
                    long long temp = (v[j] - end)+1 ;
                    start+=temp;
                    end+=temp;
                    end+=1;
                }
            }
            pa.push_back({start , end});
        }
        sort(pa.begin() , pa.end());
        ans = pa[0].first;
        for(int i=1;i<n;i++){
            if(pa[i].first <= pa[i-1].second){
                continue;
            }
            else{
                long long temp = (pa[i].first - pa[i-1].second ) ;
                ans+=temp;
            }
        }
        cout<<ans<<endl;
    }
}









