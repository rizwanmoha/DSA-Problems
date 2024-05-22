// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t ;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         if(n%2==1){
//             for(int i=1;i<=n;i++){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             long long sum = 0;
//             for(int i=1;i<=n;i++){
//                 cout<<i*2<<" ";
//                 sum+=i;
//             }
          
//             cout<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void sol(){
     long long n ;
        cin>>n;
        vector<long long > v(n);
        map<long long , long long>  mp;
          map<long long , long long>  mp1;
          for(int i=0;i<n;i++){
            mp1[i+1] = i+1;
        }
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]] = i+1;
            
        }
      
         map<long long , long long>  mp2;
        

        // vector<long long > copy = v;
        // sort(v.begin() , v.end());
        // for(int i=0;i<n;i++){
        //     long long temp = abs(i - mp[v[i]]);
        //     if(temp!=0){
        //         mp1[temp]++;
        //     }
        // }

        // if(mp1.size()==0){
        //     cout<<1<<endl;
        //     continue;
        // }



        long long c = 0;
        long long ans = 0;
        // for(auto x : mp1){
        //     if(x.second >=c){
        //         c =  x.second;
        //         ans =  min(ans , x.first) ;
        //     }
        // }
            // cout<<ans<<endl;
        for(int i=0;i<n;i++){
            mp2[abs(mp1[i+1] - mp[i+1])]++;
        }
        long long hcf ;
        for(auto y : mp2){
         hcf = y.first;  
         break; 
        }
        for(auto y : mp2){
            hcf = __gcd(hcf , y.first);

        }
        cout<<hcf<<endl;
}



int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t ;
    cin>>t;
    while(t--){
       sol();




    }
}










