// #include <bits/stdc++.h>
// using namespace std;
// void solve(){
//       long long number , coefficient_of_y;
//         cin>>number>>coefficient_of_y;
//         if(number%2==0 || (number-coefficient_of_y)%2==0 || number%coefficient_of_y==0){
//             cout<<"YES"<<endl;
//         }
        
//         else{
//             cout<<"NO"<<endl;
//         }
// }

// int main()
// {
//     int now_i_am_going_to_run;
//     cin>>now_i_am_going_to_run;

//     while(now_i_am_going_to_run--)
//     {
//         solve();
      
//     }
// }

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int now_i_am_going_to_run;
    cin>>now_i_am_going_to_run;

    while(now_i_am_going_to_run--){
        long long a , b;
        cin>>a>>b;
        long long gcd = __gcd(a , b);
        long long temp = min(a , b) - gcd;
        long long ans=temp;
        if(a%2==1 && b%2==1){
            cout<<a+b<<endl;
        }
        else if(a%2==0 && b%2==0){
                ans = 0;
                ans+=temp;
                long long temp2 = a/temp;
                ans+=temp2 ;
                long long temp3 = b/temp;
                ans+=temp3;
                cout<<ans<<endl;
        }
        else if(a%2==0 && b%2==1){
            ans = 0;
            ans+=b;
            

        }
        else{
            ans = 0;
            ans+=a;

        }


    }
}
