// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> v(n);
        map<int , vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        for(auto x : mp){
            vector<int> temp = x.second;
            int m = temp.size();
            for(int i=0;i<m;i++){
                if(temp[i]==0){
                    if(i+1 < m){
                        if((temp[i+1]-temp[i]) > 1){
                            ans+=1;
                        }
                        else{
                            continue;
                        }
                    }
                    else{
                        continue;
                    }
                }
                else if(temp[i]==n){
                    if(i-1 >= 0){
                        if(temp[i]-temp[i-1] > 1){
                            ans+=1;
                        }
                    }
                }
                else{
                    if(i==0){
                        ans+=1;
                        if(i+1 < m){
                            
                        }
                    }
                }
            }
        }
    }

    return 0;
}

// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long>  v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//     //   if(n > 1){
//     //       v.push_back(v[0]);
//     //   }
//       //stack<long long > s;
//       vector<long long> t;
//       //t.push_back(v[0]);
//       long long   ans = 0;
//       for(int i=0;i<n;i++){
//           if(i+1 < n && v[i]%2==0 && v[i+1]%2==0){
//               ans++;
//               long long temp = v[i+1] * v[i];
//               //t.pop_back();
//               t.push_back(temp);
//           }
//           else if(i+1 < n && v[i]%2==1 && v[i+1]%2==1){
//               ans++;
//               long long temp = v[i+1] * v[i];
//               //t.pop_back();
//               t.push_back(temp);
//           }
//           else{
//               t.push_back(v[i]);
//           }
//       }
       
//     //   if(t.size() > 1){
//     //       if(t[0]%2==1 && t[t.size()-1]%2==1){
//     //           ans++;
//     //       }
//     //       else if(t[0]%2==0 && t[t.size()-1]%2==0){
//     //           ans++;
//     //       }
//     //   }
   
//       cout<<ans<<endl;
//   }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      
    int n , m ;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
     cout<<",hfbhff"<<" ";
     vector<long long> temp;
     int count = 0;
     sort(v.begin() , v.end());
     cout<<" bfhefjef"<<" ";
     unordered_set<long long> s;
     for(int i=1;i<m+1;i++){
         for(int j = 0;j<n;j++){
             if(v[j]%i==0){
                 if(s.find(v[j])!=s.end()){
                      temp.push_back(v[j]);
                      s.insert(v[j]);
                 }
                
                 count++;
                 break;
             }
         }
     }
     if(count!=m){
         cout<<-1<<endl;
     }
    else{
        cout<<"jvjvcf"<<" ";
         long long ans = temp[temp.size()-1] - temp[0];
         cout<<"v,jhd,jvg"<<" ";
     int k = temp.size();
     bool check = false;
     int i = 0;
     while(i< n){
         for(int j =i+1;j<k;j++ ){
             if(temp[j]%temp[i]==0){
                 ans-=(temp[i+1]- temp[i]);
                 i++;
                 check = true;
                 break;
             }
         }
         if(check==false){
             break;
         }
     }
     cout<<ans<<endl;
    }
     
  }
}
      

// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n, m ;
//       cin>>n>>m;
//       vector<long long> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       //cout<<"vgchjvj"<<endl;
//       sort(v.begin() , v.end());
//       int count = 0;
//       unordered_set<long long> s;
//       //cout<<"hcehq"<<endl;
//       vector<long long> temp;
//       for(int i=1;i<m+1;i++){
//           for(int j=0;j<n;j++){
//               if(v[j]%i==0){
//                   if(s.find(v[j])==s.end()){
//                       s.insert(v[j]);
//                       temp.push_back(v[j]);
//                   }
//                   count++;
//                   break;
//               }
//           } 
//       }
//       //cout<<"cjble"<<endl;
//   // cout<<123<<endl;
//       if(count!=m){
//          // cout<<543<<endl;
//           cout<<-1<<endl;
//       }
//       else{
//           //cout<<"cfe,jv"<<endl;
//           long long ans = 0;
//           //cout<<"bjhech"<<"";
//           //cout<<temp.size()<<endl;
//           ans = temp[temp.size()-1] - temp[0];
//           int k = temp.size();
//           int p = 0;
//           for(int i=0;i<k;i++){
//               bool check = false;
//               for(int j=i+1;j<k;j++){
//                   if(temp[j]%temp[i]==0){
//                       ans-=(temp[p+1] - temp[p]);
//                       p = i+1;
//                       check = true;
//                       break;
//                   }
//               }
//               if(check==false){
//                   break;
//               }
//           }
//           //cout<<"hcvehcb"<<endl;
//           cout<<ans<<endl;
//       }
       
       
//   }
   

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

long long fact(long long n){
    if(n==1){
        return 1;
    }
    return (n *fact(n-1))%1000000007;
}
int main() {
  int t;
  cin>>t;
  while(t--){
      
      long long n ;
      cin>>n;
      long long f = fact(n);
      long long ans = (f * (((n) *(n-1))%1000000007))%1000000007;
      cout<<ans<<endl;
  }
}
      
      
// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n ;
//   cin>>n;
//   string str;
//   cin>>str;
//   vector<int> ans;
//   for(int i=0;i<n-1;i++){
//       int temp = i+1;
//       int count = 0;
//       for(int j=0;j<n-temp;j++){
//           if(str[j]!=str[j+temp]){
//               count++;
//           }
//           else{
//               break;
//           }
//       }
//       ans.push_back(count);
//   }
    
//     for(auto x : ans){
//         cout<<x<<endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//   string str;
//   cin>>str;
//   long long n =  str.length();
//   long long ans = 0;
//   long long t = 26;
//   long long p = 0;
//   for(int i=n-1;i>=0;i--){
//       long long temp = char(str[i]) -64;
//       t = pow(26 , p);
      
//       p++;
//       t = t *temp;
     
      
//       ans+=t;
//   }
//   cout<<ans<<endl;
  
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//   string str;
//   cin>>str;
//   long long ans = 0;
//   int n = str.length();
//   for(int i=0;i<n;i++){
//       if(i==0){
//           ans++;
//       }
//       else if(str[i] > '0'){
//           ans++;
//       }
//       else if(str[i]=='0' && i+1 < n && str[i+1] =='0'){
//           ans++;
          
//           i++;
//       }
//       else {
//           ans++;
//       }
//   }
//   cout<<ans<<endl;
  
// }
  
  
  
  
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n ;
//   cin>>n;
  
//   string str;
//   cin>>str;
//   stack<char> s;
//   for(int i=0;i<n;i++){
//       if(str[i]=='"'){
//           if(s.empty()){
//               s.push(str[i]);
//           }
//           else{
//               s.pop();
//           }
//       }
//       else if(str[i]==','){
//           if(s.empty()){
//               str[i] ='.';
//           }
//       }
//       else{
//           continue;
//       }
//   }
//   cout<<str<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;
// long long fact(long long n){
//     if(n==1){
//         return 1;
//     }
//     return n *fact(n-1);
// }

// void prime(vector<long long > &v , long long k ){
//     long long temp = k;
//     for(long long i=2;i*i <= temp;i++){
//         if(k%i==0){
//             v.push_back(i);
//             while(k > 1 && k%i==0){
//                 k = k/i;
//             }
//         }
//         else{
//             continue;
//         }
//     }
//     return ;
// }

// int main() {
    
//     long long k ;
//     cin>>k;
//     vector<long long > v;
//     prime(v , k);
    
//     long long n = v.size();
//     // cout<<n<<endl;
//     // cout<<v[0]<<" "<<v[1]<<endl;
//     if(n==0){
//         cout<<k<<endl;
//     }
//     else{
//         long long ans = 0;
//     for(int i=0;i<n;i++){
//         if(fact(v[i])%k==0){
//             ans = v[i];
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     }
    
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s , t;
//     cin>>s>>t;
//     long long n = s.size();
//     int ans = -1;
//     for(int i=0;i<n;i++){
//         if(t[i]!=s[i]){
//             ans = i+1;
//             break;
//         }
//     }
//     if(ans ==-1){
//         cout<<n+1<<endl;
//     }
//     else{
//         cout<<ans<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , l;
    cin>>n>>l;
    
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> p(l+1 , 0);
    p[0] = 1;
    bool check = true;
    long long mid = ceil((double)l/2);
    int i = 0;
    
    while(i < n  && check){
        
    }
    
    
    
return 0;
}



  
  











































