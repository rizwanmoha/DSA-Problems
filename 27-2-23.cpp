// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
      long long a , b , c , d;
      cin>>a>>b>>c>>d;
      
      bool check1 = false;
      bool check2 = false;
      long long a1 = -1;
      long long a2 = -1;
      int flag = 0;
      int flag1 = 0;
      long long val = a*b;
       for(int i=b+1;i<= d;i++){
        mp[i] = 1;
      }
      for(int i=a+1;i<=c;i++){
          if(val%i==0){
              long long 
          }
          
      }
     
     
      if(flag==1 && flag1 == 1){
          cout<<a1<<" "<<a2<<endl;
      }
     else{
         cout<<-1<<" "<<-1<<endl;
     }
      
      
      
      
     
     
     
      
   }

    return 0;
}



// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    
//   int ta;
//   cin>>ta;
//   while(ta--){
    
//       int d  =0 ;
//       int z = 0;
//       int hj = 0;
//       int bkask,bbjkfjd = 0;
//       int mbmcvbcm = -1;
       
//       int uekrbrrb = 10;
//       int cbzbc = 100;
       
//       long long na , ma;
//       cin>>na>>ma;
//       vector<long long > va(ma);
     
//       for(int i=0;i<ma;i++){
//           cin>>va[i];
//       }
//       vector<long long > aa(na+ma+1 , 0);
//       vector<long long > ba(na+ma+1, -1);
//       for(int i=1;i<=na;i++){
//           aa[i] = i;
//       }
       
//       int cc = na;
//       for(int i=0;i<ma;i++){
//           if(aa[va[i]]==0 && cc > 0){
//               ba[cc] = i+1;
//               cc--;
//               aa[va[i]] = na+i+1;
//           }
//       }
//       for(int i=1;i<=na;i++){
//           cout<<ba[i]<<" ";
//       }
//       cout<<endl;
//   }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    
//   int t;
//   cin>>t;
//   while(t--){
//       long long na ;
//       cin>>na;
//       vector<long long > a(na);
//      multiset <pair<int , int>> p;
      
     
//      //jgkvuhjcsfe
//      ///hjvuchjerbhfrefljrdej
//     //j,hvsdckvg decbehr
//     //bhkwecjrjwe
//     //.bhkcjbhjefc.re
//     //jhcbedbc hfre
//     //jgkvuhjcsfe
//      ///hjvuchjerbhfrefljrdej
//     //j,hvsdckvg decbehr
//     //bhkwecjrjwe
//     //.bhkcjbhjefc.re
//     //jhcbedbc hfre
//     //jgkvuhjcsfe
//      ///hjvuchjerbhfrefljrdej
//     //j,hvsdckvg decbehr
//     //bhkwecjrjwe
//     //.bhkcjbhjefc.re
//     //jhcbedbc hfre
//     int kvdjchfb = 0;
//     int vbcmbn = 0;
//     int uqywtiyquy = 0;
//     map<int , int > mp;
//     map<int , int > kl;
     
//       for(int j=0;j<na;j++){
//           cin>>a[j];
//           p.insert({a[j] , j+1});
          
          
//       }
//       auto it = p.begin();
//       auto it1 = p.end();
//       it1--;
//       bool check = false;
//       if(it->first==it1->first){
//           check = true;
//       }
//       int f = 0;
//       vector<pair<long long , long long >> an;
//       while(check==false && f==0){
//           auto i = p.begin();
//           auto i1 = p.end();
//           i1--;
         
//           if(i->first==i1->first){
//               check = true;
//               break;
//           }
//           if(i->first==1){
//               f = 1;
//               break;
//           }
//           an.push_back({i1->second , i->second});
//           long long te = i1->first;
//           long long tr = i1->second;
//           long long temp = ceil((double)te/i->first);
//           p.erase(i1);
//           p.insert({temp , tr});
//       }
      
//      if(f==1){
//          cout<<-1<<endl;
//      }
//      else {
//          cout<<an.size()<<endl;
//          for(auto y: an){
//              cout<<y.first<<" "<<y.second<<endl;
//          }
         
//      }
      
//   }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    
  int t;
  cin>>t;
  while(t--){
      long long n ;
      cin>>n;
      string str;
      cin>>str;
      
      
  }
}



























// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long a , b , c , d;
//       cin>>a>>b>>c>>d;
      
//       bool check = false;
//       map<long long , long long> mp;
//       for(long long  i=b+1;i<=d;i++){
//           mp[i]++;
//       }
//       long long val= a*b;
//       long long a1 = -1;
//       long long a2 = -1;
//       for(long long i=a+1;i<=c;i++){
//           long long need = val/__gcd(val , i);
//           long long req = b/need + 1;
//           if(mp[req*need]!=0){
//               a1 = i;
//               a2 = req*need;
//           }
//       }
//       cout<<a1<<" "<<a2<<endl;
     
//   }
 
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// long long merge(long long arr[], int left, int mid, int right) {
//   int i = left, j = mid, k = 0;
//   long long invCount = 0;
//   int temp[(right - left + 1)];
 
//   while ((i < mid) && (j <= right)) {
//     if (arr[i] < arr[j]) {
//       temp[k] = arr[i];
//       ++k;
//       ++i;
//     } else {
//       temp[k] = arr[j];
//       invCount += (mid - i);
//       ++k;
//       ++j;
//     }
//   }
 
//   while (i < mid) {
//     temp[k] = arr[i];
//     ++k;
//     ++i;
//   }
 
//   while (j <= right) {
//     temp[k] = arr[j];
//     ++k;
//     ++j;
//   }
 
//   for (i = left, k = 0; i <= right; i++, k++) {
//     arr[i] = temp[k];
//   }
 
//   return invCount;
// }
// long long mergeSort(long long arr[], int left, int right) {
//   long long invCount = 0;
 
//   if (right > left) {
//     int mid = (right + left) / 2;
//     invCount = mergeSort(arr, left, mid);
//     invCount += mergeSort(arr, mid + 1, right);
//     invCount += merge(arr, left, mid + 1, right);
//   }
//   return invCount;
// }
 
// int main() {
//   int t;
//   cin>>t;
//   while(t--){
//       long long n ;
//       cin>>n;
//       long long  v[n];
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
//       //multimap<long long, long long> mp;
      
//       cout<<mergeSort(v , 0 , n-1)<<endl;
     
     
      
//   }
// }


#include <bits/stdc++.h>
using namespace std;


int main() {
  int t;
  cin>>t;
  while(t--){
      int n ;
      cin>>n;
      string str;
      cin>>str;
      int ans = INT_MAX;
     
      
      for(int i=0;i<n;i++){
    //      long long ca = 0;
    //   long long cb = 0;
    //   long long cc = 0;
        vector<long long > f(3 , 0);
        f[str[i]-'a']++;
      for(int j=i+1;j<min(n , i+7);j++){
          f[str[j]-'a']++;
          if(((j-i)+1) >= 2 && (f[0] > f[1]) && (f[0] > f[2])){
              ans = min(ans  , (j-i)+1);
              break;
          }
      }
          
      }
      if(ans==INT_MAX){
          ans = -1;
      }
      cout<<ans<<endl;
  }
}



