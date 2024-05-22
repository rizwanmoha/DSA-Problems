#include <bits/stdc++.h>
using namespace std;


int main()
{
    int now_i_am_going_to_run;
    cin>>now_i_am_going_to_run;

    while(now_i_am_going_to_run--){
        long long l , r , m ;
        cin>>l>>r>>m;
        long  long temp = r - l;
        bool check = false;
        long long a = 0;
         long long b = 0;
          long long c = 0;
       if(){
         for(long long i = l;i<=r;i++){
            long long tr = i;
            long long start = 2;
            while(tr <= m){
                        if((m- tr) <= temp){
                            a = i;
                            b = tr + l;
                            c = l;
                            check = true;
                            break;
                        }
                         tr = l *start++;
            }
            if(check==true){
                break;
            }
        }
       }
       else{
        
       }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}