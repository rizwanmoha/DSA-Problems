// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         string str;
//         cin>>str;
//         long long ans = 0;
//         int ind = -1;
//         for(int i=n-1;i>=0;i--){
//             if(str[i]=='1'){
//                 ind = i;
//             }
//         }
//         if(ind==-1){
//             cout<<n<<endl;
//         }
//         else{
//             ans+=(n-ind);
//             long long temp = n - ind;
//             if((ind+1) >= temp){
//                 ans = temp +  ind + 1;
                
                
//             }
//             else{
//                 ans = 2 * temp;
//             }
            
//             ind = -1;
//             long long ans2 = 0;
//             for(int i=0;i<n;i++){
//                 if(str[i]=='1'){
//                     ind = i;
//                 }
//             }
//             long long temp2 = ind + 1;
//             if((n-ind) >= temp2){
//                 ans2+=temp2 + (n-ind);
//             }
//             else{
//                 ans2+=2*temp2;
//             }
//             cout<<max(ans , ans2)<<endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         string s , t;;
//         cin>>s>>t;
//         if(s==t){
//             cout<<"YES"<<endl;
//         }
//         else{
//             vector<char> p;
//             vector<char> q;
//             for(int i=0;i<n;i++){
//                 if(s[i]!=t[i]){
//                     p.push_back(s[i]);
//                     q.push_back(t[i]);
//                 }
//             }
//             if(p.size()!=2){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 if((p[0]==p[1] && q[0]==q[1])){
//                     cout<<"YES"<<endl;
//                 }
//                 else{
//                     cout<<"NO"<<endl;
//                 }
//             }
//         }
//     }
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int p = 0;
    int n   = 0;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
        //cout<<v[i]<<" ";
        if(abs(v[i])%2==1){
            if(v[i] > 0){
                p++;
            }
            else{
                n++;
            }
        }
    }
    // cout<<endl;
    // cout<<n<<" "<<p<<endl;
    vector<int> copy = v;
    for(int i=0;i<t;i++){
        if(v[i]%2==0){
            v[i] = v[i]/2;
            
        }
        
    }
    
    if(n >= p){
        int temp = p;
        int t2 = n- p;
        for(int i=0;i<t;i++){
            if(v[i] > 0 && p > 0){
                v[i] = v[i]/2;
                p--;
            }
             if(v[i] < 0 && temp > 0){
                v[i] = v[i]/2;
                temp--;
            }
        }
        
        int f = 1;
        for(int i=0;i<t;i++){
            if(v[i] < 0 && abs(v[i])%2==1 && v[i]==copy[i] && t2 > 0 ){
                if(f==1){
                    v[i] = v[i]/2;
                    f = 0;
                }
                else{
                    v[i] = floor((double) v[i] / 2);
                    f = 1;
                }
                t2--;
            }
        }
        
        
    }
    else{
        int s2 = n;
        int t3 = p -n;
        for(int i=0;i<t;i++){
            if(v[i] < 0 && n > 0){
                v[i] = v[i]/2;
                n--;
            }
             if(v[i] > 0 && s2 > 0){
                v[i] = v[i]/2;
                s2--;
            }
        }
        
        int f2 = 1;
        for(int i=0;i<t;i++){
            if(v[i] > 0 && abs(v[i])%2==1 && v[i]==copy[i] && t3 > 0){
                if(f2==1){
                    v[i] = v[i]/2;
                    f2 = 0;
                }
                else{
                    v[i] = ceil((double) v[i] / 2);
                    f2 = 1;
                }
            }
        }
    }
    
    for(auto x : v){
        cout<<x<<endl;
    }
   
    
}









