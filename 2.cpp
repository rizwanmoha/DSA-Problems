// #include <bits/stdc++.h>
// using namespace std;

// void sol(){
//      long long l , r;
//         cin>>l>>r;
//         // r = r - 10;
//         // r = max(r , l);
//         long long ans =  -1;
//         long long ans2 = 0;


        
//         for(int i=max(l , r-100);i<=r;i++){
//             long long temporary = i;
//             string strwhich = to_string(temporary);
//             vector<int> arr;
//             for(int j=0;j<strwhich.length();j++){
//                 arr.push_back(strwhich[j]-'0');
//                 // cout<<str[j]-'0'<<" ";

//             }
//             sort(arr.begin() , arr.end());
//             long long temp2 = arr[arr.size() - 1] - arr[0];
//             if(temp2 >= ans){
//                 ans = temp2;
//                 ans2 = temporary;
//             }

//         }       
//         cout<<ans2<<endl;

// }



// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        sol();
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;



// void sol(){
//       long long nam , mam ;
//             cin>>nam>>mam;
//             vector<vector<long long >> vam(nam , vector<long long > (mam , 0));
//             for(int i=0;i<nam;i++){
//                 for(int j=0;j<mam;j++){
//                     cin>>vam[i][j];
//                 }
//             } 
//             long long answe = 0;


//             int j = 0;
//             for(int i=0;i<mam;i++){
                
//                 vector<long long > arr(nam , 0);
//                 for(int k =0;k<nam;k++){
//                     arr[k] = vam[k][i];
//                 }

//                 sort(arr.begin() , arr.end());
//                 vector<long long > prefixes = arr;
//                 for(int k = 1;k<nam;k++){
//                     prefixes[k] = prefixes[k-1] + arr[k];
//                 }
//                 for(int k=0;k<nam-1;k++){
//                     answe+=((prefixes[nam-1] - prefixes[k]) - (arr[k] *(nam-k-1)));
//                 }









//             }
//             cout<<answe<<endl;
// }

// int main(){
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int t;
//     cin>>t;
//     while(t--){
//           sol();
//     }
// }



// #include <bits/stdc++.h>
// #include <iomanip>
// using namespace std;

// int main(){
//     long long n ;
//     cin>>n;
//     vector<float> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin() , v.end());
//     float mi = (v[n-1]  + v[n-2] + v[n-3])/ (v[n-1] * v[n-2] *v[n-3]);


//     float ma = (v[0] + v[1] + v[2])/(v[0]*v[1]*v[2]);

//     // printf("%15f \n" , mi);
//     //  printf("%15f \n" , ma);
//    cout<<setprecision(15)<<mi<<endl;
//    cout<<setprecision(15)<< ma<<endl;




// }

// #include <bits/stdc++.h>

// using namespace std;

// bool check(int i , string s , string t){
//     bool flag = true;
//     int j = 0;
//     for(int k = i;k<s.length();k++){
//         if(s[k]!=t[j]){
//             flag = false;
//             break;
//         }
//         j++;
//     }
//     return flag ;
// }

// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     long long n ;
//     cin>>n;
//     string s , t;
//     cin>>s>>t;
//     int ans = -1;
//     for(int i=0;i<n;i++){
//         if(check(i , s , t)==true){
//             ans = i;
//             break;
//         }
//     }
//     cout<<ans<<endl;

// }


// #include <bits/stdc++.h>

// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         vector<long long > a(n , 0);
//         vector<long long > b(n , 0);
//         map<long long  , long long > mp1;
//         map<long long  , long long > mp2;
        
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             mp1[a[i]]++;
//         }

//         for(int i=0;i<n;i++){
//             cin>>b[i];
//             mp2[b[i]]++;
//         }

//         bool check = true;
//         for(auto x : mp2){
//             if(mp1[x.first]==0){
//                 check = false;
//             }
//         }

//         if(check==true){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }

//     }

// }

#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        vector<long long >  v(n , 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n%2==0){
            vector<long long > b(n , 0);
            for(int i=0;i<n-1;i+=2){
                // if((v[i] > 0 && v[i+1] > 0) || (v[i] < 0 && v[i+1] < 0) ){
                        b[i] = -1 * v[i+1];
                        b[i+1] = v[i];
                // }
                // else{
                //     b[i] =  v[i+1];
                //         b[i+1] = v[i];
                // }
            }
            for(auto x : b){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else{

            vector<long long > b(n , 0);
            b[2] = -1 * v[2];
            long long temp = v[0] + v[1];
            long long temp2 = b[2] * v[2];
                temp2 = -1 * temp2;



            if(temp==0){
                temp = 2 * v[0];
                
            }
            else if(temp2%temp==0){
                b[0] =  (temp2/temp);
                b[1] =  (temp2/temp);
            }
            else{
                b[2] = (-1 * v[2] * temp);
                long long temp3 = (b[2]*v[2])/temp;
                temp3 = -1 * temp3;

                b[1] = temp3;
                b[0] =  temp3;

            }
 



            
            for(int i=3;i<n-1;i+=2){
                //  if((v[i] > 0 && v[i+1] > 0) || (v[i] < 0 && v[i+1] < 0) ){
                        b[i] = -1 * v[i+1];
                        b[i+1] = v[i];
                // }
                // else{
                //     b[i] =  v[i+1];
                //         b[i+1] = v[i];
                // }
            }
             for(auto x : b){
                cout<<x<<" ";
            }
            cout<<endl;
        }

    }
}










