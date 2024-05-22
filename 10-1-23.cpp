// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         string str;
//         cin>>str;
//         int n = str.length();
//         if(n==3){
//             string a = "";
//             a=+str[0];
//             string b ="";
//             b+=str[1];
//             string c = "";
//             c+=str[2];
//             if(b >= a && b >= c){
//                 cout<<a<<" "<<b<<" "<<c<<endl;
//             }
//             else if(b <= a && b <=c){
//                 cout<<a<<" "<<b<<" "<<c<<endl;
//             }
//             else{
//                 cout<<":("<<endl;
//             }
//         }
//         else{
//             string d = "";
//             for(int i=1;i<=n-2;i++){
//                 d+=str[i];
//             }
//             cout<<str[0]<<" "<<d<<" "<<str[n-1]<<endl;
//         }
        
//     }
    

//     return 0;
// }





// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         string str;
//         cin>>str;
//         int n = str.length();
//         if(n==3){
//             string a = "";
//             a=+str[0];
//             string b ="";
//             b+=str[1];
//             string c = "";
//             c+=str[2];
//             if(b >= a && b >= c){
//                 cout<<a<<" "<<b<<" "<<c<<endl;
//             }
//             else if(b <= a && b <=c){
//                 cout<<a<<" "<<b<<" "<<c<<endl;
//             }
//             else{
//                 cout<<": ("<<endl;
//             }
//         }
//         else{
//             string d = "";
//             for(int i=1;i<=n-2;i++){
//                 d+=str[i];
//             }
//             cout<<str[0]<<" "<<d<<" "<<str[n-1]<<endl;
//         }
        
//     }
    

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;
bool  prime(long long n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long s , t;
    cin>>s>>t;
    if(prime(v[s-1])==true || prime(v[t-1])==true){
        cout<<-1<<endl;
    }
    else if(s==t){
        cout<<1<<endl;
        cout<<s<<endl;
    }
    else if(__gcd(v[s-1] , v[t-1])!=1){
        cout<<2<<endl;
        cout<<s<<" "<<t<<endl;
    }
    else{
        map<int , int> mp;
        map<int , int> mp2;
        for(int i=0;i<n;i++){
            if(i!=(s-1)){
                long long temp = __gcd(v[s-1] , v[i]);
                if(temp!=1){
                    mp[v[i]]++;
                }
            }
        }
        
        
        for(int i=0;i<n;i++){
            if(i!=(t-1)){
                long long temp2 = __gcd(v[t-1] , v[i]);
                if(temp2!=1){
                    mp2[v[i]]++;
                }
            }
        }
        long long number = 0;
        for(auto x : mp){
            if(mp2[x.first]!=0){
                number = x.first;
                break;
            }
        }
        long long ind = -1;
        for(int i=0;i<n;i++){
            if(v[i]==number){
                ind = i+1;
                break;
            }
        }
        cout<<3<<endl;
        cout<<s<<" "<<ind<<" "<<t<<endl;
        
    }
    
    
}
    
