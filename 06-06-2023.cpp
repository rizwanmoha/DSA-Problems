#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    long long n , k ;
    cin>>n>>k;
    string s;
    cin>>s;
    int ind = -1;
    for(int i=n-1;i >= 0 ;i--){
      
        if(s[i]=='1'){
            ind = i;
            break;
        }
    }
    if(ind!=-1){
        int temp = (n-1) - ind;
        if(k >= temp){
            s[ind] =  '0';
            s[n-1] = '1';
            k-=temp;
        }
    }
    ind = -1;
    for(int i=0;i<n-1;i++){
         if(s[i]=='1'){
            ind = i;
            break;
        }
    }

    if(ind!=-1){
        int temp = ind;
        if(k >= temp){
            s[0] =  '0';
            s[ind] = '1';
            k-=temp;
        }
    }


   
      
    long long sum = 0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='1'){
            sum+=11;
        }
        else if(s[i]=='1' && s[i+1]=='0'){
            sum+=10;
        }
        else if(s[i]=='0' && s[i+1]=='1'){
            sum+=1;
        }
        else{
            sum+=0;
        }
    }
    cout<<sum<<endl;
}
}