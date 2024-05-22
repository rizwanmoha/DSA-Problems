// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
   
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int m = (log2(n)) ;
//         int j = 1;
//         int jump = 2;
//         long long ans = 0;
//         for(int i=0;i<m;i++){
//             for(int k=0;k+j<n;k+=jump){
//                 if(v[k] > v[k+j]){
//                     ans++;
//                     for(int s = 0;s<j;s++){
//                         int temp = v[k+s + j];
//                     v[k+j+s] = v[k+s];
//                     v[k+s] = temp;
//                     }
                    
                    
//                 }
//             }
//             j*=2;
//             jump*=2;
//         }
//         bool check = true;
//         for(int i=1;i<n;i++){
//             if(v[i] > v[i-1] ){
//                 continue;
//             }
//             else{
//                 check = false;
//                 break;
//             }
//         }
//         // for(auto x : v){
//         //     cout<<x<<" ";
//         // }
        
//         if(check==true){
//             cout<<ans<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<long long > v(n);
        map<long long, long long  > mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        
        sort(v.begin() , v.end());
        long long ans = v[n-1] - v[0];
        long long t1 = mp[v[n-1]];
        long long t2 = mp[v[0]];
        mp.erase(v[n-1]);
        mp.erase(v[0]);
        long long temp = INT_MAX;
        for(auto x : mp){
            long long temp2 = v[n-1] - x.first;
            temp = min(temp , temp2);
        }
        if(temp==INT_MAX){
            //     for(int i=1;i<n-1;i++){
            //     long long temp2 = v[n-1] - v[i];
            //     temp = min(temp2 , temp);
            // }
            if(t1==1){
                cout<<ans<<endl;
            }
            else{
                cout<<2*ans<<endl;
            }
            
        
        }
        else{
            ans+=temp;
            cout<<ans<<endl;
        }
        
        
        
        
       
        
    }
}
