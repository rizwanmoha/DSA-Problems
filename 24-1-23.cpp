// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n ;
       cin>>n;
       vector<int> v(n);
       map<int , int> mp;
       
       for(int i=0;i<n;i++){
           cin>>v[i];
           mp[v[i]]++;
       }
       sort(v.begin() , v.end());
       if(n==1){
           cout<<0<<endl;
       }
       else{
           int temp = v[n-2] + v[n-1];
           int start = v[0] + v[1];
           int ans = 0;
           for(int i=start;i<=temp;i++){
               int count = 0;
              // map<int , int> copy = mp;
               for(auto x : mp){
                   int t2 = i - x.first;
                   if(t2 >=1 && mp[t2]!=0){
                       
                       int d = min(mp[x.first] , mp[t2]);
                       
                       count+=d;
                   }
                  
               }
               ans = max(ans , count/2);
              // mp = copy;
           }
            cout<<ans<<endl;
       }
      
       
   }
   
   

    return 0;
}

// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int ta;
//   cin>>ta;
//   while(ta--){
//       int n ;
//       cin>>n;
//       vector<int> a(n);
//       int o = 0;
//       int other = 0;
//       for(int i=0;i<n;i++){
//           cin>>a[i];
//           if(a[i]==1){
//               o++;
//           }
//           else{
//               other++;
//           }
//       }
//       //yvcdwckgecbe;liofcgefy/
//       //jhcblcvkugedgcyvdkhcd
//       if(o >= 2){
//           int te = ceil((double)o/2);
//           cout<<te+other<<endl;
//       }
//       else{
//           cout<<o + other<<endl;
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
      
//       long long a , b , c ,d;
//       cin>>a>>b>>c>>d;
//       long long ans = a;
//       //uygwbhckietfgcbhjeu/
//       //dyukgcbjeskewqbhjc
//       //vdhcbkedvlgucqebwhcl
//       if(a==0){
//           cout<<1<<endl;
//           //uygwbhckietfgcbhjeu/
//       //dyukgcbjeskewqbhjc
//       //vdhcbkedvlgucqebwhcl
//       }
//       else{
//             long long temp = min(b , c);
//           ans+=(temp * 2);
           
//             b = b- temp;
//             c = c - temp;
//             if(b > 0){
//                 temp = min(a , b);
//                 ans+=temp;
//                 b = b - temp;
//                 a = a - temp;
//                 //uygwbhckietfgcbhjeu/
//       //dyukgcbjeskewqbhjc
//       //vdhcbkedvlgucqebwhcl
//             }
//             if(c > 0){
//                 temp = min(a , c);
//                 ans+=temp;
//                 c= c - temp;
//                  a = a - temp;
//             }
//             temp = min(a , d);
//             ans+=temp;
//             d = d - temp;
            
//             if(b > 0 || c > 0 || d > 0){
//                 cout<<ans+1<<endl;
//             }
//             else{
//                 cout<<ans<<endl;
//             }
//             //uygwbhckietfgcbhjeu/
//       //dyukgcbjeskewqbhjc
//       //vdhcbkedvlgucqebwhcl
            
//       }
      
     
      
      
      
      
//   }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      
      int n ;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      vector<int> copy = v;
      sort(copy.begin() , copy.end());
      int temp = v[n-1];
  }
}



































