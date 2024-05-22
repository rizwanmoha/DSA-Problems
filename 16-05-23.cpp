// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<int> v(n);
//         map<int , int> mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]]++;
//         }
//         vector<int> copy = v;
//         sort(copy.begin() , copy.end());
       
//         if(mp.size()==1){
//             cout<<1<<endl;
//             continue;
//         }
//          if(v==copy){
//             cout<<2<<endl;
//             continue;
//         }
//         reverse(copy.begin() , copy.end());
//         if(v==copy){
//             cout<<2<<endl;
//             continue;
//         }
//        int i = 1;
//        int ans = 0;
//        while(i < n){
//         if(v[i] <= v[i-1]){
//             while(i < n && v[i] <= v[i-1]){
//                 i++;
//             }
//             ans++;
//         }

//         else{
//             while(i < n && v[i] >= v[i-1]){
//                 i++;
//             }
//             ans++;
//         }
//        }
//        cout<<ans+1<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<long long > a(n);
//         vector<long long > b(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         sort(a.begin() , a.end());
//         for(int i =0;i<n;i++){
//             cin>>b[i];
//         }
//         sort(b.begin() , b.end() , greater<int>());
//         long long ans = 1;
//         long long mod = 1000000009;
//         for(long long i =0;i<n;i++){
//             long long g = n -  (upper_bound(a.begin() , a.end() , b[i]) - a.begin());
//                             long long h = 0;
//                         ans = ans * max(g - i, h) % MOD;

            
//         }
//         cout<<ans<<endl;

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//         int n  , k;
//         cin>>n>>k;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int start = 0;
//         int  end = n-1;
//         sort(v.begin() , v.end());
//         long long sum = 0;
//         while(k > 0 ){
//                 k--;
//                 long long temp = v[start] + v[start+1];
//                 if(temp <= v[end]){
//                     start+=2;
//                     sum+=v[end];
//                     end--;

//                 }
//                 else{
//                     sum+=temp;
//                     start+=2;
//                     end--;
//                 }
//         }
        
//         for(int i=start;i<=end;i++){
//                 sum+=v[i];
//         }
//         cout<<sum<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//         int n , m ;
//         cin>>n>>m;
//         vector<int> adj[n+1];
//         for(int i=0;i<m;i++){
//             int u , v;
//             cin>>u>>v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);

//         }
//         map<int , int> mp;
//         for(int i=1;i<=n;i++){
//         if(adj[i].size()!=1){
//             mp[adj[i].size()]++;
//         }
//         }
//         int x1 = 0;
//         int y = 0;
//         if(mp.size()==1){
//             for(auto x : mp){
//                 x1 = x.first;
//                 y = x.first - 1;
//             }
//             cout<<x1<<" "<<y<<endl;
//             continue;
//         }

//         for(auto x: mp){
//             if(x.second==1){
//                 x1 = x.first;
//             }
//             else{
//                 y = x.first - 1;
//             }
//         }

//         cout<<x1<<" "<<y<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         unordered_set<string> st;
//         for(int i=0;i<n-1;i++){
//             string temp = "";
//             temp+=s[i];
//             temp+=s[i+1];

//             st.insert(temp);
//         } 
//         cout<<st.size()<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//             long long n , k;
//             cin>>n>>k;
//             vector<long long > a(n );
//             for(int i=0;i<n;i++){
//                 cin>>a[i];
//             }
//             vector<long long > b(n );
//             for(int i=0;i<n;i++){
//                 cin>>b[i];
//             }

//             vector<long long > copy = a;
//             vector<bool> v(n , false);
//             sort(a.begin() , a.end());
//             sort(b.begin() , b.end());
//             multimap<int, int> m;

//             for(int i=0;i<n;i++){
//                     m.insert(make_pair(a[i] , b[i]));
//             }
//             vector<long long > ans(n);
//             for(int i=0;i<n;i++){
//                 auto it = m.find(copy[i]);
//                 ans[i] = it->second;
//                 m.erase(it);
//             }

//             for(int i=0;i<n;i++){
//                 cout<<ans[i]<<" ";
//             }
//             cout<<endl;


//     }
// }


#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    int t ;
    cin>>t;
    while(t--){

        long long n ;
        cin>>n;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<long long > s;
        bool check = true;
        for(auto x : v){
            if(x%2==1){
                s.insert(x);
            }
        }
        
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                continue;
            }
            else{
                check= false;
                break;
            }
            

        }
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            check = true;
            for(int i=0;i<n;i++){
                if(v[i]%2==1){
                    continue;
                }
                else{
                    int k = 1;
                    bool check1 = true;
                    for(auto x : s){
                        k--;
                        if(x < v[i]){
                                check1 = true;
                        }
                        else{
                            check1 = false;
                        }
                        if(k==0){
                            break;
                        }
                        
                    }
                    if(check1==false){
                           check = false;
                           break; 
                        }


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