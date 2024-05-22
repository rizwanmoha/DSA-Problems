// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int n ;
//     cin>>n;
//     unordered_set<long long > s;
//     map<long long  , long long > mp;
//     for(int i=0;i<n;i++){
//         char ch ;
//         long long x;
//         cin>>ch>>x;
//         if(ch=='+'){
//             s.insert(x);
//             // mp[x]++;
//         }
//         else{
//             long long ans = x;
//             long long start = 2;
//             while(s.find(ans)!=s.end()){
//                 ans = x * start;
//                 start++;
//             }
//             cout<<ans<<endl;
//         }
//     }
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        long long n , m , k;
        cin>>n>>m>>k;
        priority_queue<long long > q;
         priority_queue<long long > p;
         for(int i=0;i<k;i++){
             long long x;
             cin>>x;
             q.push(x);
             p.push(x);
         }
         bool check = true;
         int flag = 0;
         long long s = m;
         while(flag==0 && s > 0){
             long long tr = q.pop();
             q.pop();
             if(s==3){
                 if(tr < (n * 3)){
                     check = false;
                     flag = 1;
                     s-=3;
                     break;
                 }
                 else{
                     s-=3;
                 }
                 
                 
             }
             else{
                 if(tr < n * 2){
                     check = false;
                     flag = 1;
                     s-=2;
                     break;
                 }
                 else{
                     s-=2;
                 }
                 
                 
             }
             
         }
        
    }
    
}


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , m , k;
//         cin>>n>>m>>k;
//         priority_queue<long long > q;
//          priority_queue<long long > p;
//          for(int i=0;i<k;i++){
//              long long x;
//              cin>>x;
//              q.push(x);
//              p.push(x);
//          }
//          bool check = true;
//          int flag = 0;
//          long long s = m;
//          while(flag==0 && s > 0){
//              long long tr = q.top();
//              q.pop();
//              if(s==3){
//                  if(tr < (n * 3)){
//                      check = false;
//                      flag = 1;
//                      s-=3;
//                      break;
//                  }
//                  else{
//                      s-=3;
//                  }
                 
                 
//              }
//              else{
//                  if(tr < n * 2){
//                      check = false;
//                      flag = 1;
//                      s-=2;
//                      break;
//                  }
//                  else{
//                      tr-=(n*2);
//                      q.push(tr);
//                      s-=2;
//                  }
                 
                 
//              }
             
//          }
//          if(flag==0){
//              cout<<"YES"<<endl;
//          }
//          else{
//              long long d = n;
//              flag = 0;
             
//               while(flag==0 && d > 0){
//              long long tr = p.top();
//              p.pop();
//              if(d==3){
//                  if(tr < (m * 3)){
//                      check = false;
//                      flag = 1;
//                      d-=3;
//                      break;
//                  }
//                  else{
//                      d-=3;
//                  }
                 
                 
//              }
//              else{
//                  if(tr < m * 2){
//                      check = false;
//                      flag = 1;
//                      d-=2;
//                      break;
//                  }
//                  else{
//                      tr-=(m*2);
//                      p.push(tr);
//                      d-=2;
//                  }
                 
                 
//              }
             
//          }
         
//          if(flag==0){
//              cout<<"YES"<<endl;
//          }
//          else{
//              cout<<"NO"<<endl;
//          }
//          }
        
//     }
    
// }




// #include <bits/stdc++.h>
// using namespace std;
// bool ch(string s , string str , int i){
//     bool check = true;
//     int j = 0;
//     int n = str.size();
    
//     for(int k = i;k <(i+n);k++){
//         if(str[j]!=s[k]){
//             return false;
//         }
//         j++;
//     }
//     return true;
// }
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int ta;
//     cin>>ta;
//     while(ta--){
//         int na ;
//         cin>>na;
//         string stra;
//         cin>>stra;
//         string sa = "FBFFBFFBFBFFBFFBFBFFBFFB";
//         bool checka = false; 
//         int kddfkjhfd = 0;
//         int djbkckf = 0;
//         //bjhdfchebfcehf
//         //lhbdcbjhcfebcfefheb
//         //bjhdfchebfcehf
//         //lhbdcbjhcfebcfefheb
//         //bjhdfchebfcehf
//         //lhbdcbjhcfebcfefheb
//         for(int i=0;i<=10;i++){
//             if(ch(sa , stra , i)==true){
//                 checka = true;
//                 break;
//             }
//         }
//         if(checka==true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
        
        
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// void s(){
//      string s , t;
//         cin>>s>>t;
//         int c = 0;
//         // ukgveewrkugvreybic
//         //bhcesfceu fcfebhc
//         int bn = 0;
//         int mn = 0;
//         int n = s.length();
//         int m = t.length();
//         int kffafkghf = 0;
//         if(s[0]==t[0]){
//             cout<<"YES"<<endl;
//             cout<<s[0]<<"*"<<endl;
//             return ;
//         }
//         if(s[n-1]==t[m-1]){
//             cout<<"YES"<<endl;
//             cout<<"*"<<s[n-1]<<endl;
//             return;
//         }
//         int flag = 0;
//         int bcmcbnc = 0;
//         int eritweru = 0;
//         int khdfgfha = 0;
//         for(int j=0;j<n;j++){
//             for(int k=0;k<m;k++){
//                 if(k < m-1 && j < n-1 && s[j]==t[k] && s[j+1]==t[k+1]){
//                     cout<<"YES"<<endl;
//                     cout<<"*"<<s[j]<<s[j+1]<<"*"<<endl;
//                     flag = 1;
//                   return ;
//                 }
//             }
            
//         }
       
//         cout<<"NO"<<endl;
// }


// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int ta;
//     cin>>ta;
//     while(ta--){
//       s();
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int ta;
    cin>>ta;
    while(ta--){
        long long modulus = 998244353;
        
        int iyreyyr = 0;
        int kadghf = 0;
        int zmbbzcbv = 2;
       
        int lkjhgf = 0;
        long long l , r;
        cin>>l>>r;
        long long ans = 0;
        long long ma = l;
      vector<long long > a;
      long long m = l;
      while(m <= r){
          ans++;
          a.push_back(m);
          m = m*2;
          
      }
      long long a2 = 0;
      long long s = r;
      while(true){
          if(s/2 >= (2*l)){
              s/=2;
              
          }
          else{
              break;
          }
          
          
      }
      if(s/3 >= l){
          a2 = ((s/3 - l + 1) *ans)%modulus;
          
      }
      a2 = (a2+s/2 - max(s/3 , l-1))%modulus;
      
      if(r < 2*l){
          a2 = r-l + 1;
      }
      cout<<ans<<" "<<a2<<endl;
        
        
    }
}




//  #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , m , k;
//         cin>>n>>m>>k;
//         priority_queue<long long > q;
//          priority_queue<long long > p;
//          for(int i=0;i<k;i++){
//              long long x;
//              cin>>x;
//              q.push(x);
//              p.push(x);
//          }
//          bool check = true;
//          int flag = 0;
//          long long s = m;
//          while(flag==0 && s > 0 && (!q.empty())){
//              long long tr = q.top();
//              q.pop();
//              long long temp = tr /n;
//              if(temp <= 1){
//                  flag = 1;
//                  break;
//              }
//              else{
//                  tr-=(temp * n);
//                  s-=temp;
//                  q.push(tr);
//              }
             
             
             
             
//          }
//          if(flag==0 && s <= 0){
//              cout<<"YES"<<endl;
//          }
//          else{
//              flag = 0;
             
//              long long d = n;
//               while(flag==0 && d > 0 && (!p.empty())){
//              long long tr = p.top();
//              p.pop();
//              long long temp = tr /m;
//              if(temp <= 1){
//                  flag = 1;
//                  break;
//              }
//              else{
//                  tr-=(temp * m);
//                  d-=temp;
//                  p.push(tr);
//              }
             
             
             
             
//          }
             
//              if(flag==0 && d <= 0){
//                  cout<<"YES"<<endl;
//              }
//              else{
//                  cout<<"NO"<<endl;
//              }
//          }
         
         
         
         
        
//     }
    
// }

 #include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        string s , t;
        cin>>s>>t;
        int n = s.size();
        int m = t.size();
        int flag = 0;
        int i=n-1;
        for(int j=m-1;j>= 0;j--){
            while(i>= 0 && s[i]!=t[j]){
                i-=2;
            }
            if(i < 0){
                flag = 1;
                break;
            }
            
            i--;
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<vector<int>> v(n , vector<int>(5));
//       for(int i=0;i<n;i++){
//           for(int j=0;j<5;j++){
//               cin>>v[i][j];
//           }
//       }
//       int g = 0;
//       for(int i=1;i<n;i++){
//           if(v[i] < v[g]){
            
//               g = i;
//           }
//       }
//       int flag = 0;
//       for(int i=0;i<n;i++){
//           if(i==g){
              
//               continue;
//           }
//           if(v[i] < v[g]){
             
//               flag = 1;
//               break;
//           }
//       }
//       if(flag==1){
//           cout<<-1<<endl;
//       }
//       else{
//           cout<<g+1<<endl;
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
      
      int n ;
      cin>>n;
      vector<long long > v(n);
      multimap<long long, long long>  s;
      for(int i=0;i<n;i++){
          cin>>v[i];
          s.insert({v[i] , i});
      }
      bool check = true;
      sort(v.begin() , v.end());
      long long count = 0;
      for(int i=0;i<n;i++){
          auto it = s.find(v[i]);
          long long temp = abs(i - it->second);
          s.erase(it);
          count+=temp;
      }
      if(count%2==0){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n , h ;
//       cin>>n>>h;
//       vector<long long > v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       long long h2 = h;
//       long long h3 = h;
//       sort(v.begin() , v.end());
//       long long g = 2;
//       long long b = 1;
//       long long ans1 = 0;
//       long long ans2 = 0;
//       long long ans3 = 0;
//       int flag = 0;
//       for(int i=0;i<n;i++){
//           if(h > v[i]){
//               h+=(v[i]/2);
//               ans1++;
//           }
//           else{
//               bool check = false;
//               while(h <= v[i] && (b > 0 || g > 0)){
//                   if(g > 0){
//                       h = h*2;
//                       g--;
//                   }
//                   else{
//                       b--;
//                       h = h * 3;
//                   }
//                   if(h > v[i]){
//                       check = true;
//                       break;
//                   }
//               }
               
//               if(check==true){
//                   h+=v[i]/2;
//                   ans1++;
                   
//               }
//               else{
//                   flag = 1;
//                   break;
//               }
               
//           }
//           if(flag==1){
//                   break;
//               }
//       }
//       //cout<<ans1<<endl;
       
//       flag = 0;
//       g = 2;
//       b = 1;
//       for(int i=0;i<n;i++){
//           if(h2 > v[i]){
//               h2+=(v[i]/2);
//               ans2++;
//           }
//           else{
//               bool check = false;
//               while(h2 <= v[i] && (b > 0 || g > 0)){
//                   if(b > 0){
//                       h2 = h2*3;
//                       b--;
//                   }
//                   else{
//                       g--;
//                       h2 = h2 * 2;
//                   }
//                   if(h2 > v[i]){
//                       check = true;
//                       break;
//                   }
//               }
               
//               if(check==true){
//                   h2+=v[i]/2;
//                   ans2++;
                   
//               }
//               else{
//                   flag = 1;
//                   break;
//               }
               
//           }
//           if(flag==1){
//                   break;
//               }
//       }
       
//       flag = 0;
//       g = 2;
//       b = 1;
//       int f = 0;
//       for(int i=0;i<n;i++){
//           if(h3 > v[i]){
//               h3+=(v[i]/2);
//               ans3++;
//           }
//           else{
//               bool check = false;
//               while(h3 <= v[i] && (b > 0 || g > 0)){
//                   if(f==0 && g > 0){
//                       h3 = h3*2;
//                       g--;
//                       f = 1;
//                   }
//                   else if(f==1 && b > 0){
//                       b--;
//                       h3 = h3 * 3;
//                       f = 0;
//                   }
                   
//                   if(h3 > v[i]){
//                       check = true;
//                       break;
//                   }
//               }
               
//               if(check==true){
//                   h3+=v[i]/2;
//                   ans3++;
                   
//               }
//               else{
//                   flag = 1;
//                   break;
//               }
               
//           }
//           if(flag==1){
//                   break;
//               }
//       }
       
//       cout<<max(ans1 , max(ans2 , ans3))<<endl;
       
       
       
//   }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){













        


        
    
    
    





