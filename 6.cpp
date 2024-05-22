// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int taaa;
//     cin >> taaa;

//     while (taaa--){
//         long long n ;
//         cin>>n;
//         vector<long long > v(n , 0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         set<long long > s1;
//         set<long long > s2;
//         for(int i=1;i<=n;i++){
//             s1.insert(i);
//             s2.insert(i);
//         }
//         long long m = 0;
//         vector<long long > mi(n , 0);
//            vector<long long > ma(n , 0);
//            vector<bool > vis(n+1 , false);
//         for(int i=0;i<n;i++){
//                 if(v[i] > m){
//                         m = max(m , v[i]);
//                         mi[i] = v[i];
//                          ma[i] = v[i];
//                          s1.erase(v[i]);
//                          s2.erase(v[i]);
//                          vis[v[i]] = true;
//                 }
                
//         }
//         m = 0;
//         auto it = s1.begin();
//         for(int i=0;i<n;i++){
//             if(mi[i]==0){
//                 mi[i] = *it;
//                 it++;
//                 long long se = m;
//                 auto it1 = --s2.lower_bound(se);
                
//                  ma[i] = *it1;
//                 s2.erase(it1);
               
//             }
//             else{
//                 m = max(m , mi[i]);
//             }
//         }

//         for(auto x : mi){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//         for(auto x : ma){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }



// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int taaa;
    cin >> taaa;

    while (taaa--){
        long long n ;
        cin>>n;
        vector<long long > v(n , 0);
        map<long long , long long > mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<long long > freq(n+1 , 0);
        long long m = 0;
        for(auto x: mp){
            freq[x.second]+=x.second;
            m = max(m , x.second);
        }
        if(m==n){
            cout<<0<<endl;
            continue;
        }
        long long ans = INT_MAX;
        for(int i=n-1;i >= 1;i--){
           freq[i] = 
        }
        cout<<ans<<endl;
    }
}