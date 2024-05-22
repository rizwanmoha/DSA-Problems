// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       long long  n ;
       cin>>n;
       vector<long long> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
           
           
       }
       long long ans = 0;
       for(int i=n-1;i>=0;i--){
           int ind = i-1;
           while(ind >= 0 && v[ind] <= v[i]){
               ind--;
           }
           if(ind >=0){
               ans+=(v[ind] - v[i]);
           }
       }
       cout<<ans<<endl;
       
    }
    

    return 0;
}

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       long long  n ;
       cin>>n;
       vector<long long> a(n);
       for(int i=0;i<n;i++){
           cin>>a[i];
           
           
       }
      int j = n-1;
      while(j-1 >= 0 && a[j] <= a[j-1]){
          j--;
      }
      while(j-1 >=0 && a[j] >= a[j-1]){
          j--;
      }
      cout<<j<<endl;
       
    }
    

    return 0;
}




#include <iostream>
#include <queue>
#include <map>
#include <set>
using namespace std;
int main() {


int n;
	cin >> n;
	map<int, vector<int>> graph;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	queue<int> que;
	que.push(1);
	set<int> S;
	S.insert(1);
	while (!que.empty()) {
		int v = que.front(); que.pop();
		for (int i : graph[v]) {
			if (!S.count(i)) {
				que.push(i);
				S.insert(i);
			}
		}
	}
	//*S.rbegin()
	int ans = 1;
	for(auto x : S){
	    ans = max(ans  , x);
	}
	cout << ans << '\n';
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int ta;
//     cin>>ta;
//       //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
//     while(ta--){
//         int n ;
//         cin>>n;
        
//         //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
        
//          //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
//          //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
//          //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
//          //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
//         vector<int> a(n);
//         int odd = 0;
//         int even = 0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             if(a[i]%2==0){
//                 even++;
//             }
//             else{
//                 odd++;
//             }
//         }
//         if(odd >= 3 || (odd >=1 && even >=2)){
//             cout<<"YES"<<endl;
//             vector<int> ans;
            
//             if(odd >= 3){
//                 for(int i=0;i<n;i++){
//                     if(a[i]%2==1){
//                         ans.push_back(i+1);
//                     }
//                 }
//                 for(int i=0;i<3;i++){
//                     cout<<ans[i]<<" ";
//                 }
//                 cout<<endl;
//                   //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg
//             }
//             else{
//                 int o = 1;
//                 int e = 2;
//                 for(int i=0;i<n;i++){
//                     if(a[i]%2==1 && o > 0){
//                         ans.push_back(i+1);
//                         o--;
//                     }
//                     if(a[i]%2==0 && e > 0){
//                         ans.push_back(i+1);
//                         e--;
//                     }
                    
//                 }
//                  for(int i=0;i<3;i++){
//                     cout<<ans[i]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//       //blvefjvocteurhlyegr
//         //vckhucvrkyfvqwelu
//         //gcwhvfqeytbewqguto
//         //kugewbcfqktifeqvuy
//         //ugkcbwkeftucewqvieg

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int ta;
//     cin>>ta;
//      //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
//     while(ta--){
//         int na ;
//         cin>>na;
//         long long sum = 0;
//         vector<long long > v(na);
//         for(int i=0;i<na;i++){
//             cin>>v[i];
//             sum+=v[i];
//              //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
//         }
//       for(int i=1;i<na;i++){
//           v[i]+=v[i-1];
//       }
//       long long ans = 1;
//         //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
       
//       for(int i=0;i<na-1;i++){
//           long long temp = sum - v[i];
//           long long temp2 = __gcd(v[i] , temp);
//           ans = max(ans , temp2);
//       }
//         cout<<ans<<endl;
//          //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;
 //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg

int main() {
     //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
    int ta;
    cin>>ta;
    while(ta--){
        int n , m;
        cin>>n>>m;
        vector<int> v(n);
        map<int , int> mp;
         //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<int> va(m);
        for(int i=0;i<m;i++){
            cin>>va[i];
        }
        sort(va.begin() , va.end() , greater<int>());
        // vector<int> an;
        priority_queue<int> p;
        for(auto x : mp){
            p.push(x.second);
        }
        long long ans = 0;
        
        int j = 0;
        while(!p.empty() && j < m){
            int temp = min(p.top() , va[j]);
            int temp2 = p.top();
            j++;
            ans = ans + temp;
            p.pop();
            int temp3 = temp2 - temp;
            if(temp3 > 0){
                p.push(temp3);
            }
        }
        cout<<ans<<endl;
              //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
      //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
      //blvefjvocteurhlyegr
// //         //vckhucvrkyfvqwelu
// //         //gcwhvfqeytbewqguto
// //         //kugewbcfqktifeqvuy
// //         //ugkcbwkeftucewqvieg
        
        
    }
    
}




// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long helper(long long n , map<long long , long long>&mp){
   
    if(mp[n]!=0){
        return mp[n];
    }
    return mp[n] = helper(n/2 , mp) + helper(n/3 , mp);
}

int main() {
    
        long long n ;
        cin>>n;
        map<long long , long long> mp;
        mp[0] = 1;
        mp[1] = 2;
        cout<<helper(n , mp)<<endl;
    

    return 0;
}























