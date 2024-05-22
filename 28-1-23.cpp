// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       map<long long , long long> mp;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           mp[v[i]]++;
//       }
//       sort(v.begin() , v.end());
//       long long count = 1;
//       vector<long long > g;
//       for(auto x : mp){
//           g.push_back(x.first);
//       }
      
      
      
//       int p = g.size();
//       sort(g.begin() , g.end());
//       for(int i=1;i<p;i++){
//           if((g[i] - g[i-1]) ==1 ){
//               continue;
//           }
//           else{
//               count++;
//           }
//       }
      
     
     
//      long long  count2 = 0;
     
     
//      vector<pair<long long , long long>> pa; 
//      for(auto x : mp){
//          if(x.second >= 2){
//              pa.push_back(make_pair(x.first , x.second));
//          }
//      }
     
//      int  m = pa.size();
//      long long sd = 0;
//      for(int i=0;i<m;i++){
//          long long md = pa[i].second - 1;
//          int ind = i;
//          while(ind +1 < m && (pa[ind+1].first - pa[ind].first)==1){
             
//              md = max(md , max((pa[ind+1].second -1) ,(pa[ind].second-1)));
//              ind++;
//          }
//          i = ind;
//          long long gf = 1;
//          count2=  count2 + max(gf , md);
         
//      }
     
     
     
     
//      cout<<count+count2<<endl;
   
      
      
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int twos(int i){
//     int count = 0;
//     while(i%2==0){
//         i = i/2;
//         count++;
//     }
//     return count;
// }

 
// int main() {
//  int n ;
//  cin>>n;
//  vector<int> v(n);
//  for(int i=0;i<n;i++){
//      cin>>v[i];
//  }
//  vector<int> ans(n);
//  for(int i=0;i<n;i++){
//      if(v[i]%32768==0){
//          ans[i] = 0;
         
//      }
//      else{
//          int temp = INT_MAX;
//      for(int j=0;j<=15;j++){
//          int count = twos(j+ v[i]);
//          int temp2 = j + (15 - count );
//          temp = min(temp , temp2);
//      }
//      ans[i] = temp;
//      }
//  }
//  for(auto x : ans){
//      cout<<x<<" ";
//  }
//  cout<<endl;
 
  
// }


// #include <bits/stdc++.h>
// using namespace std;

// int  main(){
//     int t;
//     cin>>t;
//     while(t--){
//       long long n , l , r;
//       cin>>n>>l>>r;
//       vector<long long > v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       sort(v.begin() , v.end());
//       long long ans = 0;
//       for(int i=0;i<n-1;i++){
//           int low = i+1;
//           int high = n- 1;
//           int temp1 = -1;
//           while(high >= low){
//               int mid = (low + high)/2;
//               if((v[mid] + v[i] ) >= l ){
//                   temp1 = mid ;
//                   high = mid - 1;
                   
//               }
//               else if((v[mid] + v[i]) < l){
//                   low = mid + 1;
//               }
//           }
//           int temp2 = -1;
//             low = i+1;
//           high = n-1;
//           while(high >= low){
//                 int mid = (low + high)/2;
//               if((v[mid] + v[i] ) <= r ){
//                   temp2 = mid ;
//                   low = mid + 1;
                   
//               }
//               else if((v[mid] + v[i]) > r){
//                   high  = mid - 1;
//               }
//           }
//           if(temp1==-1 || temp2==-1){
//               continue;
//           }
//           else{
//               ans+=(temp2 - temp1) + 1;
//           }
           
//       }
//       cout<<ans<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int  main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s , t;
//         cin>>s>>t;
//         int n = s.length();
//         int  m = t.length();
//         char ch = t[0];
//         int ind = -1;
//         for(int i=0;i<n;i++){
//             if(ch==s[i]){
//                 ind = i;
//                 break;
//             }
//         }
//         int flag = 0;
//         if(ind==-1){
//             cout<<"NO"<<endl;
//         }
//         else{
//             int j = 0;
            
//             while(s[ind]==t[j]){
                
//             }
//         }
        
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<vector<long long >> ans;
        
        for(int i=1;i<n;i++){
            if(__gcd(v[i] , v[i-1])==1){
                continue;
            }
            else{
                long long temp = min(v[i-1] , v[i]);
               // if(v[i-1] <=v[i] ){
                     v[i-1] = temp;
                      v[i] = 2 * temp + 1;
                //}
                // else{
                //     v[i-1] = temp +1;
                //       v[i] = temp ;
                // }
                
                
               
               
                vector<long long > v2;
                v2.push_back(i);
                v2.push_back(i+1);
                v2.push_back(temp);
                v2.push_back((2*temp)+1);
                ans.push_back(v2);
                
            }
            
        }
        cout<<ans.size()<<endl;
        int s = ans.size();
        for(int i=0;i < s;i++){
            for(int j=0;j<4;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
    }
}

// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ;
//     cin>>n;
//     vector<string > v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(v[i]=="For"){
//             count++;
//         }
//     }
//     n = n-1;
//     n = n/2;
//     if(count > n){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n , m ;
//     cin>>n>>m;
//     vector<string > v(n);
//       vector<string > vm(m);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }      
//     for(int j=0;j<m;j++){
//         cin>>vm[j];
//     }
//     long long ans = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(v[i][3]==vm[j][0] && v[i][4]==vm[j][1] && v[i][5]==vm[j][2]){
//                 ans++;
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     cout<<ans<<endl;
      
// }

 // for(int i=0;i<n;i++){
    //     string temp = "";
    //     for(int j=0;j<min(i, m);j++){
    //         temp.push_back(s[j]);
    //     }
    //     int tr = m - i;
    //     string temp2 = "";
    //     for(int j = n-1;j>=n-tr;j--){
    //         temp2.push_back(s[j]);
    //     }
    //     reverse(temp2.begin() , temp2.end());
    //     temp+=temp2;
        
    //     int count = 0;
    //     int t2 = m;
    //   // cout<<temp<<" "<<t<<endl;
    //     for(int j = 0;j<t2;j++){
    //         if(temp[j]=='?' || t[j]=='?'){
    //             count++;
    //         }
    //         else{
    //             if(temp[j]==t[j]){
    //                 count++;
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //     }
        
    //     if(count==t2){
    //         ans[i]="Yes";
    //     }
    //     else{
    //         ans[i] = "No";
    //     }
        
    // }



#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s , t;
    cin>>s>>t;
    int n = s.length();
    
    int m = t.length();
    vector<string> ans(m+1);
   string temp = "";
   string temp2 = "";
   for(int i=n-m;i<n;i++){
       temp2.push_back(s[i]);
   }
   int re = 0;
    for(int i =0;i<=m;i++){
        //string temp = "";
        int ind = temp.length();
        for(int j=ind;j<i;j++){
            temp.push_back(s[j]);
            
        }
        // if(re!=0){
        //     reverse(temp2.begin() , temp2.end());
        //     temp2.pop_back();
        //     reverse(temp2.begin() , temp2.end());
            
        // }
        // re++;
        int tr = m - i;
        string temp2 = "";
   for(int j=n-tr;j<n;j++){
       temp2.push_back(s[j]);
   }
        
        string temp3 = temp + temp2;
        int k = temp3.length();
        int count = 0;
        bool check = true;
        for(int j=0;j<k;j++){
            if(temp3[j]=='?' || t[j]=='?'){
                count++;
            }
            else{
                if(temp3[j]==t[j]){
                    count++;
                }
                else{
                    check = false;
                    break;
                }
            }
            if(check==false){
                break;
            }
        }
        if(count==k){
            ans[i] = "Yes";
        }
        else{
            ans[i] = "No";
        }
        
        
    }
    
    
    
    
    
    
    for(auto x : ans){
        cout<<x<<endl;
    }
    cout<<endl;
    
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long a , b , c;
//     cin>>a>>b>>c;
//     bool check = false;
//     if((a+b) > 0 && (a+b)%2==0){
//         check = true;
//     }
//     if((c+b) > 0 && (c+b)%2==0){
//         check = true;
//     }
//     if((a+c) > 0 && (a+c)%2==0){
//         check = true;
//     }
//     if(check==true){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
    
    
//     int t ;
//     cin>>t;
//     while(t--){
//         long long n , l ,s;
//         cin>>n>>l>>s;
//         long long temp = ((l)*(l+1))/2;
//         long long temp2 = ((n)*(n+1))/2;
//         if(s >= temp && temp <= temp2){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
    
//     return 0;
// }



      
      
      
      
      
      



    





