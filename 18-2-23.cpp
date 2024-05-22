// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long a , b;
//         cin>>a>>b;
//         long long ad = 0;
//         long long bd = 0;
        
//         if(a > b){
//             swap(a , b);
//         }
        
//         if(ceil(sqrt(a))==floor((sqrt(a)))){
//             ad = ((sqrt(a) - 1) * 3) ;
//         }
//         else{
//             long long sq = sqrt(a) ;
//             long long df = sq;
//             ad = (sq - 1) *3;
//             sq = sq * sq;
//             for(long long i=sq;i<a;i+=df){
//                 long long tmp = floor(sqrt(i));
//                 if(i%tmp==0){
//                     ad++;
//                 }
//             }
//         }
//          if(ceil(sqrt(b))==floor((sqrt(b)))){
//             bd = ((sqrt(b) - 1) * 3)+1 ;
//         }
//         else{
//             long long sq = sqrt(b) ;
//             long long df = sq;
//             bd = (sq - 1) *3;
//             sq = sq * sq;
//             for(long long i=sq;i<=b;i+=df){
//                 long long tmp = floor(sqrt(i));
//                 if(i%tmp==0){
//                     bd++;
//                 }
//             }
//         }
//         cout<<(bd-ad)<<endl;
        
        
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         long long n ;
//         cin>>n;
//         vector<long long > v(n);
//         priority_queue<long long > q1;
//         priority_queue<long long > q2;
        
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             q1.push(v[i]);
//         }
//         vector<long long > a(n);
       
        
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             q2.push(a[i]);
           
//         }
//         long long ans = 0;
//         while(q1.size() > 0 && q2.size() > 0){
//             long long temp1 = q1.top();
            
//             long long temp2 = q2.top();
            
//             if(temp1==temp2){
//                 q1.pop();
//                 q2.pop();
//                 continue;
//             }
//             else if(temp1 > temp2){
//                 ans++;
//                 q1.pop();
//                 q1.push(to_string(temp1).length());
//             }
//             else{
//                 ans++;
//                 q2.pop();
//                 q2.push(to_string(temp2).length());
//             }
//         }
       
//         cout<<ans<<endl;
        
        
//     }
// }


// 22
// 106 284 195 28 56 172 65 76 56 200 3 206 39 46 13 227 27 33 22 40 251 123
// 191 185 46 175 30 163 72 151 188 242 210 295 208 123 157 185 17 123 195 51 124 238

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        vector<long long > v(n);
        long long m = INT_MIN;
        map<long long , long long > mp;
        long long mi = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            m = max(m , v[i]);
            mi = min(mi , v[i]);
        }
        long long left = 0;
        long long right = 0;
        int flip = 0;
        for(auto x : mp){
            if(x.first!=m){
                if(x.second >= 2){
                   left+=1;
                   right+=1;
                }
                else{
                    if(flip==0){
                        left+=1;
                        flip = 1;
                    }
                    else{
                        right+=1;
                        flip = 0;
                    }
                }
            }
        }
        long long left1 = 0;
         long long right1 = 0;
        int flip1 = 0;
        for(auto x : mp){
            if(x.first!=mi){
                if(x.second >= 2){
                    left1+=1;
                    right1+=1;
                }
                else{
                    if(flip == 0){
                        left1+=1;
                        flip = 1;
                        
                    }
                    else{
                        right1+=1;
                        flip = 0;
                    }
                }
            }
        }
        
        long long ans = max(min(left , right) , min(left1 , right1)) + 1;
        
        
        
        
        cout<<ans<<endl;
        
    }
}
        





