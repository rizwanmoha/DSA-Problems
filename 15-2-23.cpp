// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n ;
   cin>>n;
   vector<long long > odd(n);
   vector<long long > even(n);
  
   for(int i=0;i<n;i++){
       cin>>odd[i];
       
   }
   for(int i=0;i<n;i++){
       cin>>even[i];
   }
   long long ans  = 0;
   bool check = true;
        while(check==true){
            int eve  = 0;
            int od = 0;
            while(check==true){
                if(even[eve] >= odd[od])
            }
        }
  
  }
   
   
   

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//     int n ;
//   cin>>n;
//   vector<long long > odd(n);
//   vector<long long > even(n);
  
//   for(int i=0;i<n;i++){
//       cin>>odd[i];
       
//   }
//   for(int i=0;i<n;i++){
//       cin>>even[i];
//   }
//   long long ans  = 0;
//   bool check = true;
      
//             int eve  = 0;
//             int od = 0;
//             while(check==true){
//                 if(even[eve] < odd[od]){
//                     od++;
//                 }
              
//                 else {
//                     check = false;
//                     break;
//                 }
                
//             }
//             ans = od - eve;
        
//       check = true;
//       eve = 0;
//       od = 0;
//       while(check ==true){
//           if(even[eve] < odd[od]){
//               eve++;
//           }
//           else{
//               check = false;
//               break;
//           }
//       }
//       long long ans2 = eve - od;
//       cout<<min(ans , ans2)<<endl;
  
//   }
   
   
   

//     return 0;
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
        int ind = 0;
        long long mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] < mini){
                mini = v[i];
                ind = i;
            }
        }
        vector<vector<long long >> ans;
        
        for(int i=ind-1;i>=0;i--){
           
                
            if(v[i] < v[i+1]){
                ans.push_back({ind+1 , i+1 , mini , v[i+1]+1});
                v[i] = v[i+1] +1;
            }
            else{
                ans.push_back({i+2 , i+1 , v[i+1] , v[i+1]+1});
                v[i] = v[i+1] +1;
            }
            
        }
        
        for(int i=ind+1;i < n;i++){
           
                
            if(v[i] < v[i-1]){
                ans.push_back({ind+1 , i+1 , mini , v[i-1]+1});
                v[i] = v[i-1] +1;
            }
            else{
                ans.push_back({i , i+1 , v[i-1] , v[i-1]+1});
                v[i] = v[i-1] +1;
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
































