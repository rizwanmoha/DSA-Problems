// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , m;
//         cin>>n>>m;
//         vector<vector<long long >> v(n , vector<long long > (m));
//         for(int i=0;i<n;i++){
//             for(int j =0;j<m;j++){
//                 cin>>v[i][j];
//             }
//         }
//         bool check = true;
//         int start = 0;
//         int end = 0;
//         for(int i=0;i<n;i++){
//             int flip = 0;
//             for(int j=1;j<m;j++){
//                 if(flip ==0 && v[i][j] >= v[i][j-1]){
//                     start = j;
//                     continue;
//                 }
//                 else if((flip == 1) && (v[j] > v[j-1])){
//                     end = j-1;
//                     break;
//                 }
//                 else if(v[j] < v[j-1]){
//                     flip = 1;
//                     //end = j;
//                 }
//             }
//             if(flip == 1){
                
//                 for(int i=0;i<n;i++){
//                     long long temp = v[i][start];
//                     v[i][start] = v[i][end];
//                     v[i][end] = temp;
//                 }
//                 bool check1= true;
//                 for(int i=0;i<n;i++){
//                     for(int j=1;j<m;j++){
//                         if(v[i][j] < v[i][j-1]){
//                             check1 = false;
//                             break;
//                         }
//                     }
//                     if(check1==false){
//                         check = false;
//                         break;
//                     }
//                 }
//             }
            
//         }
//         if(check==true){
//             cout<<start+1<<" "<<end+1<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
        
        
        
        
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n , m;
        cin>>n>>m;
        map<long long , long long > mp;
        vector<long long> v(n+1 , 0);
        for(int i=0;i<m;i++){
            long long a ;
            cin>>a;
            mp[a]++;
            
        }
        
        for(int i=1;i<=n;i++){
            v[i] = mp[i];
        }
        sort(v.begin() , v.end());
        long long ans = v[1];
        
        //cout<<ans<<endl;
        for(int i=2;i<=n;i++){
            long long temp = v[i] - ans;
            if(temp <= 1){
                ans+=temp;
            }
            else{
                long long temp2 = (i-1)  + 2;
                long long temp3 = temp / temp2;
                ans+=(temp3 *  2);
                long long rem = temp %temp2;
                if(rem==0 || rem==1){
                    ans+=rem;
                }
                else{
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    }
}
        
