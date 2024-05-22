// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//  int t;
//  cin>>t;
//  while(t--){
//      int n ;
//      char k;
//      cin>>n>>k;
//      string str ;
//      cin>>str;
//      int s = k - '0';
//      string ans = "";
//      int ind = -1;
//      for(int i=0;i<n;i++){
//         int temp = str[i] - '0';
//         if(s > temp){
//             ans+=k;
//             ind = i;
//             break;

//         }
//         else{
//             ans+=str[i];
//         }
//      }
//      if(ind!=-1){
//         for(int i=ind;i<n;i++){
//             ans+=str[i];
//         }

//      }
//      else{
//         ans+=k;
//      }
//      cout<<ans<<endl;


//  }
// }


// #include <bits/stdc++.h>
// using namespace std;

// void sol(){
//      int number ;
//     cin>>number;
//     number--;
//     vector<long long >  forthearr(number , 0);
//     for(int i=0;i<number;i++){
//         cin>>forthearr[i];
//     }
//     vector<long long > nowthearrb(number+1, 0);
//     nowthearrb[0] = forthearr[0];
//     int flip = 0;
//     nowthearrb[number] = forthearr[number-1];
//     for(long long i = 0;i<number-1;i++){
//         nowthearrb[i+1] = min(forthearr[i] , forthearr[i+1]);
//     }
//     for(int i=0;i<number+1;i++){
//         cout<<nowthearrb[i]<<" ";
//     }
    
//     cout<<endl;

// }

// int main() {
//  int taaa;
//  cin>>taaa;
//  while(taaa--){
//     sol();
//  }
// }


// #include <bits/stdc++.h>
// using namespace std;
// long long helper(long long absicca , long long ordinate , long long number){
//     absicca--;
//     ordinate--;
//     absicca = min(absicca , number - absicca - 1);
//     ordinate = min(ordinate , number - ordinate - 1);
//     return min(absicca , ordinate);
// }


// int main() {
//  int taaa;
//  cin>>taaa;
//  while(taaa--){
//    long long number , xeroes1 , absiccazeroes1 , xeroes2 , absiccaordinate2;
//    cin>>number>>xeroes1>>absiccazeroes1>>xeroes2>>absiccaordinate2;
//    long long temp = abs(helper(xeroes1 ,absiccazeroes1, number) - helper(xeroes2 , absiccaordinate2 , number));
//    cout<<temp<<endl;
//  }
// }


#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstring>
#include <time.h>
#include <chrono>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;
#define gc getchar_unlocked
#define endl "\n"
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n; k++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff second
#define ss first
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, arr) for (auto it = arr.begin(); it != arr.end(); it++)
#define PI 3.1415926535897932384626
#define suprit                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const double pi = 3.141592653589793238;
const ll mod = 1e9 + 7;
bool comp2(pair<ll, ll> &arr, pair<ll, ll> &b)
{
    if (arr.first == b.first)
        return arr.second < b.second;
    return arr.first < b.first;
};

template <typename T>
void read(T i, T n, vector<T> &arr)
{
    for (T j = i; j < n; j++)
        cin >> arr[j];
}

ll countNumbersWith4(ll n)
{
   if (n < 4)
      return 0;
 
   ll d = log10(n);

   ll *a = new ll[d+1];
   a[0] = 0, a[1] = 1;
   for (ll i=2; i<=d; i++)
      a[i] = a[i-1]*9 + ceil(pow(10,i-1));
 
   ll p = ceil(pow(10, d));
 
   ll msd = n/p;

   if (msd == 4)
      return (msd)*a[d] + (n%p) + 1;
 
   if (msd > 4)
      return (msd-1)*a[d] + p + countNumbersWith4(n%p);

   return (msd)*a[d] + countNumbersWith4(n%p);
}

void solve()
{
    ll n;
    cin>>n;
    ll ans = 0;
    ll prev = 0;
    ll temp = n;
    ll x = countNumbersWith4(n);
    while((x-prev)!=0) {
        // deb(x);
        temp = n + x;
        prev = x;
        x = countNumbersWith4(temp);
    }
    cout<<temp<<endl;
    
}

int main()
{
    suprit;
    clock_t start = clock();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    // cout << setprecision(10) << elapsed << endl;
    return 0;
}