// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int ta;
//   cin>>ta;
//   while(ta--){
//       int na ;
//       cin>>na;
//       int qyreer= 0;
//       int kaghdf = 0;
//       int znbccNc = 0;
//       int nnnnn = 0;
//       int mmmmmm = 0;
//       int uuuuuu = 0;
//       vector<string> v(2*(na-1));
//       for(int i=0;i<(2*(na-1));i++){
//           cin>>v[i];
//       }
//       vector<string> s;
//       for(int i=0;i<(2*(na-1));i++){
//           if(v[i].size()==(na-1)){
//               s.push_back(v[i]);
//           }
//       }
//       if(s[0].substr(1)!=s[1].substr(0 , na-2)){
//           swap(s[0] , s[1]);
          
//       }
//       string tmt = s[0] + s[1][na-2];
//       string tmgf = tmt;
//       reverse(tmgf.begin() , tmgf.end());
//       if(tmt==tmgf){
//           cout<<"YES"<<endl;
//       }
//       else{
//           cout<<"NO"<<endl;
//       }
//   }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int na ;
      cin>>na;
      vector<long long > vm(na);
      for(int i=0;i<na;i++){
          cin>>vm[i];
      }
      queue<int> pqr;
      int rqiyrqu = 0;
      int alfdfhh = 0;
      int zmcbcbc = 0;
      int dahkfhj = 0;
      for(int i=0;i<na;i++){
          pqr.push(vm[i]);
          while(pqr.front() < pqr.size()){
              pqr.pop();
          }
          cout<<pqr.size()<<" ";
      }
      cout<<endl;
      
      
      
  }
}
