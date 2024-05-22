// #include <bits/stdc++.h>
// using namespace std;
 
// bool prime(long long n ){
//     for(int i=2;i*i<= n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
 
// void fac(long long n , vector<long long > &v){
//     long long k = n;
//     long long pr = 1;
//     for(int i=2;i*i <= n;i++){
//         long long count = 0;
//         while(k%i==0){
//             count++;
//             pr = pr * i;
//             k = k/i;
//             v.push_back(i);
//         }
//         // if(count > 0){
            
//         // }
//     }
//     if(n%pr==0 && n/pr > 1){
//       v.push_back(n/pr);
//     }
// }
 
 
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         long long n,k;
//         cin>>n>>k;
//         if(k >= n){
//             cout<<1<<endl;
//         }
//         else if(prime(n)==true){
//             cout<<n<<endl;
//         }
//         else{
//             //vector<long long > v;
//             //fac(n , v);
//             //int m = v.size();
//             //int pro = 1;
//             //sort(v.begin() , v.end());
//             long long ans = n;
            
//             for(long long  i=1;i<=sqrt(n);i++){
//                 if(n%i==0 && n/i <= k){
//                     //long long temp = n/i;
//                     ans = min(ans , i);
//                 }
                
//                 if(n%i==0 && i <= k){
//                     ans = min(ans , n/i);
//                 }
//             }
//             cout<<ans<<endl;
            
//         }
            
//  }
// }
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
//         vector<long long > t(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>t[i];
//         }
//         bool  check = true;
//         for(int i=0;i<n-1;i++){
//             if(v[i+1] < v[i]){
//                 check = false;
//                 break;
//             }
//         }
//         if(check==true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             int zero =0;
//             int one = 0;
//             for(int i=0;i<n;i++){
//                 if(t[i]==0){
//                     zero++;
//                 }
//                 else{
//                     one++;
//                 }
//             }
//             if(one  && zero){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
        
//     }
 
//     return 0;
// }



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
//         int start = 0;
//         int last = n-1;
//         int moves = 0;
//         int pre = 0;
//         long long alice = 0;
//         long long bob = 0;
//         int chance = 0;
        
//         while(last >= start){
//             if(chance==0){
//                 long long temp = 0;
//                 while(start <= last && temp <= pre){
//                     temp+=v[start++];
//                 }
//                 pre = temp;
//                 alice+=temp;
//                 chance = 1;
                
//             }
//             else{
//                 long long temp2 = 0;
//                 while(start <= last && temp2 <= pre){
//                     temp2+=v[last--];
//                 }
//                 pre = temp2;
//                 bob+=temp2;
//                 chance = 0;
//             }
            
//             moves++;
//         }
//         cout<<moves<<" "<<alice<<" "<<bob<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         // int n ;
//         // cin>>n;
//       // vector<vector<int >> v(9 , vector<int>(9));
//       vector<vector<char>> v(9 , vector<char>(9));
//       //int v[9][9];
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 cin>>v[i][j];
//             }
//         }
//         int j = 0;
//       //  cout<<"hfbfef"<<endl;
//         for(int i=0;i<9;i++){
//             if(v[i][j]=='1'){
//                 v[i][j] = '2';
//             }
//             else {
//               // v[i][j] = ;
//               int temp = int(v[i][j]) - 1;
//               v[i][j] = char(temp);
               
//             }
//             j++;
//         }
//         // for(int i=0;i<9;i+=3){
//         //     for(int j=1;j<9;j+=3){
//         //         v[i][j] = v[i][j-1];
//         //     }
//         // }
        
//       // cout<<"jh,fsdbhf"<<endl;
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 cout<<v[i][j];
//             }
//             cout<<endl;
//         }
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// bool prime(long long n ){
//     for(int i=2;i*i<= n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }


// void fac(long long n , vector<long long > &v){
//     long long k = n;
//     long long pr = 1;
//     for(int i=2;i*i <= n;i++){
//         //long long count = 0;
//         while(k%i==0){
//           // count++;
//             pr = pr * i;
//             k = k/i;
//             v.push_back(i);
//         }
//       // if(count > 0){
            
//         //}
//     }
//     if(n%pr==0 && n/pr > 1){
//       v.push_back(n/pr);
//     }
// }


 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         long long n ;
//         cin>>n;
//         if(prime(n)==true){
//             cout<<"NO"<<endl;
//         }
//         else{
//             vector<long long > v;
//             fac(n , v);
//             unordered_set<long long> s;
//             stack<long long > st;
//             long long m = v.size();
//             // for(auto x: v){
//             //     cout<<x<<" ";
//             // }
//           int ind = -1;
//           bool check = false;
//           for(int i=0;i<m;i++){
//               if(i==0){
//                   st.push(v[i]);
//                   s.insert(v[i]);
//               }
//               else {
//                   if(st.top()==v[i]){
//                       long long temp = v[i];
//                       for(int j = i+1;j<m;j++){
//                           temp*=v[j];
//                           if(st.top()!=temp){
//                               st.push(temp);
//                               s.insert(temp);
//                               ind = j;
//                               check = true;
//                               break;
//                           }
//                       }
//                   }
//                   else{
//                       st.push(v[i]);
//                       s.insert(v[i]);
//                       ind = i;
//                       check = true;
//                   }
                   
//               }
               
//               if(check==true){
//                   break;
//               }
//           }
//           if(check==true){
//               long long temp2 = 1;
               
//               for(int i=ind + 1;i< m;i++){
//                   temp2*=v[i];
//               }
//               if(temp2 == 1 || s.find(temp2)!=s.end()){
//                   cout<<"NO"<<endl;
//               }
//               else{
//                   s.insert(temp2);
//                   cout<<"YES"<<endl;
//                   for(auto x : s){
//                       cout<<x<<" ";
//                   }
//                   cout<<endl;
//               }
//           }
//           else{
//               cout<<"NO"<<endl;
//           }
            
//         }
//     }
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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool check = true;
        bool check1 = true;
        for(int i=1;i<n;i++){
            if(v[i] > v[i-1]){
                continue;
            }
            else{
                check = false;
                break;
            }
        }
        for(int i=1;i<n;i++){
            if(v[i] < v[i-1]){
                continue;
            }
            else{
                check1 = false;
                break;
            }
        }
        
        if(check==true || check1==true){
            cout<<"YES"<<endl;
        }
        else{
            int flip = 0;
            long long pre = -1;
            check = true;
            for(int i=0;i<n;i++){
                if(i==0){
                    if(v[i]==0){
                        continue;
                    }
                    else{
                        v[i] = 0;
                    }
                }
                else if(flip==0){
                    if(  v[i] > v[i-1]){
                        v[i] = v[i-1] +1 ;
                    }
                    else if(v[i]==v[i-1]){
                        if(v[i] > 0 ){
                            v[i] = v[i] - 1;
                            
                        }
                        else{
                            check = false;
                            break;
                        }
                        flip = 1;
                        
                    }
                    else{
                        flip = 1;
                    }
                }
                else{
                    if(v[i] >= v[i-1]){
                       // cout<<"jhfvfh"<<endl;
                        // check = false;
                        // break;
                        if(v[i-1] > 0){
                            v[i] = v[i-1] - 1;
                        }
                        else{
                            check = false;
                            break;
                        }
                    }
                }
                if(check==false){
                    break;
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
}









