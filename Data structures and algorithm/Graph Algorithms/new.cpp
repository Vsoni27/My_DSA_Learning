#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define ppb pop_back
/*----------------------------------------------------------*/
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool isPrime(ll n){
    if (n <= 1) return false; 
    for (ll int i = 2; i <= floor(sqrt(n)); i++){if(n % i == 0) return false;}
    return true;
}
/*----------------------------------------------------------*/

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        if(k==n){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            int j=0, ind=0, val;
            vector<int> v;
            for (int i = 1; ind<k ; i=i+j)
            {
                if(n-i>=k-ind-1){
                    v.pb(i);
                }
                else{
                    val=i;
                    break;
                }
                j++; ind++;
            }
            //cout<<v.size()<<endl;
            if(v.size()==k){
                for (int i = 0; i < k; ++i)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
                continue;
            }
            int x = val, p=v.size()-1, rem = k-v.size();
            cout<<x<<endl;
            while(x>=1){
                if(n-x >= rem){
                    break;
                }
                if(v[p]==x){
                    v.ppb();
                    p--;
                    rem = k-v.size();
                }
            }
            for(int t=0;t<v.size();t++){
                cout<<v[t]<<" ";
            }
            int qty=k-v.size(), elem = v[v.size()-1];
            while(qty!=0){
                cout<<++elem<<" ";
                qty--;
            }
            cout<<endl;
        }
    }

    return 0;
}