// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
// int func(int ind , vector<int> &dp , int n , vector<long long > &v){
//     if((ind) > n){
//         return 0;
//     }
//     if(dp[ind]!=-1){
//         return dp[ind];
//     }
//     int count = 0;
//     for(int i=((2*ind) );i<=n;i+=ind){
//         if(v[i] > v[ind]){
//           count = max(count , 1+ func(i , dp , n , v)); 
//         }
//     }
//     return dp[ind] = count;
    
// }

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n+1);
//       v[0] = 0;
//       for(int i=1;i<=n;i++){
//           cin>>v[i];
//       }
//       vector<int> dp(n+1 , -1);
//       int ans = 1;
//       for(int i = 1;i<= n;i++){
//           ans = max(ans , 1 + func(i , dp , n , v));
//       }
        
    
    
//       cout<<ans<<endl;
//   }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     long long n , m;
//     cin>>n>>m;
//   if(max(m , n) >= 2 * min(n, m)){
//       cout<<min(n, m)<<endl;;
//   }
//   else{
//       cout<<(m+n)/3<<endl;
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , x , m;
//         cin>>n>>x>>m;
//         vector<pair <long long  , long long >> v;
//         for(int i=0;i<m;i++){
//             long long a , b;
//             cin>>a>>b;
//           v.push_back(make_pair(a , b));
//         }
//         long long l = x;
//          long long r = x;
//          for(int i=0;i<m;i++){
//              if(l >= v[i].first && l <= v[i].second){
//                  l = min(v[i].first , l);
//              }
//              if(r >=v[i].first && r <= v[i].second ){
//                  r = max(v[i].second , r);
//              }
//          }
//          cout<<((r - l) + 1)<<endl;
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long > w(k);
        for(int i=0;i<k;i++){
            cin>>w[i];
        }
        sort(v.begin() , v.end());
        long long ans = 0;
        sort(w.begin() , w.end());
        int start = 0;
        int high = n-1;
        for(int i=0;i<k;i++){
            if(w[i]==1){
                ans+=(2 * v[high]);
                high--;
                
            }
            else{
                ans+=v[high];
                high--;
                w[i]--;
                ans+=v[start];
                start= start + w[i];
            }
        }
        cout<<ans<<endl;
    }
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int m , s;
//   cin>>m>>s;
//   string ma  = "";
//   string mi  = "";
//   if(s==0){
//       if(m==1){
//           cout<<0<<" "<<0<<endl;
//           return 0;
//       }
//       else{
//           cout<<-1<<" "<<-1<<endl;
//           return 0;
//       }
//   }
//   for(int i=0;i<m;i++){
//       int temp = min(9 , s);
//       ma+=to_string(temp);
//       s-=temp;
//   }
//   if(s > 0){
//       cout<<-1<<" "<<-1<<endl;
//       return 0;
//   }
//   string tr = ma ;
//   reverse(tr.begin() , tr.end());
//   mi = tr;
//   int j = 0;
//   while(mi[j]=='0'){
//       j++;
//   }
//   mi[0]++;
//   mi[j]--;
//   cout<<mi<<" "<<ma<<endl;
   
    

//     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     long long n , s;
//     cin>>n>>s;
//     vector<long long > v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     // sort(v.begin() , v.end());
    
//     // for(int i=1;i<n;i++){
//     //     v[i]+=v[i-1];
//     // }
//     long long ans = 0;
//     queue<long long > q;
//     long long sum  = 0;
//     for(int i=0;i<n;i++){
//         q.push(v[i]);
//         sum+=v[i];
//         if(sum <= s){
//             long long temp = q.size();
//             ans = max(temp , ans);
//             //cout<<ans<<endl;
            
//         }
//         else{
//             //long long tr = q.front();
//             if(((i+1)-(q.size())) >= 0){
//                  sum-=v[(i+1)-(q.size() )];
//             }
//           else{
//               sum-=v[0];
//           }
//             q.pop();
//             if(sum <= s){
//                  long long temp2 = q.size();
//             ans = max(temp2 , ans);
//             }
//             //cout<<ans<<endl;
            
//         }
//     }
//     cout<<ans<<endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    
    int count = 0;
    int low = 0;
    int high = str.length()-1;
    
    while(high > low){
        if(str[low]==str[high]){
            low++;
            high--;
            continue;
        }
        else{
            if(str[low+1]==str[high]){
                low++;
                count++;
                
            }
            else{
                high--;
                count++;
            }
        }
    }
    if(count%2==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
}

    










        
        
        
        
        
        






