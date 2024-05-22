#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b , c , m;
        cin>>a>>b>>c>>m;
        vector<long long > v(3 , 0);
        v[0] = a;
        v[1] = b;
        v[2] = c;


        long long temp = a/2;
    temp+=b/2;
    temp+=c/2;
    if(m > temp){
        cout<<"NO"<<endl;
    }
    else{
            sort(v.begin() , v.end());
            for
    }
        // long long another = 0;
        // vector<long long > v(3 , 0);
        // if(temp >  m){
        //     a = a- (m *2);
        //     v[0] = a;
        // }

    }
}