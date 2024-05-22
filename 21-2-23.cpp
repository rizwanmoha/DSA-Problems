// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//   int t;
//   cin>>t;
//   while(t--){
//       int n ;
//       cin>>n;
//       vector<long long > v(n);
//       map<long long  , long long > mp;
//       long long sum = 0;
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//           mp[v[i]]++;
//           sum+=v[i];
//       }
//       priority_queue<long long > q;
//       q.push(sum);

//       bool check = true;
//       while(!q.empty() && check==true){
//           long long temp = q.top();
//           q.pop();
//           long long one = 0;
//           long long two = 0;
//           if(mp[temp]!=0){
//               mp[temp]--;
//               continue;
//           }
//           if(temp==1 ){
//               if(mp[temp]==0){
//                   check = false;
//                   break;
//               }
//               else{
//                   mp[temp]--;
//                   continue;
//               }
//           }
//           else if(temp%2==0){
//               one = temp/2;
//               two = temp/2;

//           }
//           else{
//                 one = (temp-1)/2;
//               two = (temp + 1)/2;
//           }

//           if(mp[one]!=0){
//               mp[one]--;
//           }
//           else{
//               q.push(one);
//           }

//           if(mp[two]!=0){
//               mp[two]--;
//           }
//           else{
//               q.push(two);
//           }

//       }
//       if(q.empty() && check==true){
//           cout<<"YES"<<endl;
//       }
//       else{
//           cout<<"NO"<<endl;
//       }

//   }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool ch(vector<long long> &v, int start, int end, vector<long long> &copy)
{
    int mid = (start + end) / 2;

    int a = 0;
    for (int i = start; i <= mid; i++)
    {
        long long temp = v[start + a];
        v[start + a] = v[end - a];
        v[end - a] = temp;
        a++;
    }
    if (v == copy)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> copy = v;
    sort(copy.begin(), copy.end());

    // sort(v.begin() , v.end());

    int count = 0;
    int start = 0;
    int end = 0;
    int flip = 0;
    bool check = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            flip = 1;
            start = i - 1;
        }
        else if (flip == 1 && (v[i] > v[i - 1]))
        {
            if (ch(v, start, i - 1, copy) == true)
            {
                check = true;
                end = i - 1;
            }
            else
            {
                check = false;
                break;
            }
            flip = 0;
            break;
        }
    }
    if (flip == 1)
    {
        if (ch(v, start, n - 1, copy) == true)
        {
            check = true;
            end = n - 1;
        }
        else
        {
            check = false;
        }
    }
    if (check == true)
    {
        cout << "YES" << endl;
        cout << start + 1 << " " << end + 1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// bool ch(vector<long long > &v , int start , int end , vector<long long > &copy){
//     int mid = (start + end)/2;

//     int a = 0;
//     for(int i=start;i<=mid;i++){
//         long long temp = v[start + a];
//         v[start +a] = v[end - a];
//         v[end - a] = temp;
//         a++;
//     }
//     if(v==copy){
//         return true;
//     }
//     return false;
// }

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int n;
//     cin>>n;
//     vector<long long > v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<long long > copy = v;
//     sort(copy.begin() , copy.end());

//   // sort(v.begin() , v.end());

//     int count = 0;
//     int start = 0;
//     int end = 0;
//     int flip = 0;
//     bool check = true;

//     for(int i=1;i<n;i++){
//         if(v[i] < v[i-1]){
//             if(flip==0){
//                 flip = 1;
//                  start = i-1;

//             }

//         }
//         else if(flip==1 && (v[i] > v[i-1]) ){
//             if(ch(v , start , i-1 , copy)==true){
//                 check = true;
//                 end = i-1;
//             }
//             else{
//                 check = false;
//                 break;
//             }
//             flip = 0;
//             break;
//         }
//     }

//     if(flip==1 ){
//         if(ch(v , start , n-1 , copy)==true){
//                 check = true;
//                 end = n-1;
//             }
//             else{
//                 check = false;

//             }
//     }
//     if(check==true){
//         cout<<"yes"<<endl;
//         cout<<start+1<<" "<<end+1<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }

// }

#include <bits/stdc++.h>
using namespace std;

long long n, d;
cin >> n >> d;
vector<long long> another(n);
for (int i = 0; i < n; i++)
{
    cin >> v[i];
}
sort(v.begin(), v.end());
long long pre = 0;
for (int i = 0; i < n - 3; i++)
{
}

// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int m ;
//     cin>>m;
//     map<int , vector<int>> mp;
//   // priority_queue<long long > q;
//   unordered_set<int> s;
//     vector<pair<int , int >> pa;
//     int ind = 1;
//     int start = 0;
//     vector<int > ans;
//     for(int i=0;i<m;i++){
//         int type ;
//         cin>>type;
//         if(type == 1){
//             int m ;
//             cin>>m;

//             mp[m].push_back(ind );
//             pa.push_back({m , ind});
//           // q.push(m);
//             ind++;
//         }
//         else if(type==2){
//             if(s.find(pa[start].second)!=s.end()){
//              while(s.find(pa[start].second)!=s.end()){
//                  start++;
//              }
//               ans.push_back(pa[start].second);
//             }
//             else{
//                  ans.push_back(pa[start].second);
//             }

//             vector<int > v = mp[pa[start].first];
//             auto it = v.begin();
//             v.erase(it);
//             if(v.size()==0){
//                  mp.erase(pa[start].first);
//             }
//             else{
//                 mp[pa[start].first] = v;
//             }
//             // mp[pa[start].first].erase(pa[start].second);

//             // if(mp[pa[start].first].size()==0){
//             //     mp.erase(pa[start].first)
//             // }
//             start++;
//         }
//         else if(type==3){
//             auto it = mp.rbegin();
//           // cout<<it->first<<" "<<it->second[0]<<endl;
//             ans.push_back(it->second[0]);
//             if(start==it->second[0]){
//                 start++;
//             }
//             s.insert(it->second[0]);
//             vector<int > v = mp[it->first];
//             auto t = v.begin();
//             v.erase(t);
//             if(v.size()==0){
//                  mp.erase(it->first);
//             }
//             else{
//                 mp[it->first] = v;
//             }
//         }

//     }

//     for(auto x : ans){
//         cout<<x<<" ";
//     }
//     cout<<endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += (v[i] - v[i - 1]);
        }
        long long neg = 0;
        long long middle = 0;
        long long count = 0;
        for (int i = 1; i < n; i++)
        {
            if (i == 1)
            {
                neg += v[i];
            }
            else if (i == 2)
            {
                neg += v[i];
                long long temp = v[i] - v[i - 1];
                middle = temp;
                neg += middle;
                count++;
            }
            else
            {
                count++;
                neg += v[i];
                long long temp = (count * (v[i] - v[i - 1]));
                middle += temp;
                neg += middle;
            }
        }
        cout << (ans - neg) << endl;
    }
}
