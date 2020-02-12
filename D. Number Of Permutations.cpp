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
typedef long long ll;
typedef pair<ll, ll> PI;
ll mod=998244353;

ll big_mod(ll n, ll p) {
    if(p==0) return 1;
    if(p%2) return ((n%mod)*big_mod(n,p-1))%mod;
    else ll ans = big_mod(n,p/2)%mod;
    return (ans*ans)%mod;
}

int main() {
    vector<ll> fact(300010), modInv(300010);
    fact[0]=1
    for(ll i=1; i<300002; ++i) {
        fact[i]=(i*fact[i-1])%mod;
        modInv[i]=big_mod(fact[i], mod-2);
    }

    return 0;
}
