// Online C++ compiler to run C++ program online
// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n , k;
//       cin>>n>>k;
//       vector<long long > v(n);
//       long long sum = 0;
//       vector<long long> a(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           sum+=v[i]/k;
//           a[i] = v[i]%k;
//       }
//       sort(a.begin() , a.end());
//       int start  = 0;
//       int end = n-1;
//       while(end > start){
//           if((a[start] + a[end]) >= k){
//               end--;
//               start++;
//               sum++;
//           }
//           else{
//               start++;
//           }
//       }
//       cout<<sum<<endl;
//   }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       string s = "";
//       string t = "";
//       vector<long long> vs(26 , 0);
//       vector<long long> vt(26 , 0);
//       map<char ,long long> mps;
//       map<char , long long > mpt;
      
//       for(int i=0;i<n;i++){
//          long long type , k;
//           string x;
//           cin>>type>>k>>x;
//           if(type==1){
//               int m = x.length();
//               for(int j=0;j<m;j++){
//                   mps[x[j]]+=k;
//               }
//           }
//           else{
//               int m = x.length();
//               for(int j=0;j<m;j++){
//                  mpt[x[j]]+=k;
//               }
//           }
//           bool check = false;
//           if(mps.size()==0){
//               check = true;
//               cout<<"YES"<<endl;
//               continue;
//           }
//           if(mpt.size()==0){
//               cout<<"NO"<<endl;
//               continue;
//           }
//           map<char , long long> :: iterator it = mps.begin();
//          // mp<char  , int> :: iterator it1 = mpt.rbegin();
//           int flag = 0;
//           for(auto it1=mpt.rbegin();it1!=mpt.rend();it1++){
//             //  cout<<it1->first<<" "<<it1->second<<" "<<it->first<<" "<<it->second<<endl;
//               if(it1->first > it->first){
//                   check = true;
//                   break;
//               }
//               else if(it->first > it1->first){
//                   check = false;
//                   break;
//               }
//               else{
//                   if(it1->second==it->second){
//                       it++;
//                       continue;
//                   }
//                   else if(it->second > it1->second){
//                       check = false;
//                       flag = 1;
//                       break;
                      
//                   }
//                   else{
//                       it++;
//                       if(it==mps.end()){
//                           flag =1;
//                           check = true;
//                           break;
//                       }
//                       else{
//                           check = false;
//                           flag =1;
//                           break;
//                       }
//                   }
//               }
//               if(flag==1){
//                   break;
//               }
              
//           }
          
//          if(check==true){
//              cout<<"YES"<<endl;
//          } 
//          else{
//              cout<<"NO"<<endl;
//          }
//       }
// }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){

    long long n ;
    cin>>n;
    vector<long long> v(n);
    int b = 0;
    int a = 0;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2){
            b++;
        }
        else{
            a++;
        }
    }
    if (b % 4 == 2)
		cout << "Bob" << endl;
	else if (b % 4 == 3)
		cout << "Alice" << endl;
	else if (b % 4 == 0)
		cout << "Alice" << endl;
	else if (a % 2 == 1)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;
    
  }
}


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
// void factor(long long n , long long *a , long long *b , long long lcm){
//     //cout<<"hyueiiurbnmzn"<<endl;
//     for(long long  i=2;i*i<=n;i++){
//       // cout<<"hjcn?jf"<<endl;
//         if(n%i==0){
//             long long temp = n/(__gcd(i , n/i));
//             long long ma = max(i , n/i);
//             if(temp==n){
//                 *a = i;
//                     *b = n/i;
//             }
//             // cout<<temp<<endl;
//             // if(ma <= lcm){
//             //     lcm = ma;
                
//             // }
               
                
            
//         }
//     }
// }
// int main() {
//   long long n ;
//   cin>>n;
//   if(prime(n)==true){
//       cout<<1<<" "<<n;
//      // cout<<"vhchhb"<<endl;
//   }
//   else{
//       long long a = 1;
//       long long b = n;
//       long long lcm = n;
//       factor(n , &a , &b , lcm);
//       cout<<a<<" "<<b<<endl;
      
//   }
  
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n , k ;
  cin>>n>>k;
  vector<long long> v(n);
   map<long long , long long >mp;
  for(int i=0;i<n;i++){
      cin>>v[i];
     mp[v[i]]++;
  }
  sort(v.begin() , v.end());
  int start = 0;
  for(auto x: mp){
      if(x.first==start && k > 0 ){
          start++;
          k--;
      }
      else{
          break;
      }
  }
  if(start==0){
      cout<<0<<endl;
  }
  else{
      cout<<start<<endl;
  }
  
  
}
//  #include <bits/stdc++.h>
// using namespace std;
// bool prime(long long n ){
//     for(int i=2;i*i<= n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void factor(long long n , long long *a , long long *b , long long lcm){
//     //cout<<"hyueiiurbnmzn"<<endl;
//     for(long long  i=2;i*i<=n;i++){
//       // cout<<"hjcn?jf"<<endl;
//         if(n%i==0){
//             long long temp = n/(__gcd(i , n/i));
//             long long ma = max(i , n/i);
//             if(temp==n && ma < lcm){
//                 *a = i;
//                 lcm = ma;
//                     *b = n/i;
//             }
//             // cout<<temp<<endl;
//             // if(ma <= lcm){
//             //     lcm = ma;
                
//             // }
               
                
            
//         }
//     }
// }
// int main() {
//   long long n ;
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//   cin>>n;
//   if(prime(n)==true){
//       cout<<1<<" "<<n;
//      // cout<<"vhchhb"<<endl;
//   }
//   else{
//       long long a = 1;
//       long long b = n;
//       long long lcm = n;
//       factor(n , &a , &b , lcm);
//       cout<<a<<" "<<b<<endl;
      
//   }
  
 
//     return 0;
// }


 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
ll x;
vector < ll > a;
bool check(ll x)
{
    ll moves=0;
    for (int i=n/2; i<n; i++)
    {
        if (x-a[i]>0) moves+=x-a[i];
        if (moves>k) return false;
    }
    if (moves<=k) return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll small=1;
    ll big=2000000000;
    while (small!=big)
    {
        ll mid=(small+big+1)/2;
        if (check(mid))
        {
            small=mid;
        }
        else{
            big=mid-1;
        }
    }
    cout<<small;
}

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void hell(vector<vector<char>> &v ,long long left , int i , int j , long long n , long long m){
    
}








int main() {
int t;
cin>>t;
    while(t--){
        long long n ,m , d;
        cin>>n>>m>>d;
        vector<vector<char>> v(n , vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        bool check = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='*'){
                    long long left = 0;
                    hell(v , left , i-1 ,j-1 , n , m);
                    long long right = 0;
                    helr(v ,right , i , j , n , m );
                    left = min(left , right);
                    if(left >= d){
                        check = true;
                        break;
                    }
                }
            }
        }
        
    }

    return 0;
}




























