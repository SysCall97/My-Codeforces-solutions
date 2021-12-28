#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,q,m;
    vector<ll> v;
    scanf("%lld",&n);
    for(ll i=0; i<n; ++i) {
        scanf("%lld",&m);
        v.pb(m);
    }
    scanf("%lld",&q);
    while(q--) {
        scanf("%lld",&k);
        vector<ll> v2;
        ll SIZE=0;
        bool b=0;
        for(ll i=0; i<n-1; ++i) {
            for(ll j=i+1; j<n; ++j) {
                if(__gcd(v[i],v[j])==k) {
                    b=1;
                    break;
                }
            }
        }
        if(b) printf("Y\n");
        else printf("N\n");
    }

    return 0;
}


