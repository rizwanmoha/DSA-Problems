// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool check (vector<int> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[i]!=i+1){
            return false;
        }
    }
    return true;
}

int main() {
   int t;
   cin>>t;
   while(t--){
       int n ;
       cin>>n;
       vector<int> v(n);
       cout<<"bhj, b"<<" ";
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
       long long ans = 0;
       cout<<"b.k f"<<" ";
       int  ind = log2(n);
       int start = 0;
       bool check = false;
       cout<<" fdjh"<<" ";
       for(int i=start;i<ind;i++){
           int temp = pow(2 , i);
           int s = pow(2 , i+1);
           cout<<"j,h v"<<" ";
           for(int j=0;j<n;j+=s){
               if(v[j] > v[j+temp]){
                   int t2 = j+ temp;
                  // cout<<"j,h v"<<" ";
                   for(int k = j;k<j+t2;k++){
                   //    cout<<"j,h v"<<" ";
                       int g = v[k];
                       v[k] = v[t2];
                       v[t2] = g;
                       t2++;
                   }
                   ans++;
               }
               if(check==true){
                   break;
               }
           }
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
//       int na ;
//       cin>>na;
//       vector<int> p , n, a;
//       long long sum = 0;
//       int c = 0;
       
//       for(int i=0;i<na;i++){
//           cin>>c;
//           sum+=c;
//           if(c > 0){
//               p.push_back(c);
//           }
//           else if(c < 0){
//               n.push_back(c);
//           }
//           else{
//               a.push_back(c);
//           }
//       }
//       if(p.size()==0 && n.size()==0){
//           cout<<"YES"<<endl;
//       }
//       else if(p.size()==1 && n.size()==0){
//           cout<<"YES"<<endl;
//       }
//       else if(p.size()==0 && n.size()==1){
//           cout<<"YES"<<endl;
//       }
//       else if(p.size()==1 && n.size()==1){
//           if(sum==0){
//               cout<<"YES"<<endl;
//           }
//           else{
//               cout<<"NO"<<endl;
//           }
//       }
//       else if(p.size() <= 2 && n.size() <= 2){
//           if(a.size()==0){
//               map<int , int> mp;
//               vector<int> v;
//               for(auto x : n){
//                   v.push_back(x);
//               }
//               for(auto x : p){
//                   v.push_back(x);
//               }
//               sort(v.begin() , v.end());
//               int m = v.size();
//               for(int i=0;i<m;i++){
//                   mp[v[i]]++;
//               }
//               bool check = true;
//               for(int i=0;i<m-2;i++){
//                   for(int j=i+1;j<m-1;j++){
//                       for(int k=j+1;k<m;k++){
//                           if(mp[v[i] + v[j] + v[k]]!=0){
//                               continue;
//                           }
//                           else{
//                               check = false;
//                               break;
//                           }
//                       }
//                       if(check==false){
//                           break;
//                       }
//                   }
//                   if(check==false){
//                       break;
//                   }
//               }
//               if(check==true){
//                   cout<<"YES"<<endl;
//               }
//               else{
//                   cout<<"NO"<<endl;
//               }
               
               
               
//           }
//           else{
//               cout<<"NO"<<endl;
//           }
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
      long long n ;
      cin>>n;
      vector<long long > v(n);
      vector<pair<long long , long long>> pa;
      for(long long i=0;i<n;i++){
          cin>>v[i];
          if(((i+1)-v[i])  > 0){
              pa.push_back(make_pair(v[i] , i+1));
          }
      }
      if(pa.size()==0){
          cout<<0<<endl;
      }
      else{
         long long m = pa.size();
         long long ans = 0;
         sort(pa.begin() , pa.end());
         vector<long long> se;
          vector<long long> fi;
         for(auto x : pa){
             se.push_back(x.second);
             fi.push_back(x.first);
         }
        
         for(long long i=0;i<m-1;i++){
            //  for(long long j=i+1;j<m;j++){
            //      if(pa[i].second < pa[j].first){
            //          ans+=(m-j);
            //          break;
            //      }
            //  }
            int low = i+1;
            int high = m-1;
            int temp = -1;
            //cout<<"abc"<<" ";
            while(high >= low){
                int mid = (low + high)/2;
               // cout<<"def"<<" ";
                if(fi[mid] > se[i]){
                    temp = m-mid;
                    high = mid -1;
                }
                else if(fi[mid] ==se[i]){
                    low = mid +1 ;
                }
                 else if(fi[mid] < se[i]){
                    low = mid + 1;
                }
            }
            
            if(temp!=-1){
                ans+=temp;
            }
            
            
            
            
            
         }
         cout<<ans<<endl;
         
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
//       int n , r ,s;
//       cin>>n>>s>>r;
//       vector<int> v(n);
//       int temp = s - r;
//       v[n-1] = temp; 
//       int re = (r)%(n-1);
//       //cout<<re<<endl;
//       int d = ceil((double)r / (n-1));
//       int p= r/(n-1);
//       for(int i=0;i<re;i++){
//           v[i] = d;
//       }
//       for(int i=re;i< n-1;i++){
//           v[i] = p;
//       }
//       for(auto c : v ){
//           cout<<c<<" ";
//       }
//       cout<<endl;
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
      map<long long , long long> mp;
      for(int i=0;i<n;i++){
          cin>>v[i];
          mp[v[i]]++;
      }
      sort(v.begin() , v.end());
      long long count = 1;
      vector<long long > g;
      for(auto x : mp){
          g.push_back(x.first);
      }
      
      
      
      int p = g.size();
      
      for(int i=1;i<p;i++){
          if((g[i] - g[i-1]) ==1 ){
              continue;
          }
          else{
              count++;
          }
      }
      
     
     
     long long  count2 = 0;
     
     
     vector<pair<long long , long long>> pa; 
     for(auto x : mp){
         if(x.second >= 2){
             pa.push_back(make_pair(x.first , x.second));
         }
     }
     
     int  m = pa.size();
     long long sd = 0;
     for(int i=0;i<m;i++){
         long long md = pa[i].second - 1;
         int ind = i;
         while(ind +1 < m && (pa[ind+1].first - pa[ind].first)==1){
             
             md = max(md , max((pa[ind+1].second -1) ,(pa[ind].second-1)));
             ind++;
         }
         i = ind;
         long long gf = 1;
         count2=  count2 + max(gf , md);
         
     }
     
     
     
     
     cout<<count+count2<<endl;
   
      
      
  }
}
      









































