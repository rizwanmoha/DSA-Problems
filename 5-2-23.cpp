// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n ;
//   cin>>n;
//   vector<int> v(n);
//   int odd = 0;
//   int even = 0;
//   for(int i=0;i<n;i++){
//       cin>>v[i];
//       if(v[i]%2==0){
//           even++;
//       }
//       else{
//           odd++;
//       }
//   }
//   if(odd==1){
//       int ans = 0;
//       for(int i=0;i<n;i++){
//           if(v[i]%2==1){
//               ans =( i+1);
//           }
//       }
//       cout<<ans<<endl;
//   }
//   else{
//       int ans2 = 0;
//       for(int i=0;i<n;i++){
//           if(v[i]%2==0){
//               ans2 =( i+1);
//           }
//       }
//       cout<<ans2<<endl;
       
//   }
   

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t ;
//   cin>>t;
//   while(t--){
//       long long n , x;
//       cin>>n>>x;
//       vector<long long> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       sort(v.begin() , v.end());
      
//       vector<long long > an;
//       for(int i=0;i<n;i++){
//           if(v[i]/x >= 1){
//               an.push_back(v[i]);
//           } 
          
//       }
      
//       int m = an.size();
//       long long ans = m;
//       long long sum = 0;
//       int count = 1;
//       for(int i=(n-m-1);i>=0;i--){
//          if((count * v[i]) >= x){
//              ans++;
//              count = 1;
//          }
//          else{
//              count++;
//          }
//       }
//       cout<<ans<<endl;
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//       vector<vector<char>> v(9 , vector<char>(9));
    
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 cin>>v[i][j];
//             }
//         }
//          int j = 0;
//         for(int i=0;i<3;i++){
//             //for(int j=0;j<9;j+=3){
//                 v[i][j] = v[i][j+1];
//                 j+=3;
//             //}
//         }
//       j = 1;
//         for(int i=3;i<6;i++){
//             //for(int j=1;j<9;j+=3){
//                 v[i][j] = v[i][j+1];
//                 j+=3;
//             //}
//         }
//         j = 2;
//         for(int i=6;i<9;i++){
//             //for(int j=2;j<9;j+=3){
//                 v[i][j] = v[i][j-1];
//                 j+=3;
//             //}
//         }
        
       
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 cout<<v[i][j];
//             }
//             cout<<endl;
//         }
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         int n,x ;
//         cin>>n>>x;
        
//         vector<int> v(n+1 , -1);
       
//             v[n] = 1;
//             v[1] = x;
            
//             map<int, int> mp;
            
//             mp[x] = 1;
//             int start = 2;
//             bool check = true;
           
//             vector<bool> vis(n+1 , false);
//             vis[x] = true;
//             for(int i=2;i<=n;i++){
//                 for(int j=i;j<= n;j+=i){
//                     if(vis[j]==false && i==j){
//                         v[i] = j;
//                         vis[j] = true;
//                         break;
//                     }
//                     else if(vis[j]==false && n%j==0){
//                          v[i] = j;
//                         vis[j] = true;
//                         break;
//                     }
                    
//                 }
//                 if(v[i]==-1){
//                     check= false;
//                     break;
//                 }
//             }
//             if(check==false){
//                 cout<<-1<<endl;
//             }
//             else{
//                 for(int i=1;i<= n;i++){
//                 cout<<v[i]<<" ";
//             }
//             cout<<endl;
//             }
            
            
//         }
// }
        

// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<int> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       sort(v.begin() , v.end());
//       int start = 0;
//       int last = n-1;
//       long long ans = 0;
//       while(last >= start){
//           if(start==last){
//               ans++;
//           }
//           if(v[last] > v[start]){
//               start++;
//               last--;
//               ans++;
//           }
//           else{
//               break;
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
//       long long n, q;
//       cin>>n>>q;
//       vector<long long > v(n);
//       set<int> s;
//      // map<int , int> mp;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//         s.insert(i);
//       }
//       s.insert(9999999);
//       for(int i=0;i<q;i++){
//           int x ;
//           cin>>x;
//           if(x==1){
//               int l , r;
//               cin>>l>>r;
//               l--;
//               r--;
//               for(int j=l;j<=r;j++){
//                   j = *s.lower_bound(j);
//                   if(j > r)
//                   break;
                  
//                       int temp = 0;
//                       while(v[j] > 0){
//                           int temp2 = v[j]%10;
//                           v[j] = v[j]/10;
//                           temp+=temp2;
                          
//                       }
//                       if(temp < 10){
//                           s.erase(j);
//                           v[j] = temp;
//                       }
//                       else{
//                           v[j] = temp;
//                       }
                      
                 
//               }
//           }
//           else{
//               int r;
//               cin>>r;
//               cout<<v[r-1]<<endl;
//           }
//       }
      
      
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long  n , c;
//       cin>>n>>c;
//       vector<long long > v(n);
//       vector<long long> sum;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           sum.push_back(v[i] + i+1);
//       }
//       long long ans = 0;
//       sort(sum.begin() ,sum.end());
//       for(int i=0;i<n;i++){
//           if(c >= sum[i]){
//               c-=sum[i];
//               ans++;
//           }
//           else{
//               break;
//           }
//       }
      
      
//       cout<<ans<<endl;
      
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int n ;
//   cin>>n;
//   vector<long long > a(n);
//   vector<long long > b(n);
//   vector<long long > diff(n);
  
  
//   for(int i=0;i<n;i++){
//       cin>>a[i];
      
//   }
  
//   for(int i=0;i<n;i++){
//       cin>>b[i];
//       diff[i] = a[i] - b[i];
      
//   }
  
//   //cout<<diff[0]<<" "<<diff[n-1]<<endl;
  
//   sort(diff.begin() , diff.end());
  
//   //cout<<diff[0]<<" "<<diff[n-1]<<endl;
//   long long ans = 0;
//   for(int i=0;i<n-1;i++){
//       int low = i;
//       int high = n-1;
//       int temp = -1;
//       while(high >= low){
//           int mid = (low + high )/2;
//           if((diff[mid] + diff[i]) > 0){
//               temp = mid;
//               high = mid - 1;
              
//           }
//           else{
//               low = mid + 1;
//           }
//       }
//       if(temp!=-1){
//           if(temp==i){
//               temp++;
//           }
//           int temp2 = n- temp;
//         //  cout<<temp<<" "<<temp2<<endl;
//           ans+=temp2;
//       }
//   }
//   cout<<ans<<endl;
  
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//      int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
      
//       vector<vector<char>> v(n , vector<char> (n));
//       for(int i=0;i<n;i++){
//           for(int j=0;j<n;j++){
//               cin>>v[i][j];
//           }
//       }
//       bool check = true;
//       for(int i=0;i<n;i++){
//           for(int j=0;j<n;j++){
//              // cout<<"dvgdgj,"<<" ";
//               if(v[i][j]=='0'){
//                   continue;
//               }
//               else if(v[i][j] == '1'){
//                   if(j==(n-1)){
//                       continue;
//                   }
//                   else if(i==(n-1)){
//                       continue;
//                   }
//                   else{
//                       if(v[i][j+1]=='1' || v[i+1][j]=='1'){
//                           continue;
//                       }
//                       else{
//                           check = false;
//                           break;
//                       }
//                   }
//                   if(check==false){
//                       break;
//                   }
//               }
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
  
//       long long n , m;
//       cin>>n>>m;
//       vector<long long > v(n);
//       vector<long long > b(m);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       for(int i=0;i<m;i++){
//           cin>>b[i];
//       }
//       vector<long long > ans(m);
//       sort(v.begin() , v.end());
//       vector<long long >::iterator upper1;
//       for(int i=0;i<m;i++){
//           upper1 = upper_bound(v.begin(), v.end(), b[i]);
//           ans[i] = upper1 - v.begin();
//       }
//       for(auto x : ans){
//           cout<<x<<" ";
//       }
//       cout<<endl;
      
  
// }


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
  cin>>t;
  while(t--){

    long long n  , x , y;
    cin>>n>>x>>y;
    string a , b;
    cin>>a>>b;
    long long d = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            d++;
        }
    }
    if(d%2==1){
        cout<<-1<<endl;
    }
    else{
        if(x <= (2*y)){
            long long ans = 0;
            int count = 0;
            for(int i=0;i<n-1;i++){
                if(a[i]!=b[i] && a[i+1]!=b[i+1]){
                    count++;
                    i++;
                }
            }
            ans+=(count * x);
            d = (d - (2*count));
            d = d/2;
            ans+=(d * y);
            cout<<ans<<endl;
        }
        else{
            
            int count2 = 0;
            for(int i=0;i<n-1;i++){
                if(a[i]!=b[i] && b[i+1]!=a[i+1]){
                    count2++;
                    i++;
                }
            }
            long long ans2 = y * (count2*2 );
            d = d - (2 * count2);
            d = d/2;
            ans2+=(d * y);
            cout<<ans2<<endl;
            
        }
    }
  }
}

      
// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       long long alice = 1;
//       long long bob = 0;
//       n--;
//       int flip= 0;
//         long long start = 2;
//       while(n > 0){
//           if(flip==0){
//               flip = 1;
//               long long temp = start;
//               temp = min(temp , n);
//               bob+=temp;
//               n-=temp;
//               temp= start++;
//               temp = min(start , n);
//               n-=temp;
//               bob+=temp;
//               start++;
               
               
//           }
//           else{
//               flip = 0;
//               long long temp2 = start;
//                 temp2 = min(temp2 , n);
//                 alice+=temp2;
//               n-=temp2;
               
               
//               temp2= start++;
//               temp2 = min(start , n);
//               n-=temp2;
//               alice+=temp2;
//               start++;
//           }
//       }
//       cout<<alice<<" "<<bob<<endl;
       
//   }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       long long wa = 1;
//       long long ba = 0;
//       long long wb = 0;
//       long long bb = 0;
//       n--;
//       int flip = 0;
//       long long start = 2;
//       while(n > 0){
//           if(flip ==0 ){
//               flip = 1;
//               long long temp = start;
//               temp = min(temp , n);
//               wb+=(floor((double)temp/2));
//               // bb+=(temp/2);
//               bb+=(ceil((double)temp/2));
//               n-=temp;
//               start++;
//               temp = start;
//               temp = min(temp , n);
//               wb+=(temp/2);
//                 bb+=(ceil((double)temp/2));
//                 n-=temp;
//                 start++;
               
               
               
//           }
//           else{
//               flip = 0;
//               long long temp2 = start;
//               temp2 = min(temp2 , n);
//               wa+=(ceil((double)temp2/2));
//               ba+=(floor((double)temp2/2));
//               n-=temp2;
//               start++;
//               temp2=start;
//               temp2 = min(temp2 , n);
//               wa+=(ceil((double)temp2/2));
//               ba+=(floor((double)temp2/2));
//               n-=temp2;
//               start++;
//           }
//       }
//       cout<<wa<<" "<<ba<<" "<<wb<<" "<<bb<<endl;
       
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
      
      vector<long long > v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      long long ans = 0;
      sort(v.begin() , v.end());
      if(v[0]!=1){
          ans+=(v[0] - 1);
          v[0] = 1;
      }
      
      for(int i=1;i<n;i++){
          if(v[i]==v[i-1]){
              continue;
          }
          else if((v[i]- v[i-1])==1){
              continue;
          }
          else{
              long long temp = (v[i] - v[i-1]) - 1;
              ans+=temp;
              v[i] = v[i-1] +1 ;
          }
      }
      cout<<ans<<endl;
  }
}






















