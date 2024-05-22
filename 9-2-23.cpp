// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   long long n , m;
//   cin>>n>>m;
   
   
//   if(n >= m){
//       cout<<n-m<<endl;
//   }
//   else{
//       long long temp = n;
//       long long ans = 0;
//       while((2 * temp) <= m){
//           ans++;
//           temp*= 2;
           
//       }
//       if(temp==m){
//           cout<<ans<<endl;
//       }
//       else{
//           while(temp >=(m/2)){
//               ans++;
//               temp--;
//           }
//           cout<<ans<<endl;
//       }
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , q;
//         cin>>n>>q;
//         vector<long long > v(n);
//         long long m = INT_MIN;
        
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             m = max(v[i] , m);
//         }
//         for(int i=0;i<q;i++){
//             long long a , b;
//             cin>>a>>b;
//             long long ans = 0;
//             if(v[a-1]==m){
//                 ans = b;
//                 if(a >= 2){
//                     ans-=(a-2);
//                 }
//                 cout<<ans<<endl;
//                 continue;
//             }
//             bool check = false;
//             for(int j = a-2;j>= 0;j--){
//               if(v[j] > v[a-1]){
//                   check = true;
//                   break;
//               } 
//             }
//             if(check==true){
//                 cout<<0<<endl;
//                 continue;
//             }
//             else{
//                 //cout<<"else"<<" ";
//                 long long  ind = -1;
//                 for(int j= a;j<n;j++){
//                     if(v[j] > v[a-1]){
//                       // cout<<"ind "<<" ";
//                         ind = j;
//                         break;
//                     }
//                 }
//                 // if(ind ==-1){
//                 //     ind = n;
//                 // }
//                 if(a >= 2){
//                 //    cout<<"initial"<<" ";
                    
//                     b-=(a-2);
//                   // cout<<b<<" "<<endl;;
//                 }
//                 if(a > 1){
//                     if(b > 0){
//                         ans+=1;
//                         b--;
//                     }
//                 }
//                 if(b > 0){
//                   // cout<<" after"<<" ";
                    
//                   //  cout<<b <<" "<<ind<<endl;
//                     long long temp = (ind - a);
                    
//                     temp = min(b , temp);
                    
//                     ans+=temp;
//                   //  cout<<temp<<endl;
                    
//                 }
//               cout<<ans<<endl;
//             }
//         }
        
//     }
    
    
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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        bool check= true;
        for(int i=0;i<n;i++){
            if(v[i]%10==0 || v[i]%10==5){
                continue;
            }
            else{
                check = false;
                break;
            }
        }
        if(check==true){
            for(int i=0;i<n;i++){
                if(v[i]%10==5){
                    v[i]+=v[i]%10;
                }
            }
            bool chcek1 = true;
            for(int i=1;i<n;i++){
                if(v[i]==v[i-1]){
                    continue;
                }
                else{
                    check1 = false;
                    break;
                }
            }
            if(check1==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            
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
        
//         int n ;
//         cin>>n;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         if(n==1){
//             cout<<"YES"<<endl;
//             continue;
//         }
//         bool check= true;
//         for(int i=0;i<n;i++){
//             if(v[i]%10==0 || v[i]%10==5){
//                 continue;
//             }
//             else{
//                 check = false;
//                 break;
//             }
//         }
//         int zero =0;
//         int five = 0;
//         for(int i=0;i<n;i++){
//             if(v[i]%10==0){
//                 zero++;
//             }
//             if(v[i]%10==5){
//                 five++;
//             }
//         }
//         if(check==true){
//             for(int i=0;i<n;i++){
//                 if(v[i]%10==5){
//                     v[i]+=v[i]%10;
//                 }
//             }
//             bool check1 = true;
//             for(int i=1;i<n;i++){
//                 if(v[i]==v[i-1]){
//                     continue;
//                 }
//                 else{
//                     check1 = false;
//                     break;
//                 }
//             }
//             if(check1==true){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else if(five!=0 && five!=n){
//             cout<<"NO"<<endl;
//         }
//         else if(zero!=0 && zero!=n){
//             cout<<"NO"<<endl;
//         }
       
//         else{
//             for(int i=0;i<n;i++){
//                 while(v[i]%10!=2){
//                     v[i]+=v[i]%10;
//                 }
//             }
//             bool check2 = true;
//             for(int i=1;i<n;i++){
//                 if((v[i]-v[i-1])%20==0){
//                     continue;
//                 }
//                 else{
//                     check2 = false;
//                     break;
//                 }
//             }
//             if(check2==true){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
            
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
        int n  , k;
        cin>>n>>k;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        
        long long ans = 0;
        for(int i=0;i<n-k;i++){
            for(int j = 0;j<(i+k+1);i++){
                
            }
        }
    }
}
        
        

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         int n  , k;
//         cin>>n>>k;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
            
//         }
        
//         long long ans = 0;
//         int temp = 0;
//         for(int i=1;i<n;i++){
//             if((v[i]*2) > v[i-1]){
//                 if(((i - temp) + 1) >= (k+1)){
//                     ans++;
//                     temp++;
//                 }
//             }
//             else{
//                 temp = i;
//             }
//         }
//         cout<<ans<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
        int n  , k;
        cin>>n>>k;
        string str;
        cin>>str;
        int end = n-1;
        // int i=n-1;
        //  i--;
        int count = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
               count++; 
            }
        }
        if(count > 1){
            for(int i=n-1;i>=0;i--){
                if(i==n-1 && str[i]=='1'){
                    break;
                }
                
                else if(str[i]=='1'){
                    int temp = n- (i +1);
                    if(k >= temp){
                        str[n-1] = '1';
                        str[i] = '0';
                        k-=temp;
                        
                    }
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(i==0 && str[i]=='1'){
                    break;
                }
                else if(str[i]=='1'){
                    if(k >= i){
                        str[0] = '1';
                        str[i] = '0';
                    }
                }
            }
            
            long long sum = 0;
            for(int i=0;i<n-1;i++){
            if(str[i]=='0' && str[i+1]=='1'){
                sum+=1;
            }
            else if(str[i]=='1' && str[i+1]=='1'){
                sum+=11;
            }
            else if(str[i]=='1' && str[i+1]=='0'){
                sum+=10;
            }
            else {
                continue;
            }
        }
        cout<<sum<<endl;
            
            
            
        }
        else if(count==0){
            cout<<0<<endl;
        }
        else if(count ==1){
            for(int i=0;i<n;i++){
               if(i==0 && str[i]=='1'){
                   int temp = (n - (i+1));
                    if(temp <= k){
                        str[n-1] = '1';
                        str[i] = '0';
                        k-=temp;
                    }
                   else{
                       continue;
                   }
               }
               else if(i==(n-1) && str[i]=='1'){
                   continue;
               }
               else{
                    if(str[i]=='1'){
                    int temp = (n - (i+1));
                    if(temp <= k){
                        str[n-1] = '1';
                        str[i] = '0';
                        k-=temp;
                    }
                    else if(i <= k){
                        str[0] = '1';
                        str[i] = '0';
                    }
                }
               }
            }
            long long sum = 0;
            for(int i=0;i<n-1;i++){
            if(str[i]=='0' && str[i+1]=='1'){
                sum+=1;
            }
            else if(str[i]=='1' && str[i+1]=='1'){
                sum+=11;
            }
            else if(str[i]=='1' && str[i+1]=='0'){
                sum+=10;
            }
            else {
                continue;
            }
        }
        cout<<sum<<endl;
            
            
            
            
        }
        
        
        
    }
}




    
    
    
    
