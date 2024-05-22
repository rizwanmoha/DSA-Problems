// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       string str;
//       cin>>str;
//       string ans = "";
//       int i= 0;
//       while(i < n && str[i]=='0'){
//           ans.push_back(str[i]);
//           i++;
//       }
//       int zero = -1;
//       string temp = "";
//       for(int j=i;j<n;j++){
//           if(str[j]=='0'){
//               zero = j;
//           }
//           temp.push_back(str[j]);
//       }
//       if(zero==-1){
//           ans+=temp;
//           cout<<ans<<endl;
//       }
//       else{
//           string temp2 = "";
//           for(int i=zero;i<n;i++){
//               temp2.push_back(str[i]);
//           }
//           ans+=temp2;
//           cout<<ans<<endl;
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
//       int n , k;
//       cin>>n>>k;
//       vector<int> v(n);
//       int d = 0;
//       long long sum = 0;
      
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           if(v[i]%k==0){
//               d++;
//           }
//           sum+=v[i];
//       }
//       if(d==n){
//           cout<<-1<<endl;
//       }
//       else if(sum%k!=0){
//           cout<<n<<endl;
//       }
//       else{
//           int mini = 0;
//           long long total = sum;
//           for(int i=0;i<n;i++){
//               sum-=v[i];
//               if(sum%k!=0){
//                   mini = max(mini , (n-1-i));
//                   break;
//               }
//           }
//           sum = total;
//           for(int i=n-1;i>= 0;i--){
//               sum-=v[i];
//               if(sum%k!=0){
//                   mini = max(mini , i);
//               }
//           }
//           cout<<mini<<endl;
//       }
      
      
      
//   }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
        int n , x;
      cin>>n>>x;
      vector<int> v(n);
      int odd = 0;
      int even = 0;
      for(int i=0;i<n;i++){
          cin>>v[i];
          if(v[i]%2==1){
              odd++;
          }
          else{
              even++;
          }
      }
     bool check = false;
     for(int i=1;i<=odd;i+=2){
         if(i==x){
             check = true;
             break;
         }
         else if( (x- i) >= 1 && (x-i) <= even){
             check = true;
             break;
         }
         else{
             continue;
         }
     }
     if(check == true){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
      
      
      
      
  }
}



// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<int> v(n);
//       vector<int> freq(n+1 , 0);
       
//       bool check = true;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           freq[v[i]]++;
//           if(freq[v[i]] > 2){
//               check = false;
//              //  cout<<"abc"<<endl;
//           }
//       }
//       if(freq[n]==0){
//           check = false;
//           //cout<<"def"<<endl;
//       }
       
//       int start = 0;
//       vector<int> p(n);
//       vector<int> q(n);
//       priority_queue<int> pq;
       
//       vector<bool> visit(n+1 , false);
//       for(int i=1;i<=n;i++){
//           if(freq[i]==0){
//               pq.push(i);
//           }
//       }
//       vector<int> pa(n+1 , 0);
//       for(int i=n;i>=1;i--){
//           if(freq[i]==2){
//               pa[i] = pq.top();
//               pq.pop();
//           }
//       }
       
       
//       for(int i=0;i<n;i++){
//           if(freq[v[i]]==1){
//               p[i] = v[i];
//               q[i] = v[i];
//           }
//           else if(freq[v[i]]==2){
//               if(visit[v[i]]==false){
//                   p[i] =  v[i];
//                   q[i] = pa[v[i]];
//                   visit[v[i]] = true;
//                   if(max(p[i] , q[i]) > v[i]){
//                       check = false;
//                       // cout<<"ghi"<<endl;
//                       break;
//                   }
//               }
//               else{
//                   p[i] = pa[v[i]];
//                   q[i] = v[i];
//                   //pq.pop();
//                   if(max(p[i] , q[i]) > v[i]){
//                       check = false;
//                       //cout<<"jkl"<<endl;
//                       break;
//                   }
//               }
               
//           }
//       }
//       // cout<<check<<endl;
//       if(check==true){
//           cout<<"YES"<<endl;
//           for(auto x : p){
//               cout<<x<<" ";
//           }
//           cout<<endl;
//             for(auto x : q){
//               cout<<x<<" ";
//           }
//           cout<<endl;
//       }
//       else{
//           cout<<"NO"<<endl;
//       }
       
       
       
       
//   }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s , t;
//     cin>>s>>t;
//     int n = s.length();
//     int m = t.length();
//     queue<char> q;
//     //string temp = "";
//   bool check  = true;
//   while()
    
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
   long long n ;
   cin>>n;
   vector<string> v(n);
   vector<string> ans;
   map<string, int > mp;
   
   for(int i=0;i<n;i++){
       cin>>v[i];
       mp[v[i]]++;
   }
   for(int i=n-1;i>=0;i--){
       string temp = v[i];
       if(mp[v[i]] > 1){
           temp.push_back('(');
           int te = mp[v[i]] - 1;
           temp+=to_string(te);
          // temp.push_back(char(mp[v[i]] - 1));
           temp.push_back(')');
           mp[v[i]]--;
           
       }
       ans.push_back(temp);
   }
   reverse(ans.begin() , ans.end());
   for(auto x : ans){
       cout<<x<<endl;
   }
  
   
   
   
   
}


// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n ;
       cin>>n;
       vector<int> a(n);
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
      // cout<<"vkcke"<<endl;
       if(n%2==1){
           cout<<-1<<endl;
       }
       else{
           vector<pair<int , int>> v;
           for(int i=0;i<n;i){
               if(a[i]==a[i+1]){
                  
                   v.push_back(make_pair(i+1 , i+2));
                    i+=2;
               }
               else{
                   v.push_back(make_pair(i+1 , i+1));
                   i++;
               }
           }
           cout<<v.size()<<endl;
           for(auto x : v){
               cout<<x.first<<" "<<x.second<<endl;
           }
       }
       
       
   }

    return 0;
}











      








