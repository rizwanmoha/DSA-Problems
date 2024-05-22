// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
 
// long long n, k, x;
// cin>>n>>k>>x;
// vector<long long > v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// vector<long long > temp;
// sort(v.begin() , v.end());

// long long m = v[0];
// for(int i=1;i<n;i++){
//     if((v[i]-m) > x){
      
//       temp.push_back(v[i]-m);
       
//     }
    
//     m = v[i];
// }
// long long ans = 1;

// long long s = temp.size();
// int count = 0;
//     sort(temp.begin() , temp.end());
    
// for(int i=0;i<s;i++){
//     //temp[i]--;
//   int g = temp[i]/x;
   
  
//   if(k >= g){
//       count++;
//       k-=g;
      
//   }
//   else{
//       break;
//   }
// }

// cout<<(temp.size() - count) +1 <<endl;
 
 
 
 
 
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin() , v.end());
        int m = INT_MAX;
        int ind1 = 0;
        int ind2 = 0;
        
        for(int i=1;i<n;i++){
            int temp = v[i] - v[i-1];
            if(temp < m){
                m = temp ;
                ind1 = i-1;
                ind2  = i;
                
            }
        }
        
        vector<int> ans(n);
        ans[0] = v[ind1];
        ans[n-1] = v[ind2];
        int start = 1;
        // for(int i=0;i<n;i++){
        //     if(i==ind1 || i==ind2){
        //         continue;
        //     }
        //     else{
        //         ans[start] = v[i];
        //         start++;
        //     }
        // }
        int last = n-1;
        int s = 0;
        int f = 1;
        while(last >= s){
            if(f==1){
                if(last==ind1 || last==ind2){
                    last--;
                }
                else{
                    ans[start] = v[last];
                    last--;
                    start++;
                    f=0;
                }
            }
            else{
                if(s==ind1 || s==ind2){
                    s++;
                    
                }
                else{
                    ans[start] = v[s];
                    start++;
                    s++;
                    f=1;
                }
            }
        }
        
        
        
        
        for(auto x : ans){
            cout<<x <<" ";
        }
        cout<<endl;
        
        
        
        
    }
    
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
// bool pallindrome(string s){
//     long long n = s.length() - 1;
//     long long low = 0;
//     while(n > low){
//         if(s[low]!=s[n]){
//             return false;
//         }
//         n--;
//         low++;
//     }
//     return true;
    
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , k;
//         cin>>n>>k;
//         string str;
//         cin>>str;
       
//       if(k <= n){
//             string temp = "";
//         for(int i=0;i<k;i++){
//             temp.push_back(str[i]);
//         }
//         reverse(temp.begin() , temp.end());
//         string temp2 = str + temp;
//         string temp3 = temp + str;
//         if(pallindrome(temp2)==true && pallindrome(temp3)==true){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//       }
//       else{
//           map<char  , long long > mp;
//           for(int i=0;i<n;i++){
//               mp[str[i]]++;
//           }
          
//           long long freq = mp[str[0]];
//           bool check = true;
//           vector<long long > v;
//           for(auto x : mp){
//              v.push_back(x.second);
              
//           }
          
          
//           sort(v.begin() , v.end());
//           long long m = v.size();
//           for(int i=1;i<m ;i++){
//               if((v[i]%v[i-1])!=0){
//                   check =false;
//                   break;
//               }
//           }
//           if(check==true){
//               cout<<"Yes"<<endl;
//           }
//           else{
//               cout<<"No"<<endl;
//           }
//       }
        
        
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
        
        
//         long long a , b;
//         cin>>a>>b;
//         string str ;
//         cin>>str;
//         long long ind  = -1;
//         int n = str.length();
//         for(int i=0;i<n;i++){
//             if(str[i]=='1'){
//                 ind = i;
//                 break;
//             }
            
//         }
//         if(ind==-1){
//             cout<<0<<endl;
//         }
//         else{
//             int temp =ind ;
//             vector<int> v;
//             for(int i=ind ;i<n;i++){
//                     if(str[i]=='1'){
//                  int t2 = i - temp;
//                  temp = i;
//                  if(t2 > 1){
//                      v.push_back(t2-1);
//                  }
//             }
             
//         }
       
//             long long ans = a;
//             int m = v.size();
//             //cout<<m<<endl;
//             for(int i=0;i<m;i++){
//                 ans = min(ans+a , (ans+ (b*v[i])));
//             }
//             cout<<ans<<endl;
        
//     }
        
// }
// }




#include <bits/stdc++.h>
using namespace std;
long long fact(long long n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    long long n;
    cin>>n;
    long long temp = n/2;
    long long ans = ((fact(n)/(fact(temp) * fact(temp)))/2) * fact(temp-1) *fact(temp-1);
    
    cout<<ans<<endl;
    
}


// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int ta;
//   cin>>ta;
//   while(ta--){
//       long long na;
//       cin>>na;
//       if(na%2==1){
//           cout<<-1<<endl;
//       }
//       else{
//           cout<<1<<" "<<na/2<<endl;
//       }
//   }
   

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool pr(long long n){
//     for(int i=2;i*i<= n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void fac(long long n , map<long long , long long >&mp){
//     long long k = n;
//     long long pr = 1;
//     for(int i=2;i*i <= n;i++){
//         long long count = 0;
//         while(k%i==0){
//             count++;
//             pr = pr * i;
//             k = k/i;
//         }
//         if(count > 0){
//             mp[i] = count;
//         }
//     }
//     if(n%pr==0 && n/pr > 1){
//         mp[n/pr]++;
//     }
// }
// int main() {
//   int t;
//   cin>>t;
//   //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
//          //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
//          //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
//   while(t--){
      
      
//       long long na ;
//       cin>>na;
//       map<long long  , long long > mp;
//       if(pr(na)==true){
//           cout<<na<<endl;
//       }
//       else{
//           fac( na, mp);
//           long long ans = 1;
         
//          //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
//          //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
//          //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
//          //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
       
//         long long temp2 = 0;
//         long long mius =0;
//         while(mp.size()!=1){
//              long long m = INT_MAX;
//              long long pro = 1;
//              long long del = -1;
//               for(auto x : mp){
//                   x.second-=mius;
//               if(x.second < m){
//                   m = x.second;
//                   del = x.first;
//               }
//               pro = pro * x.first;
              
//           }
//           mius+=m;
         
//           long long tr = pro * m ;
//           temp2+=tr;
//           mp.erase(del);
       
          
//         }
        
         
          
//           for(auto x : mp){
//               long long de = (x.second - mius) * x.first;
              
//               temp2+=de;
//           }
//           cout<<temp2<<endl;
          
          
          
          
//       }
//       //lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg//lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg//lubcwkulgrheblhckefwbhgu/kugvchbfdgvkcr//
         
//          //lchuebseclkurwehcblhewc
//          //jhcbdcgkeuwvbclhewrewl
//          //lhdbchevwkyfcgweqhlv
//          //lhcvbeckgewvlvguewcbwehukhjwebcvdghcvg
      
      
      
//   }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , s;
        cin>>n>>s;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long> x(n);
        vector<long long > y(n);
        x[0] = 0;
        y[0] = 0;
        x[n-1] = 0;
        y[n-1] = 0;
        for(int i=1;i<n-2;i++){
            x[i] = s;
            y[i] = v[i] - s;
        }
        y[n-3] = s;
        x[n-3] = v[n-3] - s;
        y[n-2] = s;
        x[n-2] = v[n-2] - s;
        long long temp = v[0] * x[1];
        long long temp2 = v[n-1] * y[n-2];
        
        long long temp3 =  0;
        for(int i=1;i<n-1;i++){
            temp3+=(y[i] * x[i+1]);
        }
        cout<<temp+temp2+temp3<<endl;
    }
}
// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , q;
//         cin>>n>>q;
//       vector<long long> v(n);
//       for(int i=0;i<n;i++){
//           cin>>v[i];
//       }
       
//       long long sum = 0;
//       int flip = 0;
//       for(int i=1;i<n;i++){
//           if(flip==0){
//               if(v[i] > v[i-1]){
//                   continue;
//               }
//               else{
//                   flip = 1;
//                   sum+=v[i-1];
//               }
//           }
//           else{
//               if(v[i] < v[i-1]){
//                   continue;
//               }
//               else{
//                   flip = 0;
//                   sum-=v[i-1];
//               }
//           }
//       }
//       if(flip==0){
//           sum+=v[n-1];
//       }
//       cout<<sum<<endl;
       
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<long long > v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         vector<long long > l(n);
//         vector<long long > ind;
//         vector<long long > val;
//         unordered_set<long long > s;
//         for(int i=0;i<n;i++){
//             cin>>l[i];
//             if(l[i]==0){
//                 ind.push_back(i);
//                 val.push_back(v[i]);
                
//             }
//         }
//         // for(auto x : ind){
//         //     cout<<x<<" ";
//         // }
//       // cout<<endl;
      
//         if(ind.size()==0){
//             for(auto x : v){
//                 cout<<x<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             int m = ind.size();
//               sort(val.begin() , val.end(), greater<int>());
//             for(int i=0;i<m;i++){
//                 v[ind[i]] = val[i];
//             }
//             for(auto x : v){
//                 cout<<x<<" ";
//             }
//             cout<<endl;
//         }
        
        
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    //cout<<__gcd(633, 537)<<endl;
    while(t--){
        int n ;
        cin>>n;
       vector<long long > v(n);
       long long m = INT_MAX;
       for(int i=0;i<n;i++){
          cin>>v[i]; 
          m = min(m , v[i]);
       }
      // vector<long long > copy = v;
       //sort(copy.begin() , copy.end());
       bool check=true;
       
       vector<pair<long long , long long >> pa;
       vector<long long > an;
       
       for(int i=0;i<n;i++){
           if(__gcd(m , v[i])==m){
               pa.push_back(make_pair(i , -1));
               an.push_back(v[i]);
           }
           else{
                pa.push_back(make_pair(i , -0));
           }
       }
       sort(an.begin() , an.end());
       int start = 0;
       for(int i=0;i<n;i++){
           if(pa[i].second==-1){
               v[i] = an[start++];
           }
           else{
               continue;
           }
       }
       for(int i=1;i<n;i++){
           if(v[i] < v[i-1]){
               check = false;
               break;
           }
       }
       
      if(check==true){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
       
       
       
    }
}
        
        
        
        




    











