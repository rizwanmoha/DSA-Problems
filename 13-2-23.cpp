// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       long long  ans = 0;
//       for(int i=1;i<n;i++){
//           if(v[i] >= v[i-1]){
//               continue;
//           }
//           else{
//               long long temp = v[i-1] - v[i];
//               long long temp2 = ceil(log2(temp +1));
             
//              v[i] = v[i-1];
//               ans = max(ans , temp2);
//                     // int ind = i;
//                     // //cout<<"absdd"<<" ";
//                     // while(ind < n && v[ind]==v[i]){
//                     //   //  cout<<"ghdcdavhg"<<" ";
//                     //     v[ind] = v[ind] + pow(2 , temp2);
//                     //     ind++;
//                     // }
//                     // i = ind - 1;
                    
                    
            
//           }
//       }
//       cout<<ans<<endl;
//   }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long  n , a , b ;
//       cin>>n>>a>>b;
//       bool check = false;
//       for(long long  i=0;i<33;i++){
//           long long temp = pow(a , i);
//           if(temp >  n){
//               break;
//           }
//           if((n-temp)%b==0){
//               check = true;
//               break;
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


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
      
//       long long n , s;
//       cin>>n>>s;
//       long long temp = n;
//       long long sum = 0;
//       while(temp > 0){
//           sum+=temp%10;
//           temp= temp/10;
//       }
//       if(sum <= s){
//           cout<<0<<endl;
//           continue;
//       }
      
//       string an = to_string(n);
//       reverse(an.begin() , an.end());
//       long long ans = 0;
//       long long pt = 0;
//       int m = an.length();
//       for(int i=0;i<m;i++){
//           if(i==0){
//               long long te = pow(10 , pt);
//               pt++;
//               long long tr = an[i] - '0';
//               long long tp = 10 - tr;
//               ans = (te * tp) + ans;
//               sum-=(tr - 1);
              
//           }
//           else {
//               long long te = pow(10 , pt);
//               pt++;
//               long long tr = an[i] - '0';
//               long long tp = 9  - tr;
//               ans = (te * tp) + ans;
//               sum-=(tr);
//           }
          
//           if(sum <= s){
//               break;
//           }
//       }
//       cout<<ans<<endl;
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//   long long n , q;
//   cin>>n>>q;
//   vector<long long > v(n);
//   for(int i=0;i<n;i++){
//       cin>>v[i];
//   }
//   map<long long , long long > mp;
//   for(int i=0;i<q;i++){
//       long long a , b;
//       cin>>a>>b;
//       for(int j= a; j<= b;j++){
//           mp[j]++;
//       }
//   }
//   priority_queue<long long> qp;
//   for(auto x : mp){
//       qp.push(x.second);
//   }
//   long long sum = 0;
//   sort(v.begin() , v.end());
//   int ind =  n -1;
//   while(!qp.empty()){
//       long long temp = (qp.top() * v[ind--]);
//       qp.pop();
//       sum+=temp;
//   }
//   cout<<sum<<endl;
// }




// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//       long long n ;
//       cin>>n;
//       vector<long long > v;
//       map<string  , long long > mp;
//       vector<pair<string  , long long >> pa;
//       long long m = INT_MIN;
//       for(int i=0;i<n;i++){
//           string a ;
//           cin>>a;
//           long long b;
//           cin>>b;
//          //if(b > 0){
//               mp[a] = mp[a] + b;
//          //}
//         // cout<<a<<" " <<mp[a]<<endl;
//          pa.push_back({a , b});
         
          
//       }
      
//       string ans = "";
//       for(auto x : mp){
//         //   if(x.second==m){
//         //       ans = x.first;
//               v.push_back(x.second);
//                 m = max(m , x.second);
//         //   }
         
//       }
//     //   if(v.size()==1){
//     //       cout<<ans<<endl;
//     //       return 0;
//     //   }
//     //   ans = "";
//     //cout<<m<<endl;
//       map<string  , long long > mp2;
//       for(int i=0;i<n;i++){
//           mp2[pa[i].first]+=pa[i].second;
//           if(mp[pa[i].first]==m && mp2[pa[i].first] >=m){
//               ans = pa[i].first;
//               break;
//           }
//       }
//       cout<<ans<<endl;
      
      
      
      
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     long long t ;
//     cin>>t;
//     while(t--){
//         string str;
//         cin>>str;
//         int n = str.length();
//         map<string , long long  > mp;
//         for(int i=0;i<n-1;i++){
//             string temp = "" ;
//              temp+=str[i];
//             temp+=str[i+1];
//             mp[temp]++;
//         }
//         long long m = INT_MIN;
//         for(auto x : mp){
//             m = max(m , x.second);
//         }
//         long long ans =  n - (2 * m);
//         cout<<ans<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count()); 
    int n ;
    cin>>n;
    vector<pair<long long , long long >> pa(n);
    for(int i=0;i<n;i++){
        cin>>pa[i].first>>pa[i].second;
    }
    long long ans = n;
    long long left = 0;
    long long right = 0;
    
    
}
    







