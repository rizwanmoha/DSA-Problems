// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//       int n ;
//       cin>>n;
//       vector<int> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       vector<int> copy = v;
//       bool check = false;
//       for(int i=1;i<n;i++){
//           if(v[i]==v[i-1]){
//               check=true;
//           }
//           v[i]+=v[i-1];
//       }
//       if(check==false){
//           cout<<"YES"<<endl;
//           for(auto x: copy){
//               cout<<x<<" ";
//           }
//           cout<<endl;
//       }
//       else{
//           sort(copy.begin() , copy.end());
//           int i = 0;
//           int j = n-1;
//           int k = 0;
//           vector<int> ans(n);
//           int f = 0;
//           while(k!=n){
//               if(f==0){
//                   ans[k++] = copy[i++];
//                   f=1;
//               }
//               else{
//                   ans[k++] = copy[j--];
//                   f= 0;
//               }
//           }
//           vector<int> ans2 = ans;
//           bool ch = false;
//           for(int i=1;i<n;i++){
//               if(ans[i]==ans[i-1]){
//                   ch = true;
//                   break;
//               }
//               ans[i]+=ans[i-1];
//           }
//           if(ch==false){
//               cout<<"YES"<<endl;
//               for(auto x : ans2){
//                   cout<<x<<" ";
//               }
//               cout<<endl;
//           }
//           else{
//               cout<<"NO"<<endl;
//           }
//       }
       
//     }
 
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//       long long n , m;
//       cin>>n>>m;
//       vector<long long> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       int count = 0;
//       vector<long long> temp;
//       int ma = 0;
//       for(int i=0;i<n;i++){
//           int count = 0;
//           for(int j=0;j<n;j++){
//               if(i!=j && v[i] > v[j]){
//                   count++;
//               }
               
//           }
//           if(m >= v[i]){
//               ma++;
//           }
//           temp.push_back(count);
           
//       }
//       int i=0;
//       int ans = 0;
//             sort(temp.begin() , temp.end() , greater<int>());
            
//           while(i < n && ma <= temp[i] ){
//               i++;
//               ans++;
//           }
//           cout<<ans+1<<endl;
       
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//       long long n , m;
//       cin>>n>>m;
//       vector<long long> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       int count = 0;
//       for(int i=0;i<n;i++){
//           if(v[i] > m){
//               count++;
//           }
//       }
//       cout<<count+1<<endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//       string str;
//       cin>>str;
//       int count = 0;
//       int m = 0;
//       for(int i=0;i<str.length();i++){
//           if(str[i]=='L'){
//               count++;
//               m = max(m , count);
//           }
//           else{
//               count = 0;
//           }
//       }
//       cout<<m+1<<endl;
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
//         vector<int> v(n);
//         map<int , vector<int>> mp2;
//         map<int , int> mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]]++;
//             mp2[v[i]].push_back(i);
//         }
//         bool check = false;
//         int count = 0;
//         for(auto x : mp){
//             if(x.second >= 3){
//                 check = true;
//                 break;
//             }
//             if(x.second==1){
//                 count++;
//             }
//         }
//         if(check==true){
//             cout<<"YES"<<endl;
//         }
//         else if(count==n){
//             cout<<"NO"<<endl;
//         }
//         else{
//             for(auto x : mp2){
//                 if(x.second.size()==2){
//                     if(abs(x.second[0]-x.second[1]) > 1){
//                         check = true;
//                         break;
//                     }
//                 }
//             }
//             if(check==true){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
 
 bool pallindrome(string s){
     int i=0;
     int j = s.length() - 1;
     while(j > i){
         if(s[i]!=s[j]){
             return false;
         }
         i++;
         j--;
     }
     return true;
 }
 
int main() {
    
    long long n , m;
    cin>>n>>m;
    vector<string> v(n);
    unordered_set<string> s;
    unordered_set<string> s2;
    
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        string temp = v[i];
        reverse(temp.begin() , temp.end());
        if(s.find(temp)!=s.end()){
            s2.insert(v[i]);
        }
        else{
            s.insert(v[i]);
        }
    }
    string ans = "";
    vector<string> a;
    
    for(auto x : s2){
        string t = x;
        reverse(t.begin() , t.end());
        ans+=t;
        s.erase(t);
        a.push_back(x);
    }
    reverse(a.begin() , a.end());
    string tem = "";
    for(auto x : s){
        if(pallindrome(x)==true){
            if(x.length() > tem.length()){
                tem = x;
            }
           
        }
    }
    ans+=tem;
    
    //string ans2 = 0;
    for(int i=0;i<a.size();i++){
        ans+=a[i];
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
    
    
}


        



       



