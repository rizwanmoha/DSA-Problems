#include <bits/stdc++.h>
using namespace std;



bool prime(long long m ){
    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
int main() {
int t;
cin>>t;
while(t--){

        long long n , m ;
        cin>>n>>m;
       
            long long start = (n/2) * m;

            
            
            
            long long end = 1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i % 2 == 0) cout << (n / 2 + i / 2) * m + j + 1 << ' ';
                else cout << (i / 2) * m + j + 1 << ' ';
                }
                cout<<endl;
            }

        


}

}