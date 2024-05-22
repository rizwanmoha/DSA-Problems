// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       long long sum = 0;
//       long long m = INT_MIN;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           sum+=v[i];
//           m = max(v[i] , m);
//       }
//       long long temp = ceil((double)sum / (n-1));
//       long long ans = temp * (n-1);
//       if(m > temp){
//           ans = m * (n-1);
//       }
//       cout<<ans-sum<<endl;
      
//   }
  

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      long long  n , k ;
      cin>>n>>k;
      string a , b;
      cin>>a>>b;
      
      bool check = true;
       
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      
  }
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long  n , k ;
//       cin>>n>>k;
//       string a , b;
//       cin>>a>>b;
     
//       bool check = true;
//       vector<int> va(26 , 0);
//       vector<int> vb(26 , 0);
      
//         for(int i=0;i<n;i++){
//             va[a[i]-'a']++;
//             vb[b[i]-'a']++;
//         }
//         for(int i=0;i<25;i++){
//             if(va[i] < vb[i]){
//               check = false;
//              //  break;
//             }
//             else{
//             int d = va[i] - vb[i];
//             if(d%k!=0){
//                 check = false;
//               // break;
//             }
//             else{
//                 va[i+1]+=d;
//             }
            
//             }
            
//         }
//         if(check==true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
      
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       vector<long long > v(n);
//           vector<long long > t(n);
//           vector<pair<long long , long long >> pa;
          
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       for(int i=0;i<n;i++){
//           cin>>t[i];
//           pa.push_back({v[i] , t[i]});
//       }
//       sort(pa.begin() , pa.end() );
//       reverse(pa.begin() , pa.end());
//       long long ans = pa[0].first;
//       vector<long long > pre(n , 0);
//       pre[0] = pa[0].second;
//       long long ti = 0;
//       for(int i=1;i<n;i++){
//           pre[i] = pre[i-1] + pa[i].second;
//       }
//       for(int i=0;i<n-1;i++){
//           ans = min(ans , max(pre[i] , pa[i+1].first));
//       }
//       ans = min(ans , pre[n-1]);
//       cout<<ans<<endl;
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n , c ;
//       cin>>n>>c;
//       vector<long long > v(n);
//       vector<pair<long long , long long>> pa;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           pa.push_back({v[i] , i+1});
          
//       }
//       sort(pa.begin() , pa.end());
//       long long k = ceil((double)c/2);
//       vector<long long > ans;
//       long long sum = 0;
//       for(int i=0;i<n;i++){
//       long long upper = c - sum;
//       long long lower = k - sum;
//       int ind = - 1;
//       int low = i;
//       int end = n-1;
//       while(end >= low){
//           int mid = (low + end)/2;
//           if(pa[mid].first >= lower && pa[mid].first <= upper){
//               ind = mid;
//               break;
               
//           }
//           else if(pa[mid].first < lower){
//               low = mid + 1;
//           }
//           else if(pa[mid].first > upper){
//               end = mid - 1;
               
//           }
           
//       }
//       if(ind!=-1){
//           for(int j=0;j<i;j++){
//               ans.push_back(pa[j].second);
//           }
//           ans.push_back(pa[ind].second);
//           break;
//       }
//       sum+=pa[i].first;
//       }
//       if(ans.size()==0){
//           cout<<-1<<endl;
//       }
//       else{
//           cout<<ans.size()<<endl;
//           for(int i=0;i<ans.size();i++){
//               cout<<ans[i]<<" ";
//           }
//           cout<<endl;
//       }
//   }
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      long long n ;
      cin>>n;
      vector<int > v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      int ans = 0;
      int flip = 0;
      for(int i=0;i<n;i++){
          if(flip==0){
              if(v[i]!=0){
                  ans++;
              }
              if((i+1) < n && v[i+1]==0 ){
                  i++;
              }
              flip=1;
              
          }
          else{
              if((i+1) < n && v[i+1]==1){
                  i++;
              }
              flip= 0;
          }
      }
      cout<<ans<<endl;
  }
}


// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
// void fac(long long n , int *count , vector<long long > &v){
//     long long k = n;
//      for (int i=2; i<=sqrt(n); i++)
//     {
//         if (k %i == 0)
//         {
//             // If divisors are equal, print only one
//             if (k/i == i){
//                 v.push_back(i);
//                 k = k/i;
//             }
  
//             else {
//                 long long temp = n/i;
//                 k = k/i;
//                 k = k/temp;
//                 v.push_back(i);
//                 v.push_back(n/i);
//             }
//         }
//     }
   
// }

// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       if(n%2==1){
//           if(n==1){
//               cout<<"FastestFinger"<<endl;
//           }
//           else{
//               cout<<"Ashishgup"<<endl;
//           }
//       }
//       else{
//           int count = 0;
//           long long mul = 1;
//           vector<long long > v;
          
//           fac(n, &count  , v);
//           for(int i=0;i<v.size();i++){
//               if(v[i]%2==1){
//                   mul = mul * v[i];
//               }
//           }
//           long long temp = n /mul;
//           float i = log2(n);
//           count++;
//           if(temp==2){
//               count++;
//           }
//           else{
//               count+=2;
//           }
          
//           //cout<<mul<<" "<<count<<endl;
//           if(n==2){
//               cout<<"Ashishgup"<<endl;
//           }
//           else if (ceil(i) == floor(i)) {
//             cout <<"FastestFinger"<<endl;
//              }
//           else if(count%2==0){
//               cout<<"FastestFinger"<<endl;
//           }
//           else{
//               cout<<"Ashishgup"<<endl;
//           }
          
          
          
          
//       }
//   }
  
   

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
        long long  n ;
        cin>>n;
        vector<long long > va(n);
        vector<long long > vb(n);
        map<long long , long long > mpa;
         map<long long , long long > mpb;
        
        for(int i=0;i<n;i++){
            cin>>va[i];
            mp[va[i]] = i;        }
         for(int i=0;i<n;i++){
            cin>>vb[i];
            mp[vb[i]] = i;
        }
        map<long long , long long > mpl;
        map<long long , long long > mpr;
        
        for(int i=0;i<n;i++){
            long long temp = mpa[v[i]];
            temp = abs(i - temp);
            temp = min(temp , (n-temp));
            mpl[temp]++;
        }
        
        long long an1 = INT_MIN;
        for(auto x: mpl){
            an1 = max(an1 , x.second);
        }
        
        
        
}
        

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long > v(n);
    long long sum = 0;
    long long ans = 0;
    priority_queue<int, vector<int>, greater<int> > q;
    for(int i=0;i<n;i++){
        cin>>v[i];
        
        q.push(v[i]);
        sum+=v[i];
        if((sum) >= 0){
            ans++;
            
        }
        else{
            long long temp = q.top();
            q.pop();
            sum-=temp;
            
        }
        
        
    }
   cout<<ans<<endl;
    

    return 0;
}
 #include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n ;
    cin>>n;
    vector<long long > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans= 0;
   unordered_set<long long > s;
   long long sum = 0;
   s.insert(0);
   for(int i=0;i<n;i++){
       sum+=v[i];
       if(s.find(sum)!=s.end()){
           ans++;
           s.clear();
           s.insert(0);
           s.insert(v[i]);
           sum = v[i];
       }
       else{
           s.insert(sum);
       }
   }
   
        
    
    cout<<ans<<endl;
}

















