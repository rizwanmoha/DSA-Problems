// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//       int n ;
//       cin>>n;
//       vector<pair<long long , long long>> pa;
//       long long  a ;
       
//       long long sum = 0;
//       for(int i=0;i<n;i++){
//           cin>>a;
//           pa.push_back(make_pair(a , i+1));
//           sum+=a;
//       }
//       int count = 0;
//         sort(pa.begin() , pa.end());
//         for(int i=n-2;i>=0;i--){
//             sum-=pa[i+1].first;
//             if(sum <pa[i+1].first ){
//                 break;
//             }
//             else{
//                 count++;
//             }
//         }
        
//         vector<long long > ans;
//         for(int i =n-1;i>=((n-1)- (count));i--){
//             ans.push_back(pa[i].second);
//         }
//         sort(ans.begin() , ans.end());
//         cout<<ans.size()<<endl;
//         for(auto x : ans){
//             cout<<x<<" ";
//         }
//         cout<<endl;
       
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      long long n , w ;
      cin>>n>>w;
      
      vector<long long > v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      sort(v.begin() , v.end());
      int count = 0;
      long long sum = 0;
      bool check = false;
      for(int i=0;i<n;i++){
          if((sum+v[i]) <= w){
              
              sum+=v[i];
              continue;
              
          }
          
          else{
              if(i==(n-1)){
                  check = true;
              }
              count++;
              sum = v[i];
          }
      }
    //   if(check==false){
          count++;
    //   }
      cout<<count<<endl;
      
    }
}

// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       map<long long  , long long > mp;
//       long long sum = 0;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           mp[v[i]]++;
//           sum+=v[i];
//       }
//       priority_queue<long long > q;
//       q.push(sum);
       
//       bool check = true;
//       while(!q.empty() && check==true){
//           long long temp = q.top();
//           q.pop();
//           long long one = 0;
//           long long two = 0; 
//           if(mp[temp]!=0){
//               mp[temp]--;
//               continue;
//           }
//           if(temp==1 ){
//               if(mp[temp]==0){
//                   check = false;
//                   break;
//               }
//               else{
//                   mp[temp]--;
//                   continue;
//               }
//           }
//           else if(temp%2==0){
//               one = temp/2;
//               two = temp/2;
               
//           }
//           else{
//                 one = (temp-1)/2;
//               two = (temp + 1)/2;
//           }
           
//           if(mp[one]!=0){
//               mp[one]--;
//           }
//           else{
//               q.push(one);
//           }
           
           
//           if(mp[two]!=0){
//               mp[two]--;
//           }
//           else{
//               q.push(two);
//           }
           
//       }
//       if(q.empty() && check==true){
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
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long n , m;
    cin>>n>>m;
    vector<vector<long long >> v(n , vector<long long > (m));
    map<long long  , vector<pair<long long , long long >>> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            mp[v[i][j]].push_back(make_pair(i , j));
        }
    }
    long long ans = 0;
    for(auto x : mp){
        vector<pair<long long , long long>> pa = x.second;
        int m = pa.size();
        vector<long long > h(m);
         vector<long long > v(m);
         for(int i=0;i<m;i++){
             h[i] = pa[i].first;
             v[i] = pa[i].second;
         }
       
        
        // int m = pa.size();
        sort(h.begin() , h.end());
        long long sum = 0;
        for(int i=0;i<m;i++){
            sum+=h[i];
        }
        
        for(int i=0;i<m;i++){
            sum-=h[i];
            ans+=(sum - ((m - 1-i)*h[i]));
        }
         sort(v.begin() , v.end());
        sum = 0;
        
        for(int i=0;i<m;i++){
            sum+=v[i];
        }
        
        for(int i=0;i<m;i++){
            sum-=v[i];
            ans+=(sum - ((m - 1-i)*v[i]));
        }
        
    }
    cout<<ans<<endl;
    
    
}

// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       long long sum = 0;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           sum+=v[i];
//       }
//       sort(v.begin() , v.end());
//       if(v[n-1]==0){
//           cout<<0<<endl;
//       }
//       else if((2*v[n-1]) <= sum){
//           cout<<1<<endl;
//       }
//       else{
//           cout<<((2*v[n-1]) - sum)<<endl;
//       }
//   }

//     return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long na , k;
//       cin>>na>>k;
//       vector<long long > p;
//       vector<long long > n;
//       long long sum = 0;
//       long long a;
//       for(int i=0;i<na;i++){
//           cin>>a;
//           if(a > 0){
//               p.push_back(a);
//           }
//           else{
//               n.push_back((-1) * a);
//           }
//       }
      
//       if(n.size()==0){
//           sort(p.begin() , p.end());
//           int m = p.size();
//           int f = m;
//           long long i = k;
//           while(f > 0){
//              f-=k;
//              long long temp = 0;
//              if(f <=0){
//                  sum+=p[p.size() -1];
//                  break;
//              }
//              else {
//                  if((i+k) >= m){
//                      sum+=(2 * p[(m-k)-1]);
//                  }
//                  else{
//                      sum+=(2 * p[i-1]);
//                  }
//              }
//              i+=k;
//           }
//           cout<<sum<<endl;
          
//       }
//       else if(p.size()==0){
//           sort(n.begin() , n.end());
//           int m = n.size();
//           int f = m;
//           long long i = k;
//           while(f > 0){
//              f-=k;
//              long long temp = 0;
//              if(f <=0){
//                  sum+=n[n.size() -1];
//                  break;
//              }
//              else {
//                 if((i+k) >= m){
//                      sum+=(2 * n[(m-k)-1]);
//                  }
//                  else{
//                      sum+=(2 * n[i-1]);
//                  }
//              }
//              i+=k;
//           }
//           cout<<sum<<endl;
          
          
          
//       }
//       else{
//           if(n[n.size() -1] > p[p.size()-1]){
//             sort(p.begin() , p.end());
//           int m = p.size();
//           int f = m;
//           long long i = k;
//           while(f > 0){
//              f-=k;
//             // long long temp = 0;
//              if(f <=0){
//                  sum+= (2 *p[p.size() -1]);
//                  break;
//              }
//              else {
//                 //  sum+=(2 * p[i-1]);
                
//                     if((i+k) >= m){
//                      sum+=(2 * p[(m-k)-1]);
//                  }
//                  else{
//                      sum+=(2 * p[i-1]);
//                  }
//              }
//              i+=k;
//           }
          
//           sort(n.begin() , n.end());
//           int ma = n.size();
//           int fa = ma;
//           long long j = k;
//           while(fa > 0){
//              fa-=k;
//             // long long temp = 0;
//              if(fa <=0){
//                  sum+=n[n.size() -1];
//                  break;
//              }
//              else {
//                 //  sum+=(2 * n[j-1]);
                
//                  if((j+k) >= ma){
//                      sum+=(2 * n[(ma-k)-1]);
//                  }
//                  else{
//                      sum+=(2 * n[j-1]);
//                  }
//              }
//              j+=k;
//           }
//           cout<<sum<<endl;
          
           
              
//           }
//           else{
//               sort(n.begin() , n.end());
//           int ma = n.size();
//           int fa = ma;
//           long long j = k;
//           while(fa > 0){
//              fa-=k;
//             // long long temp = 0;
//              if(fa <=0){
//                  sum+=(2 *n[n.size() -1]);
//                  break;
//              }
//              else {
//                 //  sum+=(2 * n[j-1]);
                
//                 if((j+k) >= ma){
//                      sum+=(2 * n[(ma-k)-1]);
//                  }
//                  else{
//                      sum+=(2 * n[j-1]);
//                  }
                
//              }
//              j+=k;
//           }
          
//           sort(p.begin() , p.end());
//           int m = p.size();
//           int f = m;
//           long long i = k;
//           while(f > 0){
//              f-=k;
//             // long long temp = 0;
//              if(f <=0){
//                  sum+= (p[p.size() -1]);
//                  break;
//              }
//              else {
//                 //  sum+=(2 * p[i-1]);
//                 if((i+k) >= m){
//                      sum+=(2 * p[(m-k)-1]);
//                  }
//                  else{
//                      sum+=(2 * p[i-1]);
//                  }
                
                
//              }
//              i+=k;
//           }
          
//                 cout<<sum<<endl;
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
//       long long n;
//       cin>>n;
//       vector<long long > v(n);
//       priority_queue<pair<long long , long long >>q;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           if(v[i] > 0){
//               q.push({v[i] , i+1});
//           }
         
//       }
//       vector<pair<long long , long long >> ans;
//       while(q.size() > 1){
//           pair<long long , long long > pa = q.top();
//           q.pop();
//           pair<long long , long long > pa2 = q.top();
//           q.pop();
//           long long temp1 = pa.first;
//           temp1--;
//           if(temp1 > 0){
//               q.push({temp1 , pa.second});
//           }
//           long long temp2 = pa2.first;
//           temp2--;
//           if(temp2 > 0){
//               q.push({temp2 , pa2.second});
//           }
//           ans.push_back({pa.second , pa2.second});
//       }
//       cout<<ans.size()<<endl;
//       for(auto x : ans){
//           cout<<x.first<<" "<<x.second<<endl;
//       }
      
      
//   }
// }
   
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  long long n ;
  cin>>n;
  vector<long long > v(n);
  map<long long , long long > mp;
  long long sum = 0;
  for(int i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
      mp[v[i]] = i;
  }
  long long m ;
  cin>>m;
  vector<pair<long long  ,long long>> pa;
  for(int i=0;i<m;i++){
      long long a , b;
      cin>>a>>b;
      pa.push_back({a , b});
  }
  sort(v.begin() , v.end());
      for(int i=0;i<m;i++){
          long long temp2 = sum ;
          if(pa[i].first >= v[n-1]){
              long long temp = pa[i].first - v[n-1];
              temp2-=v[n-1];
              if(temp2 >= pa[i].second){
                  cout<<temp<<endl;
              }
              else{
                  cout<<(temp + (pa[i].second - temp2))<<endl;
              }
          }
          else if(pa[i].first <= v[0]){
              temp2-=v[0];
              
              if(temp2 >= pa[i].second){
                  cout<<0<<endl;
              }
              else{
                  cout<<((pa[i].second - temp2))<<endl;
              }
              
          }
          else{
              if(mp[pa[i].first]!=0){
                  temp2-=pa[i].first;
                  if(temp2 >= pa[i].second){
                  cout<<0<<endl;
                    }
                else{
                  cout<<((pa[i].second - temp2))<<endl;
                     }
              }
              else {
                  vector<long long >::iterator low1, low2;
                //   low1 = lower_bound(v.begin(), v.end(), pa[i].first);
                  low2 = upper_bound(v.begin(), v.end(), pa[i].first);
                  int ind = low2 - v.begin();
                 // cout<<ind<<endl;
                  long long f = 0;
                  long long temp3 =  temp2;
                  temp2 = temp2 - v[ind];
                  //cout<<temp2<<" "<<pa[i].second<<endl;
                   if(temp2 >= pa[i].second){
                        f= 0;
                    }
                else{
                        f+=((pa[i].second - temp2));
                     }
                  long long g = (pa[i].first - v[ind-1]);
                  temp3-=v[ind-1];
                  
                   if(temp3 >= pa[i].second){
                        
                    }
                else{
                        g+=((pa[i].second - temp3));
                     }
                   //  cout<<f<<" "<<g<<endl;
                     cout<<min(f , g)<<endl;
                  
              }
          }
      }
  
  
  
  
  
  
}

// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , k;
//         cin>>n>>k;
//         string str;
//         cin>>str;
//         int fre[26] = {0};
//         for(int i=0;i<n;i++){
//             fre[str[i]-'a']++;
//         }
//         int pairs = 0;
//         for(int i=0;i<26;i++){
//             pairs+=fre[i]/2;
//         }
        
        
        
//         int ans = n/k;
//         while(ans){
//             int w = (ans/2)*k;
//             if(w <= pairs){
//                 cout<<ans<<endl;
//                 break;
//             }
//             ans--;
            
//         }
        
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool check = true;
        
        for(int i=0;i<n;i++){
            if((v[i]%(i+2))!=0){
                continue;
            }
            else{
                if(i==0){
                    check = false;
                    break;
                }
                else{
                    int ind = i-1;
                    while(ind >= 0 && v[i]%(ind+2)==0){
                        ind--;
                    }
                    if(ind >=0 && v[i]%(ind+2)!=0){
                        continue;
                    }
                    else{
                        check = false;
                        break;
                    }
                }
            }
            
        }
        
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}



































