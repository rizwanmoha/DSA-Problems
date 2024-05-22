// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> v(n);
        map<int , vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        for(auto x : mp){
            vector<int> temp = x.second;
            int m = temp.size();
            for(int i=0;i<m;i++){
                if(temp[i]==0){
                    
                }
            }
        }
    }

    return 0;
}
