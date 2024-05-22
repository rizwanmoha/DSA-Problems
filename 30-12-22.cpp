// // Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n , m ;
        cin>>n>>m;
        vector<long long > va(n);
        vector<long long> vb(m);
        long long suma = 0;
        long long sumb = 0;
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin>>va[i];
            //sum+=va[i];
        }
         for(int i=0;i<m;i++){
            cin>>vb[i];
            sumb+=vb[i];
        }
        sort(vb.begin() , vb.end() , greater<int>());
        // sort(va.begin() , va.end());
        for(int i=0;i<min(n , m);i++){
            va[i]=vb[i];
        }
        
        if(m > n){
            int start  = 0;
            for(int i=n;i<m;i++){
                if(start==n){
                    start = 0;
                }
                va[start] = vb[i];
                start++;
            }
        }
        
        
        
        
        
        
        
        // int i = 0;
        // int j= m-1;
        // int s = min(n , m);
        // while(s--){
        //     sum-=va[i++];
        //     sum+=vb[j--];
        // }
        for(int i=0;i<n;i++){
            sum+=va[i];
        }
        
        cout<<sum<<endl;
        
    }

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t ;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<long long > v(n);
//         unordered_set<long long > s;
//         bool check = true;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             if(s.find(v[i])!=s.end()){
//                 check = false;
//             }
//             else{
//                 s.insert(v[i]);
//             }
//         }
        
//         if(check==true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }
        
        
        
        
        
        
        
