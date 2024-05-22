
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int taaa;
//     cin >> taaa;

//     while (taaa--){
//         long long n ;
//         cin>>n;
//         vector<long long > v(n , 0);
//         map<long long , long long > mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]];
//         }
//         vector<long long > a;
//             for(auto x: mp){
//                 a.push_back(x.first);
//             }
//         if(mp.size()==1){
//             cout<<1<<endl;
//         }
//         else{
//            int m = a.size();
//            for(int i=n-2;i>=0;i--){
            
//            }



//         }
        




//     }



// }

// #include <bits/stdc++.h>
// using namespace std;


// bool prime (long long n){
//     for(int i=2;i*i<= n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//    long long a , b;
//    cin>>a>>b;
//    long long ans = 0;
    
//    while(a >= 1 && b >= 1){
//     long long gcd = __gcd(a , b); 
//     if(gcd!= 1 && prime(gcd)==true){
//         long long temp = min(a , b)/gcd;
//         ans+=temp;
//         break;
//     }
//     a = a - gcd;
//     b = b - gcd;
//     ans++;
//    }
//    cout<<ans<<endl;

// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
    
//         long long n ;
//         cin>>n;
//         vector<long long > v( n, 0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin() , v.end());

//         for(int i=0;i<n;i++){
//             if(i==0 &&  i+1 < n && v[i]==v[i+1]){
//                     if(v[i] > 1){
//                         v[i]--;
//                     }

//             }
//             else if(i==n-1){
//                 if(v[i]==v[i-1]){
//                     v[i]++;
//                 }
//             }
//             else{
//                 if(v[i]!=v[i-1] && v[i+1]==v[i] ){
//                     v[i]--;
//                 }
//                 else if(v[i]!=v[i+1] && v[i]==v[i-1]){
//                     v[i]++;
//                 }
//                 else if(v[i]==v[i+1] && v[i]==v[i-1]){
//                     v[i]++;
//                 }

//             }
//         }
//         unordered_set<long long > s;
      
//             for(int i=0;i<n;i++){
//                 s.insert(v[i]);
//             }
//             for(auto x : s){
//                 cout<<x<<" ";
//             }
//             cout<<endl;
// cout<<s.size()<<endl;
       

// }


// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int now_i_am_going_to_run;
//     cin>>now_i_am_going_to_run;

//     while(now_i_am_going_to_run--){
//         long long a , b ;
//         cin>>a>>b;
//         if(a==1 && b==1){
//             cout<<1<<endl;
//             cout<<a<<" "<<b<<endl;
//         }
//         else if(b%a!=0  || a%b!=0){
//             cout<<1<<endl;
//         cout<<a<<" "<<b<<endl;
//         }
//         else{
//             cout<<2<<endl;
//             cout<<a-1<<" "<<b<<endl;
//             cout<<a<<" "<<b<<endl;
//         }
        
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int now_i_am_going_to_run;
//     cin>>now_i_am_going_to_run;

//     while(now_i_am_going_to_run--){
//         long long n ;
//         cin>>n;
//         vector<long long > v(n , 0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
       
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;


// int main(){

//         long long n , k;
//         cin>>n>>k;
//         vector<long long > v(n , 0);
//         map<long long , long long > mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]]++;
//         }
//         sort(v.begin() , v.end());
//         bool check = false;
//         for(auto x : mp){
//             if(x.second >= k){
//                 check = true; 
//                 break;
//             }
//         }
//         if(check==true){
//             cout<<0<<endl;
//             return 0;
//         }
//        long long ans = INT_MAX;
//        for(int i=0;i<n;i++){
//         map<long long , long long > m1 = mp;
//         vector<long long > an = v;
//         long long temp = 0;
//         for(int j = i;j<n;j++){
//             if(v[i]!=an[j]){
//                 long long count = 0;
                
//                 while(v[i] < an[j]){
//                     an[j] = an[j]/2;
//                     count++;
//                 }
//                 if(v[i]==an[j]){
//                     temp+=count;
//                     m1[v[i]]++;
//                 }
//                 if(m1[v[i]] >= k){
//                     ans = min(ans , temp);
//                     break;
//                 }

                
//             }

//         }
        

//        }

//        if(ans==INT_MAX){
//         vector<long long > a;
//          for(int i=0;i<n;i++){
       
                
//                 long long count = 0;
//                 while(v[i] > 0){
//                     count++;
//                     v[i] = v[i]/2;

//                 }
//                 if(v[i]==0){
//                     a.push_back(count);
//                 }
                

//          }   
//          sort(a.begin() , a.end());
//          long long te = 0;
//          for(auto x : a){
//             cout<<x<<" ";
//          }
//          cout<<endl;
//          for(int i=0;i<n;i++){
//             if(k > 0){
//                 te+=a[i];
//                 k--;
//             }
//             else{
//                 break;
//             }

//          }
//          cout<<te<<endl;
//          return 0;

           
//        }

//        cout<<ans<<endl;

//     }


// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int now_i_am_going_to_run;
//     cin>>now_i_am_going_to_run;

//     while(now_i_am_going_to_run--){
//         long long n ;
//         cin>>n;
//         vector<long long > v(n , 0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         if(n%2==1){
//             cout<<"YES"<<endl;
//         }
//         else{
//             for(int i=1;i<n - 1;i++){
//                     long long temp = v[i-1] - v[i];
//                     v[i]+=temp;
//                     v[i+1]+=temp;
//             }
//             if(v[n-1] >= v[n-2]){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }

//     }
// }



#include <bits/stdc++.h>
using namespace std;

bool prime(long long n ){
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
long long fact(long long n){
    long long ans = 0;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            ans = max(ans , i);
        }
    }
    return ans;
}


int main(){

        long long n;
        cin>>n;
        if(prime(n)==true){
            cout<<n<<endl;
        }
        else{
            long long fc = fact(n);
            cout<<fc<<endl;
        }

}
