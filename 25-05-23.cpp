// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//         long long x , k;
//         cin>>x>>k;
//         if(x%k==0){
//             cout<<2<<endl;
//             cout<<x-1<<" "<<1<<endl;
//         }
//         else{
//             cout<<1<<endl;
//             cout<<x<<endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void sol(){
//       int n ;
//         cin>>n;
//         string searching;
//         cin>>searching;
//        int counting = 1;
//        int findingmax = 1;
//        for(int i=1;i<n;i++){
//         if(searching[i]==searching[i-1]){
//             counting++;
//         }
//         else{
//             findingmax = max(findingmax , counting);
//             counting = 1;
//         }
//        }
//        findingmax = max(findingmax , counting);
//        cout<<findingmax+1<<endl;
// }

// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--){
//       sol();
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void sol(){
     string mainstring;
        cin>>mainstring;
        bool check = false;
        int abc = 0;
        int n = mainstring.length();
        char variablechecking = '0';
        for(int i=0;i<n;i++){
            if(mainstring[i]=='?'){
                    mainstring[i] = variablechecking;
            }
            else{
                variablechecking = mainstring[i];
            }
        }
        int kgf = 0;
        cout<<mainstring<<endl;
}

int main()
{
    int t ;
    cin>>t;
    while(t--){
       sol();
    }
}