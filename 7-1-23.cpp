// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n  ;
//         cin>>n;
//         string a , b;
//         cin>>a>>b;
//         if(a==b){
//             cout<<"YES"<<endl;
//         }
//         else{
//             int zero = 0;
//             int one = 0;
//             int j = 0;
//             vector<pair<int , int>> v;
            
//             for(int i=0;i<n;i++){
//                 if(a[i]=='1'){
//                     one++;
//                 }
//                 else{
//                     zero++;
//                 }
                
//                 if(zero==one){
//                     v.push_back(make_pair(j , i));
//                     j = i+1;
//                 }
//             }
//             for(auto x : v){
//                 int start = x.first;
//                 int end = x.second;
//                 if(a[start]==b[start]){
//                     continue;
//                 }
//                 else{
//                     for(int i=start ;i<= end;i++){
//                         if(a[i]=='1'){
//                             a[i] = '0';
//                         }
//                         else{
//                             a[i] = '1';
//                         }
//                     }
//                 }
//             }
//             if(a==b){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;


// // bool isPowerOfTwo(long long n)
// // {
// //     int count = 0;
// //     while(count < 2 && n%2==0){
// //         n= n/2;
// //         count++;
// //         if(count >= 2){
// //             return true;
// //         }
// //     }
// //     return false;
    
    
    
// // }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long  n, k  ;
//         cin>>n>>k;
//         if(n%3==0){
//             cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
//         }
//         else if(n%2==1){
//             cout<<1<<" "<<n/2<<" "<<n/2<<endl;
//         }
//         else{
//             if(isPowerOfTwo(n)==true){
//                 cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
//             }
//             else{
//                 cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<2<<endl;
//             }
//         }
        
//     }
// }


#include <bits/stdc++.h>
using namespace std;


// bool isPowerOfTwo(long long n)
// {
//     int count = 0;
//     while(count < 2 && n%2==0){
//         n= n/2;
//         count++;
//         if(count >= 2){
//             return true;
//         }
//     }
//     return false;
    
    
    
// }
int main() {
    int t;
    cin>>t;
    while(t--){
        long long  n, m  ;
        cin>>n>>m;
        
      
        vector<long long > v(n);
        map<int , int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            long long temp = v[i]%m;
            mp[temp]++;
        }
        
        long long ans = 0;
        for(auto x : mp){
            if(x.first==0){
                ans++;
            }
            else if(mp.count(m-x.first)==0){
                ans+=x.second;
            }
            else if(m-x.first==x.first){
                ans++;
            }
            else if(m - x.first > x.first){
                long long a = x.second;
                long long b = mp[m - x.first];
                if(abs(a-b) <= 1){
                    ans++;
                }
                else if(a > b){
                    a-=b+1;
                    ans++;
                    ans+=a;
                }
                else{
                    b-=a+1;
                    ans++;
                    ans+=b;
                }
            }
        }
        cout<<ans<<endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     int p = 0;
//     int n   = 0;
//     vector<int> v(t);
//     for(int i=0;i<t;i++){
//         cin>>v[i];
//         //cout<<v[i]<<" ";
//         if(abs(v[i])%2==1){
//             if(v[i] > 0){
//                 p++;
//             }
//             else{
//                 n++;
//             }
//         }
//     }
//     // cout<<endl;
//     // cout<<n<<" "<<p<<endl;
//     vector<int> copy = v;
//     for(int i=0;i<t;i++){
//         if(v[i]%2==0){
//             v[i] = v[i]/2;
            
//         }
        
//     }
    
//     if(n >= p){
//         int temp = p;
//         int t2 = n- p;
//         for(int i=0;i<t;i++){
//             if(v[i] > 0 && p > 0){
//                 v[i] = v[i]/2;
//                 p--;
//             }
//              if(v[i] < 0 && temp > 0){
//                 v[i] = v[i]/2;
//                 temp--;
//             }
//         }
        
//         int f = 1;
//         for(int i=0;i<t;i++){
//             if(v[i] < 0 && abs(v[i])%2==1 && v[i]==copy[i] && t2 > 0 ){
//                 if(f==1){
//                     v[i] = v[i]/2;
//                     f = 0;
//                 }
//                 else{
//                     v[i] = floor((double) v[i] / 2);
//                     f = 1;
//                 }
//                 t2--;
//             }
//         }
        
        
//     }
//     else{
//         int s2 = n;
//         int t3 = p -n;
//         for(int i=0;i<t;i++){
//             if(v[i] < 0 && n > 0){
//                 v[i] = v[i]/2;
//                 n--;
//             }
//              if(v[i] > 0 && s2 > 0){
//                 v[i] = v[i]/2;
//                 s2--;
//             }
//         }
        
//         int f2 = 1;
//         for(int i=0;i<t;i++){
//             if(v[i] > 0 && abs(v[i])%2==1 && v[i]==copy[i] && t3 > 0){
//                 if(f2==1){
//                     v[i] = v[i]/2;
//                     f2 = 0;
//                 }
//                 else{
//                     v[i] = ceil((double) v[i] / 2);
//                     f2 = 1;
//                 }
//             }
//         }
//     }
    
//     for(auto x : v){
//         cout<<x<<endl;
//     }
   
    
// }
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
    
//         int n , k ;
//         cin>>n>>k;
//         string str;
//         cin>>str;
//         if(n==1){
//             if(k > 0){
//                 cout<<0<<endl;
//             }
//             else{
//                 cout<<str<<endl;
//             }
//         }
//         else{
//             int i= 0;
//             while(k > 0 && i < n){
//                 if(i==0){
//                     if(str[i]!='1'){
//                         str[i]='1';
//                         k--;
//                     }
//                     else{
                        
//                     }
//                 }
//                 else{
//                     if(str[i]=='0'){
                        
//                     }
//                     else{
//                         str[i]='0';
//                         k--;
//                     }
//                 }
//                 i++;
//             }
//             cout<<str<<endl;
            
//         }
    
// }
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n , k , d;
//         cin>>n>>k>>d;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int ans = 101;
//         for(int i=0;i<=n-d;i++){
//             unordered_set<int> s;
//             for(int j=i;j<i+d;j++){
//                 s.insert(v[j]);
//             }
//             int temp = s.size();
//             ans = min(ans , temp);
//         }
//         cout<<ans<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         string s , t;
//         cin>>s>>t;
//         map<char , int> mp ;
//         map<char , int> mp2 ;
//         for(int i=0;i<s.length();i++){
//             mp[s[i]]++;
//         }
//         for(int i=0;i<s.length();i++){
//             mp2[t[i]]++;
//         }
//         bool check = false;
//         for(auto x : mp){
//             if(mp2[x.first]!=0){
//                 check = true;
//                 break;
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
//         sort(v.begin() , v.end());
//         for(int i=1;i<n;i++){
//             v[i]+=v[i-1];
//         }
//         bool check = false;
//         for(int i=n-1;i>=0;i--){
//             if(v[i]==2048){
//                 check = true;
//                 break;
//             }
//             for(int j=i-1;j>=0;j--){
//                 if((v[i]-v[j])==2048){
//                     check = true;
//                     break;
//                 }
//             }
//             if(check==true){
//                 break;
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


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        
        int n ;
        cin>>n;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool check = false;
        if(n <= 3){
            cout<<n<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                if(i==0){
                    if(v[1]==v[n-1]){
                        continue;
                    }
                    else{
                        check = true;
                        break;
                    }
                }
                else {
                    if(v[i-1]==v[i+1]){
                        continue;
                    }
                    else{
                        check = true;
                        break;
                    }
                }
            }
            if(check==true){
                cout<<n<<endl;
            }
            else{
                cout<<(n/2)+1<<endl;
            }
        }
        
        
        
    }
}
        






    









