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
    ll n;
    cin>>n;
    vector<ll> v(n),g;
    map<ll, ll> mp;
    for(ll i=0; i<n; ++i) {
        cin>>v[i];
        ++mp[v[i]];
    }

    for(map<ll, ll>:: iterator it=mp.begin(); it!=mp.end(); ++it) g.pb(it->y);

    ll ans=INF;
    ll prev_c=-1;
    for(ll i=0; i<n; ++i) {
        ll cnt=0;
        for(ll j=i; j<n; ++j) {
            --mp[v[j]];
            ++cnt;
            if(mp[v[j]]==0) {
                mp[v[j]]=1;
                --cnt;
                break;
            }
        }
        bool b=true;
        ll c=0;
        ll j=0;
        for(map<ll, ll>:: iterator it=mp.begin(); it!=mp.end(); ++it) {
            if(it->y==1) ++c;
            it->y=g[j++];
        }
        if(b && c>prev_c) {ans=min(ans, cnt);prev_c=c;}
    }
    cout<<ans<<el;
    return 0;
}
