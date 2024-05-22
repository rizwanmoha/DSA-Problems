// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n ;
      cin>>n;
      vector<long long > v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      int l = 0;
      int g = 1;
      int sd = 0;
      long long te = 100000;
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             te = min(te , __gcd(v[i] , v[j]));
         }
     }
     if(te > 2){
         cout<<"NO"<<endl;
     }
     else{
         cout<<"YES"<<endl;
     }
}

int main() {
  int t;
  cin>>t;
  while(t--){
     solve();
     //
  
  }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//   int ta;
//   cin>>ta;
//   while(ta--){
//      
//       int k = 0;
//       int l = 0;
//       int na ;
//       cin>>na;
//       string str;
//       cin>>str;
//       bool check = true;
//       int i=0;
//       int e = na-1;
//       int f = 0;
//       int count = 0;
//       while(e > i){
           
//           if(str[i]==str[e]){
//               e--;
             
//               i++;
//               if(count > 0){
//                   f=1;
//               }
//           }
//           else{
//              if(f==0){
//                  count++;
//              }
//              else{
//                  check = false;
//              }
//              e--;
//              i++;
              
//           }
//       }
      
//       if(check==true){
//           cout<<"YES"<<endl;
//       }
//       else{
//           cout<<"NO"<<endl;
//       }
//   }
// }
      
