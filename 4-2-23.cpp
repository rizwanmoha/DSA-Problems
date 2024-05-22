// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int t;
// cin>>t;
// while(t--){
//     int   n;
//     cin>>n;
//     vector<int > v(n);
//     for(int i=0;i<n;i++){
//         int x ;
//         cin>>x;
//         v[x-1] = i;
//     }
//     string str = "";
//     int r = 0;
//     int l = n;
    
//     for(int i=0;i<n;i++){
//         l = min(l , v[i]);
//         r = max(r , v[i]);
//         if((r-l)==i){
//             str+='1';
//         }
//         else{
//             str+='0';
//         }
//     }
//     cout<<str<<endl;
// }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int t;
// cin>>t;
// while(t--){
//     int   n;
//     cin>>n;
//     vector<long long > v(n);
//     long long sum = 0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         sum+=v[i];
//     }
    
//     bool check = false;
//     vector<long long> copy  = v;
//     for(int i=1;i<n;i++) v[i]+=v[i-1];
//     for(int i=n-2;i>= 0;i--){
//         copy[i]+=copy[i+1];
//     }
//     long long temp = sum;
//     for(int i=0;i<n;i++){
//         if((temp - v[i]) >= sum){
//             check = true;
//             break;
//         }
//     }
//     temp = sum ;
//     for(int i=n-1;i>= 0;i--){
//         if((temp - copy[i]) >= sum ){
//             check = true;
//             break;
//         }
//     }
//     if(check==true){
//         cout<<"NO"<<endl;
//     }
//     else{
//         cout<<"YES"<<endl;
//     }
        
        
// }
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int t;
// cin>>t;
// while(t--){
    
//     string str;
//     cin>>str;
//     int n = str.length();
//     long long ans= 0;
//     // for(int i=0;i<INT_MAX;i++){
//     //     long long curr = i;
//     //     bool check = true;
//     //     for(int j = 0;j<n;j++){
//     //         ans++;
//     //         if(str[j]=='+'){
//     //             curr+=1;
//     //         }
//     //         else{
//     //             curr-=1;
//     //         }
//     //         if(curr < 0){
//     //             check = false;
//     //             break;
//     //         }
//     //     }
//     //     if(check==true){
//     //         break;
//     //     }
//     // }
//     for(int i=0;i<n;i++){
        
//     }
    
    
//     cout<<ans<<endl;
// }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    string str , str1;
    cin>>str>>str1;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i==0){
            if(str[i]!=str1[i]){
                ans.push_back(i+1);
            }
            else{
                continue;
            }
        }
        else {
            if(str[i]!=str1[i]){
                ans.push_back(i+1);
                ans.push_back(1);
                ans.push_back(i+1);
            }
            else{
                continue;
            }
        }
    }
    cout<<ans.size()<<" ";
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//     vector<long long > v(t);
//     vector<long long > v2(t);
//     for(int i=0;i<t;i++){
//         cin>>v[i]>>v2[i];
//     }
//     for(int i=0;i<t;i++){
//         cout<<v[i] + v2[i]<<endl;
//     }
    
    

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
    
//     int n , k;
//     cin>>n>>k;
    
//     vector<string > v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<string > ans;
//     for(int i=0;i<k;i++){
//         ans.push_back(v[i]);
//     }
    
    
//     sort(ans.begin() , ans.end());
//     for(auto x : ans){
//         cout<<x<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;


 bool dfs(int s , vector<bool> &visited, vector<bool> &newvis , vector<int> adj[] ,int parent ){
        visited[s]=true;
        newvis[s] = true;
        for(auto x: adj[s]){
            if(newvis[x]==false){
                if(dfs(x , visited ,  newvis , adj , s)){
                    return true;
                }
            }else if(newvis[x]==true && x!=parent){
                return true;
            }
        }
        return false;
    }

int main() {
    
    long long n , m;
    cin>>n>>m;
    vector<int > adj[n+1];
    
    for(int i=0;i<m;i++){
        int a , b;
        cin>>a>>b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
        
        
    }
    vector<bool> v(n+1 , false);
    long long ans = 0;
    for(int i=1;i<n+1;i++){
        if(v[i]==false){
            vector<bool> visited(n+1 , false);
            if(dfs(i , v , visited , adj , -1)==true){
               cout<<i<<endl;
                ans++;
            }
        }
    }
    
    //cout<<ans<<endl;
    
    
}


// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool prime(long long n ){
    for(int i=2;i*i<= n;i++){
        if(n%i==0){
            return true;
        }
    }
    return false;
}
void factor(long long n , long long *a , long long *b){
    
    for(long long  i=2;i*i<=n;i++){
        if(n%i==0){
            long long temp = n/(__gcd(i , n/i));
            if(temp == n){
                long long t2 = max(i , n/i);
                 long long t = max(*a , *b);
                if(t > t2){
                    *a = i;
                    *b = n/i;
                }
                
            }
        }
    }
}
int main() {
  long long n ;
  cin>>n;
  if(prime(n)==true){
      cout<<1<<" "<<n;
  }
  else{
      long long a = 1;
      long long b = n;
      factor(n , &a , &b);
      cout<<a<<" "<<b<<endl;
      
  }
  

    return 0;
}













