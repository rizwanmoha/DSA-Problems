// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > a(n) , b(n);
//       for(int i=0;i<n;i++){
//           cin>>a[i];
//       }
//       for(int i=0;i<n;i++){
//           cin>>b[i];
//       }
//       vector<long long> pre(n);
//       pre[0] = b[0];
//       for(int i=1;i<n;i++){
//           pre[i] = pre[i-1] + b[i];
//       }
//       vector<long long> freq(n+1) , rem(n+1);
//       for(int i=0;i<n;i++){
//           long long val = a[i];
//           if(i > 0){
//               val+=pre[i-1];
//           }
//           long long ind = upper_bound(pre.begin() , pre.end() , val) - pre.begin();
//           freq[ind]++;
//           long long rm = val;
//           if(ind > 0){
//               rm-=pre[ind-1];
//           }
//           rem[ind]+=rm;
//       }
//       for(int i=1;i<n;i++){
//           freq[i]+=freq[i-1];
//       }
//       for(long long i=0;i<n;i++){
//           long long x = (i+1 - freq[i])*b[i] + rem[i];
//           cout<<x<<" ";
//       }
//       cout<<endl;
       
//   }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// long long mod =  998244353;
// long long x =  998244353;
unsigned long long power(unsigned long long x, 
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
  
    x = x % p; // Update x if it is more than or
    // equal to p
  
    while (y > 0) 
    {
      
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
  
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
  
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,  
                                            int p)
{
    return power(n, p - 2, p);
}
  
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long ncr(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
  
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
  
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
  



int main() {
  long long n ;
  cin>>n;
  long long res = 1;
  long long x =  998244353;
  for(int i=0;i<n;i+=3){
      vector<long long > v(3);
      for(int j =0;j<3;j++){
          cin>>v[j];
      }
      sort(v.begin() , v.end());
      if(v[0]==v[1] && v[1]==v[2]){
          res+=3;
      }
      else if(v[0]==v[1]){
          res+=2;
      }
      res = res%x;
  }
  
  //cout<<res<<" "<<ncr(n/3 , n/6)<<endl;
  res =( res * ncr (n/3 , n/6 , x))%x;
  cout<<res<<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
  int ta;
  cin>>ta;
 
  
  
  
  while(ta--){
      long long na ;
      cin>>na;
      if(na%2==0){
          cout<<"NO"<<endl;
      }
      else{
           cout<<"YES"<<endl;
           vector<pair<long long , long long  >> v;
           long long start = 1;
           long long end = 2*na;
           for(int i=0;i<na;i++){
               v.push_back(make_pair(start , end));
                 if(start==na){
                        start+=1;
                        end = (na-1);
                    }
                else if(start < na){
                   start+=2;
                   end-=1;
               }
               else{
                   start+=1;
                   end-=2;
               }
           }
           for(auto x : v){
               cout<<x.first<<" "<<x.second<<endl;
           }
      }
  }
}
  
  
  







