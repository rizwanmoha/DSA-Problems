// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<long long > v(n);
//     long long l = INT_MIN;
//     long long r = 0;
//     long long ans = 0;
//     vector<pair<long long  , long long >> pa;
//     for(int i=0;i<n;i++){
//         long long a ,b;
//         cin>>a>>b;
//         pa.push_back({a , b});
        
//     }
    
//     for(int i=0;i<n;i++){
        
//         long long temp = (pa[i].first - pa[i].second);
        
//         if(i==0){
//             l = pa[i].first;
//             r= pa[i].first;
//             ans++;
//         }
//         else if(i==(n-1)){
//             ans++;
//         }
//         else {
//             long long temp2 = (pa[i+1].first - pa[i].first);
//             if(temp > l){
//                  l = pa[i].first;
//                  r= pa[i].first;
//             ans++;
//             }
//             else if(temp2 > pa[i].second){
//                 l = (pa[i].first + pa[i].second);
//                 ans++;
//             }
//             else{
//                   l = pa[i].first;
//                  r= pa[i].first;
//             }
//         }
//     }
//     cout<<ans<<endl;
    

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int fun(string str , char c , int start , int end){
//     if(start==end){
//         if(str[end]==c){
//             return 0;
//         }
//         else{
//             return 1;
//         }
//     }
    
//     int c1 = 0;
//     int c2 = 0;
//     int mid = (start + end)/2;
//     for(int i=start;i<= mid ;i++){
//         if(str[i]!=c){
//             c1++;
//         }
//     }
//     for(int i = mid+1;i<=end;i++){
//          if(str[i]!=c){
//             c2++;
//         }
//     }
    
//     int x = fun(str , c+1 , start , mid);
//     int y = fun(str , c+1 , mid+1 , end);
    
//     return min(c2+x , c1+y);
// }

// int main() {
    
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         string str;
//         cin>>str;
//         cout<<fun(str , 'a' , 0 , n-1)<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        
        int n ;
        cin>>n;
        vector<int > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
       // map<int  , int >mp;
       unordered_set<int> s;
        for(int i=0;i<n-1;i++){
            int sum = 0;
            sum+=v[i];
            for(int j = i+1;j<n;j++){
                sum+=v[j];
                //mp[sum] = 1;
                s.insert(sum);
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s.find(v[i])!=s.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
}



// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
    
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int t;
//     cin>>t;
//     while(t--){
        
//         int n ;
//         cin>>n;
//         vector<int > v(n);
//         map<int, int > mp2;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp2[v[i]]++;
//         }
//         map<int  , int >mp;
//       // unordered_set<int> s;
//         for(int i=0;i<n-1;i++){
//             int sum = 0;
//             sum+=v[i];
//             for(int j = i+1;j<n;j++){
//                 sum+=v[j];
//                 if(mp2[sum]!=0){
//                     mp[sum] = 1;
//                 }
                
                
//             }
//         }
        
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             if(mp[v[i]]!=0){
//                 ans++;
//             }
//         }
//         cout<<ans<<endl;
        
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
    
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int  n ;
//     cin>>n;
//     vector<long long > v(n);
//     map<long long , long long > mp;
//     long long  sum2 = 0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mp[v[i]]++;
//         sum2+=v[i];
        
//     }
   
//      sort(v.begin() , v.end());
//       long long sum = sum2 - v[n-1];
//     if((sum2%2==0) && (v[n-1] <= sum)){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
    
// }


#include <bits/stdc++.h>
using namespace std;

long long helper(long long a ){
    long long ten = a/10;
    long long h = a/100;
    long long th = a/1000;
    long long tth = a/10000;
    long long l = a/100000;
    long long tl = a/1000000;
    long long cr = a/10000000;
    long long tcr = a/100000000;
    long long b = a/1000000000;
    
    ten = ten -(h );
    h = h - (th);
    
    th = th -(  tth);
    tth = tth -( l );
    l = l -( tl );
    tl = tl -(  cr );
    cr = cr -( tcr );
    tcr = tcr -( b);
     a = a - (ten + h + th + tth + l + tl + cr + tcr + b);
      a = a + ((ten *2) + (h *3) + (th*4) + (tth *5 ) + (l *6) + (tl *7) + (cr*8) + (tcr * 9) + (b*10));
     
     return a;
    
    
}
 
int main() {
    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        long long temp1 = helper(b);
         long long temp2 = helper(a);
        cout<<(temp1 - temp2)<<endl;
    }
    
}


// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         string str;
//         cin>>str;
//         int x ;
//         cin>>x;
//         int n = str.length();
//         string ans = "";
//         for(int  i=0;i<n;i++){
//             ans+='1';
//         }
//         for(int i=0;i<n;i++){
//             if(str[i]=='0'){
//                 if((i-x) >= 0){
//                     ans[i-x] = '0';
//                 }
//                 if((i+x) < n){
//                     ans[i+x] = '0';
//                 }
//             }
//         }
        
//         bool check = true;
//         for(int i=0;i<n;i++){
//             if(str[i]=='1'){
//                 int f = 0;
//                 if((i-x) >= 0 && ans[i-x]=='1') {
//                     f++;
//                 }
//                 if((i+x) < n && ans[i+x]=='1') {
//                     f++;
//                 }
                
//                 if(f==0){
//                     check = false;
//                     break;
//                 }
//             }
//         }
//         if(check==false){
//             cout<<-1<<endl;
//         }
//         else{
//             cout<<ans<<endl;
//         }
        
        
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n , k;
//     cin>>n>>k;
//     string str;
//     cin>>str;
//     string b = str;
//     long long ana = 0;
//     long long anb = 0;
//     int ka = k;
    
//     for(int i=0;i<n;i++){
//         if()
//     }
    
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         long long n ;
//         cin>>n;
//         int l = sqrt((2 *n) - 1);
//         cout<<(l-1)/2<<endl;
        



// }
// }
























