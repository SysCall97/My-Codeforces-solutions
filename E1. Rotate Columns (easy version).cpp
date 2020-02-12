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
    ll t;
    cin>>t;
    while(t--) {
        ll n, m, s, ans=0; cin>>n>>m;
        vector<ll> v[n], vc;
        for(ll i=0; i<n; ++i) {
            for(ll j=0; j<m; ++j) {
                cin>>s;
                v[i].pb(s);
            }
            sort(all(v[i]));
        }
        for(ll i=0; i<n; ++i) {
            vc.pb(v[i][m-1]);
            vc.pb(v[i][m-2]);
        }
        sort(allr(vc));
        for(ll i=0; i<n; ++i) ans+=vc[i];
        cout<<ans<<el;
    }
    return 0;
}

