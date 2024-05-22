// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//   cin>>t;
//   while(t--){
 
//     long long n  , x , y;
//     cin>>n>>x>>y;
//     string a , b;
//     cin>>a>>b;
    
//     long long d = 0;
//     vector<long long > v;
//     for(int i=0;i<n;i++){
//         if(a[i]!=b[i]){
//             d++;
//             v.push_back(i+1);
//         }
//     }
//     if(d%2==1){
//         cout<<-1<<endl;
//     }
//     else{
//         int m = v.size();
//         long long ans = 0;
//         for(int i=1;i<m;i+=2){
//             long long temp = v[i] -v[i-1];
//             temp = temp * x;
//             long long temp2 = 2 * y;
//             ans+=min(temp , temp2);
            
//         }
        
//         cout<<ans<<endl;
//     }
   
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       long long ans = 0;
//       if(n%2==1){
//           for(int i=1;i<n-1;i+=2){
//               long long temp = 0;
//               long long temp2 = 0;
//              if(v[i] <= v[i-1]){
//                  temp = (v[i-1] - v[i]) + 1;
//              }
//              if(v[i] <=v[i+1] ){
//                  temp2 = (v[i+1] - v[i]) +1;
//              }
//              ans+=max(temp , temp2);
//           }
//           cout<<ans<<endl;
//       }
//       else{
//           long long tot = 0;
//     for (int i = 1; i < n-1; i+= 2)
//      {
//          long long temp = 0;
//               long long temp2 = 0;
//              if(v[i] <= v[i-1]){
//                  temp = (v[i-1] - v[i]) + 1;
//              }
//              if(v[i] <=v[i+1] ){
//                  temp2 = (v[i+1] - v[i]) +1;
//              }
//              tot+=max(temp , temp2);
          
//      }
 
//           ans = tot;
//             for (int i = n - 2; i > 0; i -= 2) {
                
//                 long long temp = 0;
//               long long temp2 = 0;
//              if(v[i] <= v[i-1]){
//                  temp = (v[i-1] - v[i]) + 1;
//              }
//              if(v[i] <=v[i+1] ){
//                  temp2 = (v[i+1] - v[i]) +1;
//              }
//              long long temp3 = max(temp , temp2);
                
//                 temp = 0;
//                 temp2 = 0;
//                 if(v[i-1] <= v[i-2]){
//                  temp = (v[i-2] - v[i-1]) + 1;
//              }
//              if(v[i-1] <=v[i] ){
//                  temp2 = (v[i] - v[i-1]) +1;
//              }
//             long long  temp4 = max(temp , temp2);
                
                
                
                
                
//                 tot -= temp4;
//                 tot += temp3;
//                  ans = min(ans, tot);
//             }
 
//             cout << ans << "\n";
//       }
//   }
// }


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
  cin>>t;
  while(t--){
      long long n , m;
      cin>>n>>m;
      vector<string > v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      
      if(v[0][0]=='1'){
          cout<<-1<<endl;
          continue;
      }
      vector<vector<int >> ans;
      for(int i=n-1;i >= 0;i--){
          for(int j=m-1;j >= 0;j--){
              if(v[i][j]=='1'){
                  vector<int> temp;
                  if(j!=0){
                      temp.push_back(i+1);
                      temp.push_back(j);
                      temp.push_back(i+1);
                      temp.push_back(j+1);
                      
                  }
                  else{
                      temp.push_back(i);
                      temp.push_back(j+1);
                      temp.push_back(i+1);
                      temp.push_back(j+1);
                  }
                  ans.push_back(temp);
              }
          }
      }
      long long s = ans.size();
      cout<<s<<endl;
      for(long long i = 0;i<s;i++){
          for(int j =0;j<4;j++){
              cout<<ans[i][j]<<" ";
          }
          cout<<endl;
      }
      
      
      
  }
}
 




















