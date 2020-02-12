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
ll fact[2000010], modInverse[1000010];
ll big_mod(ll n, ll p) {
    if(p==0) return 1;
    if(p%2) return (n * big_mod(n,p-1)) % mod;
    else {
        ll ans = big_mod(n,p/2);
        return (ans*ans)%mod;
    }
}

int main() {
    ll n;
    scanf("%llu", &n);
    ll m=n<<1;
    fact[0]=1;
    for(ll i=1; i<=m+1; ++i) {
        fact[i]=(fact[i-1]*i)%mod;
        if(i<n+3) modInverse[i-1]=big_mod(fact[i-1], mod-2);
    }

    ll ans=(1+fact[m]*((modInverse[n]*modInverse[n])%mod))%mod;
    ll j=1;
    for(ll i=m-1; i>0; --i) {
        ll half=i>>1;
        if(!(i&1)) {
            ans = (ans + (fact[i] * ((modInverse[half] * modInverse[i-half]) % mod))) % mod;
            --half;
        }
        while(true) {
            ll g=(fact[i] * ((modInverse[half] * modInverse[i-half]) % mod))%mod;
            ans = (ans + 2*g) %mod;
            if(half==0 || half-1+j<n) break;
            --half;
        }
        ++j;
    }
    printf("%llu\n",ans);
    return 0;
}
