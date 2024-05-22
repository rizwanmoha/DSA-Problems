#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        vector<long long > v(n);
        map<long long, long long  > mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        //vector<long long > an;
        priority_queue<pair<long long  , long long >> q;
        for(auto x : mp){
           q.push({x.second , x.first});
        }
        long long ans =n;
        while(q.size() >= 1){
            long long f1 = q.top().first;
            long long n1 = q.top().second;
            
            q.pop();
              long long f2 = q.top().first;
            long long n2 = q.top().second;
            q.pop();
            f1--;
            f2--;
            ans-=2;
            if(f1 > 0){
                q.push({f1 , n1});
            }
             if(f2 > 0){
                q.push({f2 , n2});
            }
            
        }
        cout<<ans<<endl;
        
        
    }

    return 0;
}

// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   long long n , m;
//   cin>>n>>m;
//   string ans = "";
//   while(n > 0 && m > 0){
//       if(m > n){
//           ans+="11";
//           ans+="0";
//           m-=2;
//           n-=1;
           
//       }
//       else{
//           ans+="1";
//           ans+="0";
//           m--;
//           n--;
//       }
       
//   }
//   bool check = true;
//   if(m > 2){
//       check = false;
       
//   }
//   else{
//       if(m==2){
//           ans+="11";
           
//       }
//       else if(m==1){
//           ans+="1";
//       }
       
//   }
   
//   if(n > 2){
//       check=false;
//   }
//   else{
//       if(n==1){
//           string temp = "0";
//           ans = temp + ans;
//       }
//       else if(n==2){
//           if(ans[ans.length() - 1]=='0'){
//               check = false;
//           }
//           else{
//               string temp2= "0";
//               ans+="0";
//               ans = temp2 + ans;
               
//           }
//       }
       
//   }
//   if(check==false){
//       cout<<-1<<endl;
//   }
//   else{
//       cout<<ans<<endl;
//   }
   
   

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// void fac(long long m , map<long long , long long> &mp){
//     for(int i=1;i<=m/2;i++){
//         if(m%i==0){
//             mp[i]++;
//         }
//     }
//     mp[m]++;
// }

// int main() {
//     long long n ;
//     cin>>n;
//     vector<long long > v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
    
//     map<long long , long long> mp;
//     for(int i=0;i<n;i++){
//         fac(v[i] , mp);
//     }
//     long long ans = 0;
//     for(auto x: mp){
//         if(x.second==n){
//             ans++;
//         }
//     }
//     cout<<ans<<endl;
    
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int na;
// 	cin>>na;
// 	string s,t;
// 	cin>>s>>t;
// 	int i=0;
// 	int ans=0;
// 	while(i<na)
// 	if(s[i]!=t[i])
// 	{
// 		if(i+1<na&&s[i+1]!=t[i+1]&&s[i]!=s[i+1])
// 		{
// 			ans++;
// 			i+=2;
// 		}
// 		else
// 		{
// 			ans++;
// 			i++;
// 		}
// 	}
// 	else
// 	i++;
// 	cout<<ans<<endl;
// 	return 0;
// }

   #include <bits/stdc++.h>
using namespace std;

int main(){  
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string str;
        cin>>str;
        int star = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='*'){
                star++;
            }
        }
        if(star==0 || star == n || star==1){
            cout<<0<<endl;
        }
        else{
            int num = (star+1)/2;
            int ind = -1;
            int g = 0;
            for(int i=0;i<n;i++){
                if(str[i]=='*'){
                    g++;
                }
                if(g==num){
                    ind = i;
                    break;
                }
            }
            long long ans = 0;
            int start = ind - 1;
            for(int i=ind-1;i>=0;i--){
                if(str[i]=='*'){
                    int temp = (start - i);
                    ans+=temp;
                    start--;
                }
            }
            start = ind +1;
            for(int i=ind+1;i<n;i++){
                 if(str[i]=='*'){
                    int temp = (i -start );
                    ans+=temp;
                    start++;
                }
            }
            cout<<ans<<endl;
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
//       long long x;
//       cin>>x;
//       if(x%2==1){
//           cout<<-1<<endl;
//       }
//       else{
//           long long a = (x + (x/2));
//           long long b = (x/2);
//           if((a^b)==x){
//               cout<<a<<" "<<b<<endl;
//           }
//           else{
//               cout<<-1<<endl;
//           }
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
//       long long n, g , b;
//       cin>>n>>g>>b;
      
//       long long temp =ceil((double) n/2);
//       long long d = ceil((double)temp / g);
      
//       long long ans = ((d - 1) * g ) + ((d-1) * b);
//         temp-=(d-1) * g;
//         if(temp > 0){
//             ans+=temp;
//         }
//         if(ans < n){
//             ans = n;
//         }
      
//       cout<<ans<<endl;
      
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n , m;
//     cin>>n>>m;
//   vector<long long > v(n+1 , 0);
//   int nobles = n;
//   for(int i=0;i<m;i++){
//       int a , b;
//       cin>>a>>b;
//       int temp = min(a , b);
//       if(v[temp]==0){
//           nobles--;
//       }
//       v[temp]++;
//   }
//   int q ;
//   cin>>q;
   
//   for(int i=0;i<q;i++){
//       int ty ;
//       cin>>ty;
//       if(ty==1){
//           int a , b;
//           cin>>a>>b;
//           int temp = min(a , b);
//           if(v[temp]==0){
//               nobles--;
//           }
//           v[temp]++;
//       }
//       else if(ty ==2){
//           int a , b;
//           cin>>a>>b;
//           int temp = min(a, b);
//           v[temp]--;
//           if(v[temp]==0){
//               nobles++;
//           }
//       }
//       else {
//           cout<<nobles<<endl;
//       }
//   }
   
    
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;
//     cin>>n;
//     vector<long long > v(n);
//     map<long long , long long > mp;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mp[v[i]]++;
//     }
//     int ind  = -1;
//     for(int i=0;i<n;i++){
//         long long temp = 2 * v[i];
//         bool check = false;
//         if(v[i]%3==0){
//             long long temp2 = v[i]/3;
//             if(mp[temp2]!=0){
//                 check =true;
//             }
//         }
//         if(check==false && mp[temp]==0){
//             ind = i;
//             break;
//         }
//     }
//     vector<long long> ans;
//     ans.push_back(v[ind]);
//     while(ans.size()!=n){
//         long long se = ans[ans.size() - 1];
//         if(se%2==0 && mp[se/2]!=0){
//             ans.push_back(se/2);
//         }
//         else{
//             ans.push_back(se * 3);
//         }
        
        
//     }
//     reverse(ans.begin() , ans.end());
//     for(auto x : ans){
//         cout<<x<<" ";
//     }
//     cout<<endl;
    
    
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
      map<long long  , long long> mp;
      for(int i=0;i<n;i++){
          cin>>v[i];
          mp[v[i]]++;
      }
      vector<long long > an;
      for(auto x: mp){
          an.push_back(x.second);
      }
      sort(an.begin() , an.end());
      long long ans = 0;
      int m = an.size();
      
      for(int i=m-2;i>=0;i--){
          if(an[i] >=an[i+1]){
              an[i] = an[i+1] - 1;
          }
      }
      for(int i=0;i<m;i++){
          if(an[i] > 0){
              ans+=an[i];
          }
      }
      cout<<ans<<endl;
  }
}
      
      






























