// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       long long a , b;
       cin>>a>>b;
       string str;
       cin>>str;
       long long start = 0;
       long long last = (a+b) - 1;
       bool check = true;
      // cout<<"hsavgdhgv"<<" "<<a<<" "<<b;
       while(last >= start && check==true){
           //cout<<"dhbkhdjvksd"<<" ";
           if(str[last]==str[start]){
               if(str[last]!='?'){
                   last--;
                   start++;
                   continue;
               }
               else{
                   if(a >= 2 && a > b){
                       a-=2;
                       str[start++] = '0';
                       str[last--] = '0';
                   }
                   else if(b >=2 && b > a){
                       b-=2;
                       str[start++] = '1';
                       str[last--] = '1';
                   }
                   else if(start==last){
                       if(a > 0){
                           str[start]='0';
                       }
                       else if(b > 0){
                           str[start]='1';
                       }
                       else{
                          check = false;
                       break; 
                       }
                       
                   }
                   else{
                       check = false;
                       break;
                   }
               }
               
           }
           else{
               if(str[start]=='1' && str[last]=='?'){
                   if(b > 0){
                       b--;
                       str[last] = '1';
                       last--;
                       start++;
                   }
                   else{
                      check=false;
                      break;
                   }
               }
               else if(str[start]=='0' && str[last]=='?'){
                   if(a > 0){
                       a--;
                       str[last] = '0';
                       last--;
                       start++;
                   }
                   else{
                      check=false;
                      break;
                   }
               }
               else if(str[last]=='1' && str[start]=='?'){
                   if(b > 0){
                       b--;
                       str[start] ='1';
                       start++;
                       last--;
                   }
                   else{
                       check=false;
                       break;
                   }
               }
               else if(str[last]=='0' && str[start]=='?'){
                   if(a > 0){
                       a--;
                       str[start]='0';
                       start++;
                       last--;
                       
                   }
                   else{
                       check=false;
                       break;
                   }
               }
               else{
                   check=false;
                   break;
               }
               
           }
           if(check==false){
               break;
           }
       }
       int zero = 0;
       int one = 1;
       for(int i=0;i<str.length();i++){
           if(str[i]=='0'){
               zero++;
           }
           else if(str[i]=='1'){
               one++;
           }
           else {
               check=false;
               break;
           }
       }
       if(zero!=a || one!=b){
           check=false;
           break;
       }
       if(check==false){
           cout<<-1<<endl;
       }
       else{
           cout<<str<<endl;
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
//       long long n ;
//       cin>>n;
//       cout<<n-1<<endl;
//   }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int ta;
//   cin>>ta;
//   while(ta--){
//       long long s , ka ;
//       cin>>s>>ka;
//       vector<int> v(s);
//       for(int i=0;i<s;i++){
//           cin>>v[i];
//       }
//       //fbcegkyucebcgek
//       //jvqdhcvkgetebvg
//       //jkcvjdckgewbqeukbdgvkuc
//       vector<int> flag(s+1, 0);
//       int a = 1;
//       for(int i = 0; i<s; i++) {
//           if(v[i]==a && flag[a]==0) flag[a++]=1;
//           else if(v[i]==a && flag[a]==1) break;
//           else flag[v[i]] = 1;
//       }
//       cout<<(s-a+ka)/ka<<"\n";
//   }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      long long n ;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      map<int  , int> mp;
      map<int  , int> mp2;
      bool check = true;
      vector<int> p(n);
      vector<int> q(n);
      int start = 1;
      for(int i=0;i<n;i++){
          if(i==0){
              p[i] = start++;
              q[i] = v[i];
              
          }
          else{
              if(start > v[i]){
                  check = false;
              }
              
          }
      }
      
  }
}
      
      
      
      
      
      






