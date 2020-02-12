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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, sz=0;
    cin>>n;
    vector<ll> v(n), stolen;

    for(ll i=0; i<n; ++i) cin>>v[i];
    sort(allr(v));

    for(ll i=1; i<n; ++i) if(v[i]!=v[0]) {
            stolen.pb(v[0]-v[i]);
            ++sz;
        }
    sort(all(stolen));
    ll ans=0, g=stolen[0];
    for(ll i=1; i<sz; ++i) g=__gcd(g, stolen[i]);
    for(ll i=0; i<sz; ++i) ans+=stolen[i]/g;
    cout<<ans<<" "<<g<<el;
    return 0;
}

