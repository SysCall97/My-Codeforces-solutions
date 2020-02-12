/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
#define x             first
#define y             second
#define pi            acos(-1.0)
#define pb            push_back
#define mp            make_pair
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef unsigned long long ll;
typedef pair<ll, ll> PI;
ll mod=1e9+7;
 
ll big_mod(ll n, ll p) {
    if(p==0) return 1;
    if(p%2) return (n * big_mod(n,p-1)) % mod;
    else {
        ll ans = big_mod(n,p/2);
        return (ans*ans)%mod;
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll m=n<<1;
    vector<ll> fact(m+7), modInverse(m+7);
    fact[0]=1;
    for(ll i=1; i<m+3; ++i) {
        fact[i]=(fact[i-1]*i)%mod;
        modInverse[i-1]=0;
    }
    modInverse[n]=big_mod(fact[n], mod-2);
    ll ans=(1+fact[m]*((modInverse[n]*modInverse[n])%mod))%mod;
    ll j=1;
    for(ll i=m-1; i>0; --i) {
        ll half=i>>1;
        while(true) {
//            cout<<i<<" "<<half<<" "<<i-half<<el;
            if(modInverse[half]==0) modInverse[half]=big_mod(fact[half], mod-2);
            if(modInverse[i-half]==0) modInverse[i-half]=big_mod(fact[i-half], mod-2);
            ll g=(fact[i] * ((modInverse[half] * modInverse[i-half]) % mod))%mod;
//            cout<<i<<" "<<half<<" "<<i-half<<" "<<g<<el;
            ans = (ans + 2*g) %mod;
            if(half==0 || half-1+j<n) break;
            --half;
        }
    }
    cout<<ans<<el;
    return 0;
}
