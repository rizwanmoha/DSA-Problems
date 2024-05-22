// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
//         long long n ;
//         cin>>n;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         bool check = true;
//         bool check1 = true;
//         for(int i=1;i<n;i++){
//             if(v[i] > v[i-1]){
//                 continue;
//             }
//             else{
//                 check = false;
//                 break;
//             }
//         }
//         for(int i=1;i<n;i++){
//             if(v[i] < v[i-1]){
//                 continue;
//             }
//             else{
//                 check1 = false;
//                 break;
//             }
//         }
        
//         if(check==true || check1==true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             int flip = 0;
//             long long pre = -1;
//             check = true;
//             for(int i=0;i<n;i++){
//                 if(i==0){
//                     if(v[i]==0){
//                         continue;
//                     }
//                     else{
//                         v[i] = 0;
//                     }
//                 }
//                 else if(flip==0){
//                     if(  v[i] > v[i-1]){
//                         v[i] = v[i-1] +1 ;
//                     }
//                     else if(v[i]==v[i-1]){
//                         if(v[i] > 0 ){
//                             v[i] = v[i] - 1;
                            
//                         }
//                         else{
//                             check = false;
//                             break;
//                         }
//                         flip = 1;
                        
//                     }
//                     else{
//                         flip = 1;
//                     }
//                 }
//                 else{
//                     if(v[i] >= v[i-1]){
//                       // cout<<"jhfvfh"<<endl;
//                         // check = false;
//                         // break;
//                         if(v[i-1] > 0){
//                             v[i] = v[i-1] - 1;
//                         }
//                         else{
//                             check = false;
//                             break;
//                         }
//                     }
//                 }
//                 if(check==false){
//                     break;
//                 }
//             }
//             if(check==true){
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
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n , s;
        cin>>n>>s;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum = 0;
        long long pre = 0;
        long long m = 0;
        bool check = false;
        for(int i=0;i<n;i++){
            if(m <  v[i]){
                m = v[i];
                pre = i+1;
            }
            sum+=v[i];
            if(sum > s){
                check = true;
                break;
            }
            
        }
        if(check==true){
            cout<<pre<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
}

// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ;
//     cin>>n;
//     string str;
//     cin>>str;
//     int white = 0;
//     int black = 0;
//     for(int i=0;i<n;i++){
//         if(str[i]=='W'){
//             white++;
//         }
//         else{
//             black++;
//         }
//     }
//     if(white==0 || black==0){
//         cout<<0<<endl;
//     }
//     else if(white%2==1 && black%2==1){
//         cout<<-1<<endl;
//     }
//     else{
//         if(white%2==0 && black%2==0){
//             for(int i=0;i<n;i++){
                
//             }
//         }
//     }


//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long a , b;
//         cin>>a>>b;
//         if(a==0 && b==0){
//             cout<<"YES"<<endl'
//         }
//         else if(a==0 || b==0){
//             cout<<"NO"<<endl;
//         }
//         else if((a+b)%3==0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }




// #include<bits/stdc++.h> 
// using namespace std;


// bool power(long long n) {
//         while (n % 3 == 0) {
//             n = n / 3;
//         }

//         if (1 == n) 
//             return true;
        
// return false;
        
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         long long ans = 0;
//         for(int i=n;i<INT_MAX;i++){
//             double p = log10(i) / log10(3);
//             if (p - (int)p == 0) {
//                 ans = i;
//                 break;
//             }
//          double q = log10(i-1) / log10(3);
//           double r = log10(i-3) / log10(3);
//           double s = log10(i-4) / log10(3);
//           if (q - (int)q == 0) {
//                 ans = i;
//                 break;
//             }
//             if (r - (int)r == 0) {
//                 ans = i;
//                 break;
//             }
            
//              if (s - (int)s == 0) {
//                 ans = i;
//                 break;
//             }
             
            
//         }
//         cout<<ans<<endl;
        
//     }
// }


// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
//     long long n , m;
//     cin>>n>>m;
//     string str;
//     cin>>str;
//     for(int i=0;i<m;i++){
//         int a , b;
//         cin>>a>>b;
//         if(a==2){
//             cout<<str[b-1]<<endl;
//         }
//         else {
//             for(int j=0;j<b;j++){
//                 char temp = str[str.length() - 1];
//                 str.pop_back();
//                 str = temp + str;
//             }
//         }
//     }
   
// }


// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
    
//     long long arr[3];
//     cin>>arr[0]>>arr[1]>>arr[2];
//     sort(arr , arr+3);
//     if(arr[2] >(arr[1] + arr[0])){
//         cout<<-1<<endl;
        
//     }
//     else{
//         cout<<arr[2]<<endl;
//     }
    
// }

#include<bits/stdc++.h> 
using namespace std;

int main(){
    long long n ;
    cin>>n;
    string str;
    cin>>str;
    vector<long long > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int zero= 0;
    int one = 0;
    
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
    }
    int m = max(one , zero);
    if(m==n){
        cout<<m<<endl;
    }
    else{
        cout<<m+1<<endl;
    }
    
}

    
    

































