// // Online C++ compiler to run C++ program online
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
//         }
//         if(count > 0){
//             v.push_back(i);
//         }
//     }
//     if(n%pr==0 && n/pr > 1){
//       v.push_back(n/pr);
//     }
// }

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       if(n%2==0){
//           cout<<n/2<<" "<<n/2<<endl;
//       }
//       else{
//           if(prime(n)==true){
//               cout<<1<<" "<<n-1<<endl;
//           }
//           else {
//               vector<long long > v;
//                 fac(n , v);
//             //   for(auto x : v){
//             //       cout<<x<<" ";
//             //   }
//             //   cout<<"\n";
         
//           long long m = n/v[0];
//           long long k = m-1;
//           cout<<m<<" "<<n - m<<endl;
//           }
//       }
//   }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        string str;
        cin>>str;
        bool check  = true;
        vector<int> v;
        int flip = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                count++;
            }
            else{
                if(count > 0 && flip ==1){
                    v.push_back(count);
                }
                flip = 1;
                count = 0;
                check = false;
            }
            
        }
        // if(count > 0){
        //     v.push_back(count);
        // }
        if(check==true){
            long long ans = 0;
            for(int i=0;i < n;i+=(k+1)){
             ans++;   
            }
            cout<<ans<<endl;
        }
        else{
            int ind = -1;
            for(int i=0;i<n;i++){
                if(str[i]=='1'){
                    ind = i;
                    break;
                }
            }
            long long ans = 0;
            for(int i=0;i<(ind - k);i+=(k+1)){
                //cout<<",jhcabh"<<endl;
                ans++;
            }
            ind = -1;
            for(int i=n-1;i>=0;i--){
                if(str[i]=='1'){
                    ind = i;
                    break;
                }
            }
            for(int i=n-1;i>=(ind + k +1);i-=(k+1)){
                //cout<<"last"<<endl;
                ans++;
            }
            int m = v.size();
            for(int i=0;i<m;i++){
                v[i]-=(2*k);
                if(v[i] > 0){
                    int temp = ceil((double)v[i]/(k+1));
                    ans+=temp;
                  //  cout<<"middle"<<endl;
                }
            }
            cout<<ans<<endl;
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
//         vector<long long > t(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         vector<pair<long long , long long >> pa;
//         for(int i=0;i<n;i++){
//             cin>>t[i];
//             //pa.push_back(make_pair(v[i] , t[i]));
            
//         }
//       // sort(pa.begin() ,pa.end());
//         bool  check = true;
//         for(int i=0;i<n-1;i++){
//           for(int j=0;j<n-i-1;j++){
//               if(v[j] > v[j+1]){
//                   if(t[i]!=t[j]){
//                     long long temp = v[j];
//                   v[j] = v[j+1];
//                   v[j+1] = temp;
//                   long long tr = t[j];
//                   t[j] = t[j+1];
//                   t[j+1] = tr;
//                   }
//                   else{
//                       check = false;
//                       break;
//                   }
                   
//                 }
//           }
//         }
//         if(check==true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
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
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;

bool prime(long long n ){
    for(int i=2;i*i<= n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void fac(long long n , vector<long long > &v){
    long long k = n;
    long long pr = 1;
    for(int i=2;i*i <= n;i++){
        long long count = 0;
        while(k%i==0){
            count++;
            pr = pr * i;
            k = k/i;
            v.push_back(i);
        }
        // if(count > 0){
            
        // }
    }
    if(n%pr==0 && n/pr > 1){
      v.push_back(n/pr);
    }
}



int main() {
    int t;
    cin>>t;
    while(t--){
        
        long long n,k;
        cin>>n>>k;
        if(k >= n){
            cout<<1<<endl;
        }
        else if(prime(n)==true){
            cout<<n<<endl;
        }
        else{
            vector<long long > v;
            fac(n , v);
            //int m = v.size();
            int pro = 1;
            sort(v.begin() , v.end());
            vector<long long > kv;
            fac(k , kv);
            map<long long, long long> mp;
            for(auto x : v){
                mp[x]++;
            }
            int m = kv.size();
            for(int i=0;i<m;i++){
                if(mp[kv[i]]!=0){
                    pro*=kv[i];
                    mp[kv[i]]--;
                }
            }
            
            // for(int i=0;i<m;i++){
            //     if((pro * v[i]) <= k){
            //         pro*= v[i];
            //     }
            // }
            // int start = 0;
            // int high = m-1;
            // while(high > start){
            //     if((pro * v[high]) <= k){
            //         pro*=v[high];
            //     }
            //     if()
            // }
            
            cout<<n/pro<<endl;
        }
            
 }
}




















