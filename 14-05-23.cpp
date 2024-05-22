#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<pair<long long , long long>> pa;
        for(int i=0;i<n;i++){
                long long count = 0;
            for(int j =0;j<v[i].length();j++){
                if(v[i][j]=='a'){
                    count++;
                }
            }
            long long temp = v[i].length() - count ;

            pa.push_back({count  , temp});
        }
        long long ans = 0;
        sort(pa.begin() , pa.end());
        reverse(pa.begin() , pa.end());
        long long extra = 0;
        long long c = 0;
        for(int  i = 0;i<n;i++){
            long long temp = pa[i].first - pa[i].second; 
            if(pa[i].first > pa[i].second ){
                c++;
                ans = max(c , ans);
                extra+=(pa[i].first - pa[i].second);
            }
            else if((extra + temp) > 0){
                c++;
                ans = max(c , ans);
                extra+=temp;
            }
            else{
                break;
            }
        }

        pa.clear();
          for(int i=0;i<n;i++){
                long long count = 0;
            for(int j =0;j<v[i].length();j++){
                if(v[i][j]=='b'){
                    count++;
                }
            }
            long long temp = v[i].length() - count ;

            pa.push_back({count  , temp});
        }
     
        sort(pa.begin() , pa.end());
        reverse(pa.begin() , pa.end());
         extra = 0;
         c = 0;
        for(int  i = 0;i<n;i++){
            long long temp = pa[i].first - pa[i].second; 
            if(pa[i].first > pa[i].second){
                c++;
                ans = max(c , ans);
                extra+=(pa[i].first - pa[i].second);
            }
            else if((extra + temp) > 0){
                c++;
                ans = max(c , ans);
                extra+=temp;
            }
            else{
                break;
            }
        }



         pa.clear();
           for(int i=0;i<n;i++){
                long long count = 0;
            for(int j =0;j<v[i].length();j++){
                if(v[i][j]=='c'){
                    count++;
                }
            }
            long long temp = v[i].length() - count ;

            pa.push_back({count  , temp});
        }
        
        sort(pa.begin() , pa.end());
        reverse(pa.begin() , pa.end());
         extra = 0;
         c = 0;
        for(int  i = 0;i<n;i++){
            long long temp = pa[i].first - pa[i].second; 
            if(pa[i].first > pa[i].second){
                c++;
                ans = max(c , ans);
                extra+=(pa[i].first - pa[i].second);
            }
            else if((extra + temp) > 0){
                c++;
                ans = max(c , ans);
                extra+=temp;
            }
            else{
                break;
            }
        }



         pa.clear();
           for(int i=0;i<n;i++){
                long long count = 0;
            for(int j =0;j<v[i].length();j++){
                if(v[i][j]=='d'){
                    count++;
                }
            }
            long long temp = v[i].length() - count ;

            pa.push_back({count  , temp});
        }
        
        sort(pa.begin() , pa.end());
        reverse(pa.begin() , pa.end());
         extra = 0;
         c = 0;
        for(int  i = 0;i<n;i++){
            long long temp = pa[i].first - pa[i].second; 
            if(pa[i].first > pa[i].second){
                c++;
                ans = max(c , ans);
                extra+=(pa[i].first - pa[i].second);
            }
            else if((extra + temp) > 0){
                c++;
               
                ans = max(c , ans);
                extra+=temp;
            }
            else{
                break;
            }
        }

         pa.clear();
          for(int i=0;i<n;i++){
                long long count = 0;
            for(int j =0;j<v[i].length();j++){
                if(v[i][j]=='e'){
                    count++;
                }
            }
            long long temp = v[i].length() - count ;

            pa.push_back({count  , temp});
        }
        
        sort(pa.begin() , pa.end());
        reverse(pa.begin() , pa.end());
         extra = 0;
         c = 0;
        for(int  i = 0;i<n;i++){
            long long temp = pa[i].first - pa[i].second; 
            if(pa[i].first > pa[i].second){
                c++;
                ans = max(c , ans);
                extra+=(pa[i].first - pa[i].second);
            }
            else if((extra + temp) > 0){
                c++;
                ans = max(c , ans);
                extra+=temp;
            }
            else{
                break;
            }
        }



        cout<<ans<<endl;



    }
}