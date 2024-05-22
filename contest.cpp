// #include <bits/stdc++.h>
// using namespace std;


// void s(){
//     long long n ;
//     cin>>n;
//     vector<long long > an(n);
//     vector<long long > bn(n);
   
//     for(int i=0;i<n;i++){
//         cin>>an[i];
       
//     }

//         for(int i=0;i<n;i++){
//         cin>>bn[i];
       
//     }
   
//     bool c = true;
//     for(int i=0;i<n;i++){
//         if((an[i] <= an[n-1] && bn[i] <= bn[n-1]) || (bn[i] <=an[n-1] && an[i] <= bn[n-1]) ){
//             continue;
//         }
//         else{
//             c = false;
//             break;
//         }
//     }
// if(c==true){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }
// }

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//    int ta;
//    cin>>ta;
//    while(ta--){
//     s();
//    }
// }


// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//    int ta;
//    cin>>ta;
//    while(ta--){
//         long long n ;
//         cin>>n;
//         vector<long long > vn[n];
//         for(int i=0;i<n;i++){
//             long long m ;
//             cin>>m;
//             for(int j=0;j<m;j++){
//                 long long temp ;
//                 cin>>temp;
//                 vn[i].push_back(temp);
//             }
//         }


//         bool vis[50000 + 5] = {false};
//         vector<long long > a;
//         for(int i=0;i<n;i++){
//             bool check = false;
//             for(auto x : vn[i]){
//                 if(!check && vis[x]){
//                     check = true;
//                     a.push_back(x);
//                     vis[x] = true;
//                 }
//                 else{
//                     vis[x] = true;
//                 }
//             }
//         }

//         if(a.size()==n){
//             reverse(a.begin() , a.end());
//         for(auto  x: a){
//             cout<<x<<" ";
//         }

//         }
//         else{
//             cout<<"-1";
//         }
//         cout<<endl;
//    }
// }






#include<bits/stdc++.h>
using namespace std;


void s(){
    long long n;	cin >> n;
		vector<long long> arr[n];
		for(long long i=0; i<n; i++){
			long long m;	cin >> m;
			for(long long j=0; j<m; j++){
				long long temp;	cin >> temp;
				arr[i].push_back(temp);
			}
		}
		
		bool vis[50000 + 5]={false};
		vector<long long> another;

		for(long long i=n-1; i>=0; i--){
			bool check=false;
			for(auto x:arr[i]){
				if(!check && !vis[x]){
					check =true;
					another.push_back(x);
					vis[x]=true;
				}
				else vis[x]=true;
			}
		}

		if(another.size() == n){
			reverse(another.begin(), another.end());
			for(auto x:another)	cout << x<< " ";
		}else cout << "-1";
		cout << "\n";
}





int main(){
	    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	long long t; cin >> t;

	while(t--){
		s();
        int a = 0;
        int b = 0;
        int cfg  = 0;
	}
}