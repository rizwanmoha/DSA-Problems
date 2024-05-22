//#include <bits/stdc++.h>
//using namespace std;
// 
//int main() {
//  int t;
//  cin>>t;
//  while(t--){
//      int n ;
//      cin>>n;
//      
//      
//      string str;
//      cin>>str;
//      int zero = 0;
//      for(int i=0;i<n;i++){
//          if(str[i]=='0'){
//              zero++;
//          }
//      }
//      if(zero==1 || zero%2==0){
//          cout<<"BOB"<<endl;
//      }
//      else{
//          cout<<"ALICE"<<endl;
//      }
//  }
//}
//
//



#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n ;
      cin>>n;
      
      //vector<long long> v;
      map<long long , long long> mp;
      long long ans  = 0;
      for(int i=0;i<n;i++){
          int temp ;
          cin>>temp;
          temp = temp - i;
          ans+=mp[temp];
          mp[temp]++;
      }
      cout<<ans<<endl;
  }
}
