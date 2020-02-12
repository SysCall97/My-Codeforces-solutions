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
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll s[n], p;
    vector<PI> inp;
    vector<ll> mp[n], best(n, INT_MAX);
    for(ll i=0; i<n; ++i) cin>>s[i];
    for(ll i=0; i<n; ++i) {
        cin>>p;
        inp.push_back({s[i], p});
    }

    for(ll i=0; i<n; ++i) {
        ll sz = inp[i].first;
        for(ll j=i+1; j<n; ++j) {
            if(inp[j].first>sz) {
                mp[i].push_back(j);
                best[i] = min(best[i], inp[j].second);
            }
        }
    }

    ll ans = -1;
    for(ll i=0; i<n-2; ++i) {
        ll val = INT_MAX;
        ll sz = mp[i].size();
        for(ll j=0; j<sz; ++j) {
            ll pos = mp[i][j];
            ll val1 = inp[i].second+inp[pos].second;
            if(best[pos]<INT_MAX) val1 += best[pos];
            else val1 = INT_MAX;
            val = min(val, val1);
        }
        if(ans==-1 && val<INT_MAX) ans = val;
        else ans = min(ans, val);
    }
    cout<<ans<<el;

    return 0;
}
