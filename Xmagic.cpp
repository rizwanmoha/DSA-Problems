#include <bits/stdc++.h>
using namespace std;

bool check(long long a , long long b  , long long x){
    if(a==x || b==x){
        return true;
    }
    else if(a==0 || b==0){
        return false;
    }
    else{
        if((a-x) > 0 && (a-x)%b==0){
            return true;
        }
        else{
            check(b , a%b , x);
        }
    }
   
}



int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
   int t;
   cin>>t;
   while(t--){
        long long a , b , x;
        cin>>a>>b>>x;
        if(a < b){
            swap(a , b);
        }

        if(check(a , b, x)==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
}