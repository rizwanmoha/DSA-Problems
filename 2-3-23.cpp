// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//       long long n ;
//       cin>>n;
//       vector<vector<long long >> v(n , vector<long long >(n));
//       long long sum = 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cin>>v[i][j];
//                 sum+=v[i][j];
//             }
//         }
//         long long mn = INT_MAX;
//         for(int i=0;i<n;i++){
//             mn = min(mn , v[i][n-1-i]);
//         }
//         cout<<sum-mn<<endl;
        
        
        
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//       long long t ;
//       cin>>t;
//       while(t--){
//           long long n ;
//           cin>>n;
//           vector<long long > v(n);
//          long long m = INT_MAX;
//          long long ch = 31;
//          for(int i=0;i<n;i++){
//               cin>>v[i];
//              m = max(m , v[i]);
//           }
//           vector<long long > ans;
//           long long x = 0;
//           vector<int> ind(n , 0);
//          for(int i=0;i<min(n , ch);i++){
//              long long temp = x;
//              int in = -1;
//              for(int j=0;j<n;j++){
//                  if(ind[j]==-1){
//                  continue;
//              }
//              else{
//                  long long temp2 = x|v[j];
//                  if(temp <= temp2){
//                      temp = temp2 ;
//                      in = j;
//                  }
                 
//              }
//              }
//              x = temp;
//              ans.push_back(v[in]);
//              ind[in] = -1;
//          }
//          for(int i=0;i<n;i++){
//              if(ind[i]==-1){
//                  continue;
//              }
//              else{
//                  ans.push_back(v[i]);
//              }
//          }
//           for(auto x : ans){
//               cout<<x<<" ";
//           }
//           cout<<endl;
          
//       }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  
      long long t ;
      cin>>t;
      while(t--){
          int n ;
          cin>>n;
          string str;
          cin>>str;
          int dcount = 0;
          int kcount = 0;
          map<pair<int , int > , int> mp;
          for(int i=0;i<n;i++){
              if(str[i]=='D'){
                  dcount++;
              }
              else{
                  kcount++;
              }
            int gcd = __gcd(dcount , kcount);
            int a = dcount/gcd;
            int b = kcount/gcd;
            cout<<++mp[{a , b}]<<" ";
              
          }
          cout<<endl;
      }
}

      
      
      
      
      
      
      
      
      
      
