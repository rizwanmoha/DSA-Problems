// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > adj[n+1];
//       vector<long long > u(n);
//       for(int i=0;i<n;i++){
//           cin>>u[i];
//       }
//       vector<long long > s(n);
//       map<int  , priority_queue<long long >> mp;
//       for(int i=0;i<n;i++){
//           cin>>s[i];
//           mp[u[i]].push(s[i]);
//       }
//       for(auto x : mp){
//           long long temp = x.first;
//           long long sum = 0;
//           while(!x.second.empty()){
//               sum+=x.second.top();
//               adj[temp].push_back(sum);
//               x.second.pop();
//           }
//       }
//      // cout<<"sgdvhgd"<<endl;
//     //   for(int i=1;i<=n;i++){
//     //       long long temp = adj[i].size();
//     //       for(int j=1;j<temp;j++){
//     //           adj[i][j]+=adj[i][j-1];
//     //       }
//     //   }
//       //cout<<"bjdurtryr"<<endl;
//       vector<long long > ans(n+1 , 0);
//       for(int i=1;i<=n;i++){
//          // long long s = adj
//           for(int j=1;j<=n;j++){
//               if(adj[j].size() > 0){
//                   long long temp = adj[j].size();
//                   long long temp2 = temp/i;
//                   if(temp2 > 0){
//                       long long temp3 =  (temp2 * i);
//                   ans[i]+=adj[j][temp3-1];
//                   }
                 
//               }
//           }
//       }
//       for(int i=1;i<=n;i++){
//           cout<<ans[i]<<" ";
//       }
//       cout<<endl;
      
      
//   }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  cin>>t;
  while(t--){
      
      vector<long long > v(3);
      for(int i=0;i<3;i++){
          cin>>v[i];
      }
      sort(v.begin() , v.end());
      if(v[2] <=(v[0] + v[1])){
          cout<<(v[0] +v[1] +v[2])/2<<endl;
      }
      else{
          cout<<(v[0] + v[1])<<endl;
      }
  }
}
      
