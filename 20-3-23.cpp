#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , m , a , b , x , y;
        cin>>n>>m>>a>>b>>x>>y;
        string str;
        cin>>str;
        int dx = -1;
        int dy = -1;
        if(str[0]=='D'){
            dx = 1;
        }
        
        if(str[1]=='R'){
            dy = 1;
        }
        
        map<array<int , 4> , int> mp;
        queue<array<int , 4>> q;
        
        q.push({a, b, dx , dy});
        
        while(!q.empty()){
            auto [x , y , dirx , diry] = q.front();
            int curr = mp[{x , y , dirx , diry}];
            bfs.pop();
            int bounce = 0;
            if(x+dirx < 1 || x+dirx > n){
                dirx = -dirx;
                bounce =1;
            }   
            if(y+diry < 1 || y+diry > m){
                dirx = -dirx;
                bounce = 1;
            }
            if(mp[{x , y , dirx , diry}]==mp.end()){
                mp[{x , y , dirx , diry}] = curr + bounce;
                q.push({x , y , dirx , diry});
            }
            
            
        }
        
        int ans = INT_MAX;
        for(int i=-1;i<=1;i+=2){
            for(int j=-1;j<=1;j+=2){
                if(mp[{x , y , i , j}]!=mp.end()){
                    ans = min(ans , mp[{x , y , i , j}]);
                }
            }
        }
        if(ans==INT_MAX){
            ans = -1;
        }
        cout<<ans<<endl;
        
        
    }
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , q;
//         cin>>n>>q;
//          vector<vector<long long>> v(1005 , vector<long long>(1005 , 0));
//          vector<vector<long long>> pre(1005 , vector<long long>(1005 , 0));
         
//          for(int i=0;i<1005;i++){
//              for(int j=0;j<1005;j++){
//                  v[i][j] = pre[i][j] = 0;
//              }
//          }
         
         
         
//         for(int i=0;i<n;i++){
//             long long h , x;
            
//             cin>>h>>x;
//             v[h][x]+=h*x;
         
//         }
        
        
        
        
//       // cout<<"djfqwj"<<endl;
//         for(int i=1;i<1001;i++){
//             for(int j=1;j<1001;j++){
//                 pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + v[i][j];
//             }
//         }
//         for(int i=0;i<q;i++){
//             long long hs ,ws ,hb , wb;
//             cin>>hs>>ws>>hb>>wb;
//          //   cout<<"sbdasdc"<<endl;
//               cout << pre[hb-1][wb-1]-pre[hb-1][ws]-pre[hs][wb-1]+pre[hs][ws] << endl;
            
//         }
        
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool chec(int i , int n , string str , string t){
//     int j = 0;
//     int d = 0;
//     int temp = i + str.length();
//     for(int k = i;k<min(n , temp);k++){
//         if(str[j]==t[k]){
//             d++;
//             j++;
//         }
//         else{
//             break;
//         }
//     }
    
    
//     if(d==str.length()){
//         return true;
//     }
//     return false;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     string str;
//     cin>>str;
//         long long n ;
//         cin>>n;
//         vector<string> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//       // vector<pair<long long , long long > pa;
//         vector<pair<pair<long long , long long > , string>> an;
//         for(int i=0;i<n;i++){
//             an.push_back({{v[i].size() , i} , v[i]});
//         }
        
//         sort(an.begin() , an.end());
//         reverse(an.begin() , an.end());
//         int ind = 0;
//         vector<pair<long long , long long >> ans; 
//         vector<int> vis(n , -1);
//         bool check = false;
//         cout<<endl;
//         // cout<<"ddgcjnh"<<endl;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<str.length();j++){
//             if(chec(j,str.length() , an[i].second , str)==true){
//                 for(int k=j;k<(j+an[i].second.length());k++){
//                     vis[k] = 1;
//                 }
//                 //j+=(an[i].second.length() - 1);
//                 ans.push_back({an[i].first.second+1 , j+1});
                
//             }
//             int d = 0;
//             for(int m = 0;m<str.length();m++){
//               if(vis[m]==1){
//                   d++;
//               }
//             }
//             if(d==str.length()){
//                 check = true;
//                 break;
//             }
//         }
//         if(check==true){
//             break;
//         }
//         }
//         if(check==true){
//             cout<<ans.size()<<endl;
//             for(auto x: ans){
//                 cout<<x.first<<" "<<x.second<<endl;
//             }
//         }
//         else{
//             cout<<-1<<endl;
//         }
    
//     }
// }















