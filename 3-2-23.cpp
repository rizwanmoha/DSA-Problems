#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        if(a==0 && b==0){
            cout<<"YES"<<endl;
        }
        else if(a==0 || b==0){
            cout<<"NO"<<endl;
        }
        else if((a+b)%3==0  ){
           if(a==1 && b==2){
              cout<<"YES"<<endl;
           }
           else if(a==2 && b==1){
               cout<<"YES"<<endl;
           }
           else if(a==1 || b==1){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}





// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long a , b;
        
//         cin>>a>>b;
//         if((a+b)%3==0){
//             if(min(a , b) * 2 >= max(a , b)){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }


// #include<bits/stdc++.h> 
// using namespace std;
 
 
// // bool power(long long n) {
// //         while (n % 3 == 0) {
// //             n = n / 3;
// //         }
 
// //         if (1 == n) 
// //             return true;
        
// // return false;
        
// // }
 
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         if(n==1){
//             cout<<1<<endl;
//         }
//         else if(n==2){
//             cout<<3<<endl;
//         }
//       else{
//           long long ans = 0;
//             for(int i=n;i<INT_MAX;i++){
//             double p = log10(i) / log10(3);
//             if (p - (int)p == 0) {
//                 ans = i;
//                 break;
//             }
//          double q = log10(i-1) / log10(3);
//           double r = log10(i-3) / log10(3);
//           // double s = log10(i-4) / log10(3);
//           if (q - (int)q == 0) {
//                 ans = i;
//                 break;
//             }
//             if (r - (int)r == 0 && r!=1) {
//                 ans = i;
//                 break;
//             }
            
//             //  if (s - (int)s == 0) {
//             //     ans = i;
//             //     break;
//             // }
             
            
//         }
//          cout<<ans<<endl;
//       }
       
        
//     }
// }

#include<bits/stdc++.h> 
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        vector<long long > v(n);
       vector<long long > ans(n , 1);
       vector<long long > graph[n+1];
        for(int i=0;i<n;i++){
            cin>>v[i];
          //  mp[v[i]] = i+1;
        }
        vector<bool> visited(n+1 , false);
        for(int i=0;i<n;i++){
            if(v[i]==(i+1)){
                visited[v[i]] = true;
                continue;
            }
            else if(visited[v[i]]==true){
                continue;
            }
            else{
                unordered_set<long long > st;
                long long temp = v[i];
                st.insert(v[i]);
                while(temp!=(i+1)){
                    st.insert(v[temp - 1]);
                    temp = v[temp - 1];
                }
                ans[i] = st.size() ;
                visited[i+1] = true;
                for(auto x : st){
                    ans[x- 1] = st.size() ;
                    visited[x] = true ;
                }
            }
        }
        for(auto x : ans){
            cout<<x<<" ";
        }
        
        cout<<endl;
        
        
    }
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       char ch;
//       cin>>ch;
//       bool check = false;
//       string str = "codeforces";
//       for(int i=0;i<10;i++){
//           if(ch==str[i]){
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

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       string str;
//       cin>>str;
     
//       bool check = false;
//       int x = 0;
//       int y = 0;
      
//       for(int i=0;i<n;i++){
//           if(str[i]=='U'){
//               y++;
//           }
//           else if(str[i]=='D'){
//               y--;
//           }
//           else if(str[i]=='R'){
//               x++;
//           }
//           else{
//               x--;
//           }
          
//           if(x==1 && y==1){
//               check = true;
//               break;
//           }
//       }
      
//       if(check ==true){
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
//       int n ;
//       cin>>n;
//       string str;
//       cin>>str;
//       int low = 0;
//       int high = n-1;
//       long long ans = n;
//       while(high > low){
//           if(str[high]=='1' && str[low] =='0'){
//               low++;
//               high--;
//               ans-=2;
//           }
//           else if(str[high]=='0' && str[low] =='1'){
//               low++;
//               high--;
//               ans-=2;
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
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       string str;
//       cin>>str;
      
      
//       map<char , int > mp;
      
      
//       unordered_set<char> s;
//       unordered_set<char> s2;
//       int temp = 0;
//       int ind = -1;
//       vector<int> v(n);
//         vector<int> v2(n);
      
//       for(int i=0;i<n;i++){
//           s.insert(str[i]);
//          v[i] = s.size();
//       }
//       for(int i=n-1;i>=0;i--){
//           s2.insert(str[i]);
//           v2[i] = s2.size();
//       }
//      int ans = 0;
//      for(int i=0;i<n-1;i++){
//          int temp = v[i] + v2[i+1];
//          ans = max(ans , temp);
//      }
      
      
//       cout<<ans<<endl;
      
//   }
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       vector<long long > positive;
//       vector<long long > negative;
      
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           if(v[i] >= 0){
//               positive.push_back(v[i]);
//           }
//           else{
//               negative.push_back(v[i]); 
//           }
//       }
      
      
//       long long sum = 0;
//           for(int i=0;i<n;i++){
//               sum+=abs(v[i]);
//           }
//       if(negative.size()%2==0){
          
//           cout<<sum<<endl;
//       }
//       else{
//         //   long long m = INT_MAX;
//         //   int p = negative.size();
//         //   for(int  i=0;i<p;i++){
//         //       m = min(m , abs(negative[i]));
//         //   }
          
//         //   long long m1 = INT_MAX;
//         //   int p1 = positive.size();
//         //   for(int  i=0;i<p1;i++){
//         //       m1 = min(m1 , abs(positive[i]));
//         //   }
        
//         sort(positive.begin() , positive.end());
//         sort(negative.begin() , negative.end());
//         if(positive.size()==0){
//             sum = 0;
//             int p = negative.size();
//             for(int i=0;i<p-1;i++){
//                 sum+=abs(negative[i]);
//             }
//             sum+=negative[p-1];
//             cout<<sum<<endl;
//         }
//         else{
//             int p = negative.size();
//             if(abs(negative[p-1]) >= positive[0] ){
//                 sum = 0;
//                 for(int i=0;i<p;i++){
//                     sum+=abs(negative[i]);
//                 }
//                 int p1 = positive.size();
//                 for(int i=1;i<p1;i++){
//                     sum+=positive[i];
//                 }
//                 cout<<sum - positive[0]<<endl;
//             }
//             else{
//                 sum = 0;
//                 for(int i=0;i<p-1;i++){
//                     sum+=abs(negative[i]);
//                 }
//                  int p1 = positive.size();
//                 for(int i=0;i<p1;i++){
//                     sum+=positive[i];
//                 }
//                 sum+=negative[p-1];
//                 cout<<sum<<endl;
//             }
//         }
          
          
          
          
          
//       }
     
     
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n , q;
//       cin>>n>>q;
//       vector<long long > v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       for(int i=0;i<q;i++){
//           int type ;
//           cin>>type;
//           int l,r,x;
//           if(type==1){
//               cin>>l>>r;
//               for(int j=l-1;j<r;j++){
//                   long long sum = 0;
//                   while(v[j] > 0){
//                       sum+=(v[j]%10);
//                       v[j] = v[j]/10;
//                   }
//                   v[j] = sum;
//               }
              
//           }
//           else{
//               cin>>x;
//               cout<<v[x-1]<<endl;
              
//           }
//       }
      
//   }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      long long  n , c;
      cin>>n>>c;
      vector<long long > v(n);
      vector<long long> sum;
      for(int i=0;i<n;i++){
          cin>>v[i];
          sum.push_back(v[i] + i+1);
      }
      long long ans = 0;
      sort(sum.begin() ,sum.end());
      for(int i=0;i<n;i++){
          if(c >= sum[i]){
              c-=sum[i];
              ans++;
          }
          else{
              break;
          }
      }
      
      
      cout<<ans<<endl;
      
  }
}
    


      
      
      
      





















