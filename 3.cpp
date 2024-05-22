// #include<bits/stdc++.h>
// using namespace std;

// long long rec(long long n , map<long long , long long > &mp){
//     if(n==0){
//         return 1;
//     }

//     if(mp[n]!=0){
//         return mp[n];
//     }



//     return mp[n] = rec(n/2 , mp) + rec(n/3 , mp);
// }



// int main(){

//     long long n ;
//     cin>>n;
//     map<long long , long long > mp;
//     cout<<rec(n , mp)<<endl;

// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     long long n ;
//     cin>>n;
//     vector<long long > v(n , 0);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     long long ans = 0;
//     int f = 0;
//     long long gc = 0;


//     for(int i=0;i<n-1;i++){
//        gc = __gcd(gc , abs(v[i] - v[i+1]));
//     }
//    if(gc==1){
//     cout<<2<<endl;
//    }  
//    else{
//     cout<<1<<endl;
//    }
   

// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int t;
//     cin>>t;

//     vector<long long > step(1001 , INT_MAX);
//     step[1] = 0;
//     for(int i=1;i<=1000;i++){
//         for(int j=i;j>=1;j--){
//             int form = i + i/j;
//             if(form > 1000){
//                 break;

//             }
//             step[form] = min(step[form] , 1 + step[i]);
//         }
//     }
//     while(t--){
//         long long n  , k;
//         cin>>n>>k;
//         vector<long long > b(n , 0);
//         vector<long long > c(n , 0);
//         long long sum = 0;

//         for(int i=0;i<n;i++){
//             cin>>b[i];
//             sum+=b[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>c[i];
//         }
//          vector<long long > a(n, 0);
//          for(int i=0;i<n;i++){
//             a[i] = step[b[i]];
//          }

//          if(k >= sum){
//             long long ans = 0;
//             for(int i=0;i<n;i++){
//                 ans+=c[i];
//             }
//             cout<<ans<<endl;
//             continue;
//          }
        
//        vector<vector<long long >> dp(n+1 , vector<long long>(k+1));
//        for(int i=0;i<=n;i++){
//         for(int j=0;j<=k;j++){
//             if(i==0 || j==0){
//                 dp[i][j] = 0;
//             }
//         }
//        }
//         // for(auto x : a){
//         //     cout<<x<<" ";
//         // }

//         for(int i=1;i<=n;i++){
//             for(int j =0;j<=k;j++){
//                     if(a[i-1] <= j){
//                         dp[i][j] = max(c[i-1] + dp[i-1][j-a[i-1]] , dp[i-1][j]  );
                       

//                     }
//                     else{
//                         dp[i][j] = dp[i-1][j];
//                     }
//             }
//         }

//         cout<<dp[n][k]<<endl;


//     }

// }



// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//         long long n ;
//         cin>>n;
//         vector<long long > v(n , 0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         vector<long long > gcd1(n , 0);
//         gcd1[n-1] = v[n-1];
//         for(int i=n-2;i>=0;i--){
//                 gcd1[i] = __gcd(gcd1[i+1] , v[i]);
//         }

          

//         vector<long long>  temp(n , 0);
//         for(int i=0;i<n-1;i++){
//             temp[i] = (v[i] * gcd1[i+1]) / gcd1[i] ;
//         }
//         long long ans = temp[0];
//         for(int i=1;i<n-1;i++){
//             ans = __gcd(ans , temp[i]);
//         }
//         cout<<ans<<endl;

// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         vector<long long > v(n , 0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         bool check = false;
//         int cnt = 0;
//         for(int i=0;i<n;i++){
//                 if(v[i]==i){
//                     check = true;
//                     break;
//                 }
//                 else if(cnt >= (v[i] -1)){
//                     check = true;
//                     break;
//                 }
//                 cnt++;
//         }

//     if(check==true){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }


//     }
// }

// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         if(n%2==0){
//             cout<<"-1"<<endl;
//             continue;
//         }
//         long long val = 3;
//         vector<long long > ans;
//         ans.push_back(2);
//         while(val !=n){
//             long long temp = n - val;
//             if(temp%(val+1)==0){
//                 ans.push_back(2);
//                 val = 2 * val  + 1;
//             }
//             else{
//                 ans.push_back(1);
//                 val = 2 * val - 1;
//             }
//         }
//         cout<<ans.size()<<endl;
//         for(auto x : ans){
//             cout<<x<<" ";
//         }
//         cout<<endl;

//     }
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t;
//     cin>>t;
//     while(t--){
//         long long n , c , d;
//         cin>>n>>c>>d;
//         vector<long long >  v;
//         unordered_set<long long > st;
//         long long tr = 0;
//         for(int i=0;i<n;i++){
//             long long a ;
//             cin>>a;
//             if(st.find(a)==st.end()){
//                 st.insert(a);
//                 v.push_back(a);
//             }
//             else{
//                 tr+=c;
//             }
//         }
//         sort(v.begin() , v.end());
//         long long ans = 100000000000000000;
//         // vector<long long > ans;
//         long long temp = 0;
//         long long m = v.size();
//         for(int i=m-1;i >= 0;i--){
//                 long long ri = ((m - i) - 1) * c;
//                 long long le = ((v[i] - i) - 1) * d;
//                 ans = min(ans ,tr +  ri + le);

//         }
//         ans = min(ans , c*n + d);


//         cout<<ans <<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t;
//     cin>>t;
//     while(t--){
//             long long n ;
//             cin>>n;
//             long long ans = 0;
//             long long mod = 1000000007;
//             long long lcm = 1;
//             for(long long i=2;;i++){
//                 long long b = n/lcm;
//                 lcm = (lcm * i)/__gcd(lcm , i);
//                 long long a = n / lcm;
//                 ans+=(b - a)*i;
//                 ans%=mod;
//                 if(lcm > n){
//                     break;
//                 }
//             }

//             cout<<ans<<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     long long n , x;
//     cin>>n>>x;

//         vector<long long > v(n);
//         map<long long , long long > mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]]++;
//         }
//         bool check = false;
        
//         for(int i=0;i<n;i++){
//                 long long temp = v[i] + x;
//                 if(mp[temp]!=0){
//                     check = true;
//                     break;
//                 }
//         }

//         if(check==true){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }


// }


// #include<bits/stdc++.h>
// using namespace std;



// #define INF (long long)2e+18
// int main() {
// 	long long n,m,x,ans=INF;
// 	cin>>n>>m;
// 	for(long long i=1;i<=n;i++){
// 		x=(m+i-1)/i;
// 		if(x<=n)ans=min(ans,i*x);
// 		if(i>x)break;
// 	}
// 	if(ans==INF)cout<<-1<<endl;
// 	else cout<<ans<<endl;
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// string helper(string str , long long k ){
// 	int n = str.size();
// 	string ans = "";
// 	while(ans.length() < k){
// 		ans+=str;
// 	}
// 	while(ans.length() > k){
// 		ans.pop_back();
// 	}
// 	return ans;
// }


// int main(){

// 	long long n , k;
// 	cin>>n>>k;
// 	string str;
// 	cin>>str;
// 	vector<string> ans;
// 	for(int i=0;i<n;i++){
// 		ans.push_back(str.substr(0 , i+1));
// 	}
// 	for(int i=0;i<n;i++){
// 		ans[i] = helper(ans[i] ,k);
// 	}
// 	sort(ans.begin() , ans.end());
// 	cout<<ans[0]<<endl;


// }



#include<bits/stdc++.h>
using namespace std;



int main(){

	long long n ;
	cin>>n;
	vector<pair<long long , long long >> pa;
	for(int i=0;i<n;i++){
		long long a , b;
		cin>>a>>b;
		pa.push_back({b , a});
	}

	int flag = 0;
	long long end = n -1;
	int start =  0;
	long long sum = 0;
	long long ans = 0;
	while(end >= start){
			if(sum > pa[start].first){
					sum+=pa[start].second;
					ans+=(pa[start].second);
					start++;

			}
			else if((sum + pa[end].second) >= pa[start].first){
						long long temp = pa[end].first  - sum;
						long long temp2 = 
			}
	}



}
