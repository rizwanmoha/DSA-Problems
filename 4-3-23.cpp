// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long x1 , y1 , x2 , y2;
//       cin>>x1>>y1>>x2>>y2;
//       long long ans = (x2 - x1) * (y2 - y1) + 1;
//       cout<<ans<<endl;
//   }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//  string str;
//  cin>>str;
//  long long nb , ns , nc;
//  cin>>nb>>ns>>nc;
//  long long pb , ps , pc;
//  cin>>pb>>ps>>pc;
//  long long r;
//  cin>>r;
//  long long b=0 , s=0 , c=0;
//  for(int i=0;i<str.length();i++){
//      if(str[i]=='B'){
//          b++;
//      }
//      else if(str[i]=='C'){
//          c++;
//      }
//      else if(str[i]=='S'){
//          s++;
//      }
//  }
//  long long start = 0;
//  long long end = 100000000000000;
//  long long ans = 0;
//  while(end >= start){
//      long long mid =start + (end - start)/2;
//      long long mb = mid * b;
//      long long ms = mid * s;
//      long long mc = mid * c;
//      mb-=nb;
//      ms-=ns;
//      mc-=nc;
//      if(mb < 0){
//          mb = 0;
//      }
//      if(ms < 0){
//          ms = 0;
//      }
//      if(mc < 0){
//          mc = 0;
//      }
     
//      long long cost = ((mb) * (pb)) + ((ms) * (ps)) + ((mc) * (pc));
     
//      if(r== cost){
//          ans = mid;
//          break;
//      }
//      else if(r < cost){
//          end = mid - 1;
//      }
//      else if(r > cost){
//          start = mid + 1;
//          ans = mid;
//      }
     
     
     
     
//  }
 
//  cout<<ans<<endl;

 
 
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        if(n==2 || n==3){
            cout<<-1<<endl;
        }
        else if(n==4){
            cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
        }
        else if(n%2==1){
            for(int i=n;i>=0;i-=2){
                cout<<i<<" ";
            }
            cout<<4<<" "<<2<<" ";
            for(int i=6;i<n;i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=n;i>0;i-=2){
                cout<<i<<" ";
            }
            cout<<5<<" "<<1<<" "<<3<<" ";
            for(int i=7;i<n;i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
      
      
      
      
      
      
      
      
      
      
      
