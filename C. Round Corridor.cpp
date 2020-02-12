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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k;
    cin>>n>>m>>k;
    ll g=__gcd(n, m);
    vector<ll> minMap, maxMap;
    ll mini=min(n,m);
    ll maxi=max(n,m);
    for(ll i=g; i<=mini; i+=g) minMap.pb(i);
    g=maxi/g;
    for(ll i=g; i<=maxi; i+=g) maxMap.pb(i);
    for(ll i=0; i<k; ++i) {
        ll sx, sy, ex, ey;
        cin>>sx>>sy>>ex>>ey;
        bool b=true;
        if(n<=m) {

        } else {

        }
    }
    return 0;
}

