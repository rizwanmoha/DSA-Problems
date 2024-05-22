// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ;
//     cin>>n;
//     long long ans = 2 *(n-1);
//     ans = 3 *ans;
//     if(n==1 || n==2){
//         cout<<4<<endl;
//     }
//     else{
//         cout<<ans<<endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// bool check(long long n){
//     for(long long i=2;i*i<= n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void prime(long long n , vector<long long > &v){
//     long long k = n;
//     for(long long i=2;i<=n/2;i++){
//         while(k%i==0){
//             v.push_back(i);
//             k = k/i;
//         }
//         if(i > k){
//             break;
//         }
//     }
// }
// int main() {
    
//     int t ;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
       
//         if(check(n)==true){
//             cout<<1<<endl;
//             cout<<n<<endl;
//         }
//         else{
//              vector<long long > v;
//              prime(n , v);
//              stack<long long > q;
//              //cout<<v.size()<<endl;
//              long long freq = 0;
//              long long pro  = 1;
//              map<long long , long long> mp;
             
//              for(auto x : v){
//                 // cout<<x<<" ";
//               mp[x]++;
//               freq = max(freq , mp[x]);
//              }
//              vector<long long> temp;
//              for(auto x : mp){
//                  if(x.second==freq){
//                      temp.push_back(x.first);
//                  }
//              }
//              sort(temp.begin() , temp.end());
//              long long ins = temp[0];
//              vector<long long> gh ;
//              for(int i=0;i<freq;i++){
//                  gh.push_back(ins);
//                  pro = pro * ins;
                 
//              }
//              long long te = n/pro;
//             if(te >= 2){
//                  gh.push_back(te);
//              }
//              sort(gh.begin() , gh.end());
             
             
//             // cout<<endl;
//              long long m = gh.size();
//              for(int i=0;i<m ;i++){
//                  if(q.empty()){
//                      q.push(gh[i]);
//                  }
//                  else{
//                      if(gh[i]%q.top()==0){
//                          q.push(v[i]);
//                      }
//                      else{
//                          long long temp = gh[i] *q.top();
//                          q.pop();
//                          q.push(temp);
//                      }
//                  }
//              }
//              vector<long long > ans;
//              while(!q.empty()){
//                  ans.push_back(q.top());
//                  q.pop();
//              }
//              sort(ans.begin() , ans.end());
//              cout<<ans.size()<<endl;
//              for(auto x : ans){
//                  cout<<x<<" ";
//              }
//              cout<<endl;
//         }
//         /*1
// 9876543210*/
//     }
// }
