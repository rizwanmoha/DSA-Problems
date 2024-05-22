#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t ;
    cin>>t;
    while(t--){
            int n ;
            cin>>n;
            vector<long long > v(n);
            for(int i=0;i<n;i++){
                cin>>v[i];
            }
            vector<long long > b(n);
            b[0] = 1;
            set<long long > st;
            for(int i=1;i<=n;i++){
                st.insert(i);
            }
            st.erase(1);

            cout<<t<<endl;
            vector<bool> vis(n+1 , false);
            v[1] = true;
            for(int i=1;i<n;i++){
                   long long temp = b[i-1] + v[i-1];
                   long long tr  = (temp - v[i]) ;
                   
                   


            }
            cout<<t<<endl;
           
            for(int i=0;i<n;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;

    }
}