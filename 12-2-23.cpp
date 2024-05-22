// // Online C++ compiler to run C++ program online
// // #include <bits/stdc++.h>
// // using namespace std;
// // void solve(){
// //     int mfg;
// //     int ghj;
    
// //      long long ax , bx;
// //         cin>>ax>>bx;
// //         long long n , m;
// //         cin>>n>>m;
// //         long long an1 = bx *n;
// //         long long temp2 = n%(m+1);
        
// //         long long temp = (n)/(m+1);
// //         long long an2 = (temp * ax)*(m) + (temp2 *ax) ;
// //         long long an3 = (temp * ax)*(m) + (temp2 * bx);
// //         cout<<min(an1 , min(an2 , an3))<<endl;
    
    
    
// // }

// // int main() {
// //     int ta;
// //     cin>>ta;
// //     while(ta--){
// //       solve();
       
     
     
     
// //     }

// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
    
//     while(t--){
//         long long a , b;
//         cin>>a>>b;
//         cout<<((a-b)+(a-1-b)+1)<<endl;
//         for(long long j = b+1;j<=a;j++){
//             cout<<j<<" ";
//         }
//         for(long long j =a-1;j>=b;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
        
//     }
// }
     
        
     
#include <bits/stdc++.h>
using namespace std;
void ch(int start , int end , int *i, int *j , vector<long long > &v){
    long long mi = INT_MAX;
    long long ma = INT_MIN;
    
    for(int i=start;i<=end;i++){
        mi = min(mi , v[i]);
        ma = max(ma , v[i]);
    }
    if((mi==v[start] && ma ==v[end]) || (mi==v[end] && ma==v[start])){
        *i = 1;
        *j = 1;
    }
    else if((mi==v[start]) || (ma == v[start])){
         *i =1;
         
    }
    else if((mi==v[end]) || (ma == v[end])){
        *j = 1;
    }
    
}


int main() {
    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int ta;
    cin>>ta;
    
    while(ta--){   
        
        long long n ;
        cin>>n;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool check =false;
        long long l = 0;
        long long r = 0;
        // long long mi = INT_MAX;
        //  long long ma = INT_MIN;
        int end = n-1;
        int start = 0;
        vector<long long> copy = v;
        sort(copy.begin() , copy.end());
        int p1 = 0;
        int p2 = n-1;
        while(end > start){
            int i = 0;
            int j = 0;
            
            //ch(start , end , &i , &j , v);
            if((copy[p1]==v[start] && copy[p2]==v[end] ) || (copy[p1]==v[end] && copy[p2]==v[start] ) ){
                i = 1;
                j = 1;
            } 
           
            else if((copy[p1]==v[start])  ){
                i=1;
                p1++;
                j = 0;
            }
            else if((copy[p2]==v[start])){
                i=1;
                p2--;
            }
            else if((copy[p1]==v[end])  ){
                j = 1;
                p1++;
                i = 0;
            }
            else if((copy[p2]==v[end])){
                j = 1;
                p2--;
                i =0;
            }
            if(i==0 && j==0){
                check = true;
                l = start+1;
                r = end +1;
                break;
            }
            else if(i==1 && j==0){
                start++;
            }
            else if(i==0 && j==1){
                end--;
            }
            else{
                start++;
                end--;
            }
        }
        if(check==true){
            cout<<l<<" "<<r<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
}

     
// #include <bits/stdc++.h>
// using namespace std;
// void ch(int start , int end , int *i, int *j , vector<long long > &v){
//     long long mi = INT_MAX;
//     long long ma = INT_MIN;
    
//     for(int i=start;i<=end;i++){
//         mi = min(mi , v[i]);
//         ma = max(ma , v[i]);
//     }
//     if((mi==v[start] && ma ==v[end]) || (mi==v[end] && ma==v[start])){
//         *i = 1;
//         *j = 1;
//     }
//     else if((mi==v[start]) || (ma == v[start])){
//          *i =1;
         
//     }
//     else if((mi==v[end]) || (ma == v[end])){
//         *j = 1;
//     }
    
// }


// int main() {
    
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int ta;
//     cin>>ta;
    
//     while(ta--){   
        
//         long long n ;
//         cin>>n;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         bool check =false;
//         long long l = 0;
//         long long r = 0;
//         // long long mi = INT_MAX;
//         //  long long ma = INT_MIN;
//         int end = n-1;
//         int start = 0;
//         vector<long long> copy = v;
//         sort(copy.begin() , copy.end());
//         int p1 = 0;
//         int p2 = n-1;
//         while(end > start){
//             int i = 0;
//             int j = 0;
            
//             //ch(start , end , &i , &j , v);
//             if((copy[p1]==v[start] && copy[p2]==v[end] ) || (copy[p1]==v[end] && copy[p2]==v[start] ) ){
//                 i = 1;
//                 j = 1;
//                 p1++;
//                 p2--;
//             } 
           
//             else if((copy[p1]==v[start])  ){
//                 i=1;
//                 p1++;
//                 j = 0;
//             }
//             else if((copy[p2]==v[start])){
//                 i=1;
//                 p2--;
//             }
//             else if((copy[p1]==v[end])  ){
//                 j = 1;
//                 p1++;
//                 i = 0;
//             }
//             else if((copy[p2]==v[end])){
//                 j = 1;
//                 p2--;
//                 i =0;
//             }
//             if(i==0 && j==0){
//                 check = true;
//                 l = start+1;
//                 r = end +1;
//                 break;
//             }
//             else if(i==1 && j==0){
//                 start++;
//             }
//             else if(i==0 && j==1){
//                 end--;
//             }
//             else{
//                 start++;
//                 end--;
//             }
//         }
//         if(check==true){
//             cout<<l<<" "<<r<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;

 int main() {
    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int ta;
    cin>>ta;
    
    while(ta--){   
        int n  , l , r;
        cin>>n>>l>>r;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans = 0;
        sort(v.begin() , v.end());
        for(int i=0;i<n-1;i++){
            int low = i+1;
            int high = n-1;
            long long temp1 = l - v[i];
            long long temp2  = r - v[i];
            int ind1 = -1;
            int ind2 = -1;
            
            while(high >= low ){
                int mid = (low + high )/2;
                if(v[mid] == temp1){
                    ind1 = mid;
                    break;
                }
                else if(v[mid] > temp1){
                    ind1 = mid;
                    high = mid -1;
                }
                else if(v[mid] < temp1){
                    low = mid +1;
                }
            }
            low = i+1;
            high = n-1;
            
            while(high > low ){
                int mid = (low + high )/2;
                if(v[mid] == temp2){
                    ind2 = mid;
                    break;
                }
                else if(v[mid] > temp2){
                   
                    high = mid -1;
                }
                else if(v[mid] < temp1){
                    ind2 = mid;
                    low = mid +1;
                }
            }
            
            long long tr = 0;
            if(ind1==-1 || ind2==-1){
                tr = 0;
                
            }
            else if(ind2 >= ind1){
                tr = (ind2 - ind1) +1;
            }
            ans+=tr;
            
            
        }
        cout<<ans<<endl;
    }
 }



// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
  
   cout<<temp<<endl;
   while(t--){
       int n ;
       cin>>n;
       vector<long long > v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       long long  ans = 0;
       for(int i=1;i<n;i++){
           if(v[i] >= v[i-1]){
               continue;
           }
           else{
               int ind = i;
                  long long temp = v[i-1] - v[i];
              long long temp2 = log2(temp);
             // v[i] = v[i] + pow(2 , temp2);
              temp2 = temp2+1;
              ans = max(ans , temp2);
              ans+=1;
               while(ind < n && v[ind]==v[i]){
                   
                   ind++;
               }
               i = ind-1;
               
               
           
           }
       }
       cout<<ans<<endl;
   }
    return 0;
}



































