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
//           long long ans2 = 0;
//           reverse(v.begin() , v.end());
//           long long lcm = 0;
//           vector<long long > temp2;
//           int count2 = 0;
//           for(int i=m;i>=1;i--){
//               for(int j=0;j<n;j++){
//                   if(v[j]%i==0){
//                       if(lcm==0){
//                           lcm = v[j];
//                           temp2.push_back(v[j]);
//                       }
//                       else{
//                           if(lcm%v[j]==0){
//                               continue;
//                           }
//                           else{
//                               long long pro = lcm * v[j];
//                               lcm = (pro)/__gcd(lcm , v[j]);
//                           }
//                       }
//                       count2++;
//                   }
//               }
//           }
//         //   for(auto x : temp2){
//         //       cout<<x<<" ";
//         //   }
//         //   cout<<endl;
//         //   cout<<count2<<endl;
          
//           if(count2==m){
//               ans2 = temp2[temp2.size() -1] - temp2[0];
//               //cout<<temp2[temp2.size() - 1]<<" "<<temp2<<endl;
//               ans = min(ans2 , ans);
//              // cout<<ans2<<" "<<ans<<endl;
//           }
          
          
          
          
//           cout<<ans<<endl;
//       }
       
       
//   }
   
 
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         //blhhecjulr
//         vector<int> v(n);
//         map<int , vector<int>> mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]].push_back(i);
//         }
//         int ans = INT_MAX;
//         for(auto x : mp){
//             vector<int> temp = x.second;
//             int m = temp.size();
//             if(m==1){
//                 if(temp[0]==0 || temp[0]==n-1){
//                   ans = min(ans  , 1);
//                 }
//                 else{
//                     ans = min(ans , 2);
//                 }
//                 continue;
                
//             }
//             int count = 0;
//             for(int i=0;i<m;i++){
//                 if(i==0){
//                     if(temp[i] >=1){
//                         count++;
//                         continue;
//                     }
                   
//                 }
//                  if(i==m-1){
//                     if(temp[i] < (n-1)){
//                         count++;   
//                     }
//                 }
//                 if(temp[i] - temp[i-1] > 1){
//                     count++;
//                 }
                
//             }
//             ans = min(ans , count);
//         }
//         cout<<ans<<endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         //blhhecjulr
//         vector<int> v(n);
//         map<int , vector<int>> mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]].push_back(i);
//         }
//         if(n==1){
//             cout<<0<<endl;
//         }
//         else{
//             int ans = INT_MAX;
//         for(auto x : mp){
//             vector<int> temp = x.second;
//             int m = temp.size();
//             if(m==1){
//                 if(temp[0]==0 || temp[0]==n-1){
//                   ans = min(ans  , 1);
//                 }
//                 else{
//                     ans = min(ans , 2);
//                 }
//                 continue;
                
//             }
//             int count = 0;
//             for(int i=0;i<m;i++){
//                 if(i==0){
//                     if(temp[i] >=1){
//                         count++;
//                         continue;
//                     }
//                     else{
//                         continue;
//                     }
                   
//                 }
//                  if(i==m-1){
//                     if(temp[i] < (n-1)){
//                         count++;   
//                     }
//                 }
//                 if(temp[i] - temp[i-1] > 1){
//                     count++;
//                 }
                
//             }
//             ans = min(ans , count);
//         }
//         cout<<ans<<endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin() , v.end());
//         long long ans = 0;
//         for(int i=0;i<n-1;i++){
//             // for(int j=i+1;j<n;j++){
//             //     if((v[j]&v[i]) >= (v[j]^v[i])){
//             //         ans++;
//             //     }
//             //     else{
//             //         break;
//             //     }
//             // }
            
            
//             int temp = 0;
//             int low = i;
//             int high = n-1;
//             while(high >= low){
//                 int mid = (low + high)/2;
//                 if((v[mid] & v[i]) >= (v[mid]^v[i])){
//                     temp = mid - i;
//                     low = mid+1;
//                 }
//                 else if((v[mid] & v[i]) < (v[mid]^v[i])){
//                     high = mid -1;
//                 }
//             }
//             ans+=temp;
//         }
//         cout<<ans<<endl;
//     }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n , x, y;
        cin>>n>>x>>y;
        int temp = abs(x - y);
        if(n==2){
           cout<<x<<" "<<y<<endl; 
        }
        
        else{
            vector<int> b(n);
            vector<int> a(n);
            b[n-1] = 1e9 + 5;
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    a[i] = x;
                    a[j] = y;
                   int  diff = y - x;
                    int d = j - i; 
                    if(diff%d==0){
                        diff = diff/d;
                        for(int k = i-1;k>=0;k--){
                            a[k] = a[k+1] - diff;
                        }
                        for(int k = i+1;k<n;k++){
                            a[k]= a[k-1] + diff;
                        }
                        if(a[0] > 0 && a[n-1] < b[n-1]){
                            b = a;
                        }
                        
                        
                    }
                }
            }
            for(auto x: b){
            cout<<x<<" ";
        }
        cout<<endl;
                
        }
        
    }
}
        







