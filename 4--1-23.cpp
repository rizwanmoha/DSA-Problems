// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t ;
//     cin>>t;
//     while(t--){
//         long long n , k;
//         cin>>n>>k;
//         long long ans = 0;
//         long long temp = k/n;
//         long long temp2 = k%n;
//         ans+=temp2*(temp+1)*(temp+1);
//         ans+=(n-temp2)*(temp)*(temp);
//         cout<<ans<<endl;
        
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t ;
//     cin>>t;
//     while(t--){
        
//         long long x , y;
//         cin>>x>>y;
//         if(x >= y){
//             cout<<"YES"<<endl;
            
//         }
//         else{
//             bool check = false ;
//             while(x < y){
//                 long long temp = x;
//                 x = (x/2) *3;
//                 if(temp==x){
//                     break;
//                 }
//                 if(x >=y){
//                     check = true;
//                     break;
//                 }
//             }
//             if(check==true){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"No"<<endl;
//             }
//         }
        
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t ;
//     cin>>t;
//     while(t--){
        
//         long long a , b , n , s;
//         cin>>a>>b>>n>>s;
//         long long temp = s/n;
        
//         long long temp2 = a * n;
//         if(temp <= a){
//             temp2 = temp * n;
//         }
        
//         if((temp2+b) >= s){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t ;
//     cin>>t;
//     while(t--){
        
//         int n ;
//         cin>>n;
//         vector<int> va(n);
//         vector<int> vb(n);
//         for(int i=0;i<n;i++){
//             cin>>va[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>vb[i];
//         }
//         int flag = 0;
//         int count = 0;
//         if(n==1){
//             cout<<"NO"<<endl;
//         }
//         else{
//             for(int i=0;i<n;i++){
//                 if(va[i]==vb[i]){
//                     flag=0;
//                     continue;
//                 }
//                 else if(flag==0){
//                     flag=1;
//                     count++;
//                 }
//                 else{
//                     flag=1;
//                 }
//             }
//             if(count <= 1){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
        
        
//     }
// }
    
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ;
//     cin>>n;
//     vector<int> va(n);
//     for(int i=0;i<n;i++){
//         cin>>va[i];
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<(n+1)-va[i]<<" ";
//     }
    
//     cout<<endl;
    
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        
        long long  x ,y;
        cin>>x>>y;
        long long temp = __gcd(x , y);
        if(temp==1){
            cout<<"Finite"<<endl;
        }
        else{
            cout<<"Infinite"<<endl;
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
//       int n  ;
//       cin>>n;
//       vector<int> v(n+2);
//       for(int i=0;i<n+2;i++){
//           cin>>v[i];
//       }
//       sort(v.begin() , v.end());
//       long long sum = 0;
//       for(int i=0;i<n+1;i++){
//           sum+=v[i];
//       }
//       bool check = false;
//       int ind = -1;
//       for(int i=0;i<n+1;i++){
//           sum-=v[i];
//           if(sum==v[n+1]){
//               check=true;
//               ind=i;
//               break;
//           }
//           sum+=v[i];
//       }
//       if(check==false){
//           sum = 0;
//           for(int i=0;i<n;i++){
//               sum+=v[i];
//           }
//           if(sum==v[n]){
//               for(int i=0;i<n;i++){
//                   cout<<v[i]<<" ";
//               }
//               cout<<endl;
//           }
//           else{
//               cout<<-1<<endl;
//           }
//       }
//       else{
//           for(int i=0;i<n+1;i++){
//               if(i!=ind){
//                   cout<<v[i]<<" ";
//               }
//           }
//           cout<<endl;
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
      int a , b;
      cin>>a>>b;
      string str;
      cin>>str;
      
  }
}
      










        
        







