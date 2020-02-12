/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m, ans=0;
    cin>>n>>m;
    vector<ll> v(m);
    vector<string> str;
    string st;
    cin.ignore();
    for(ll i=0; i<n; ++i) {
        cin>>st;
        str.pb(st);
    }
    for(ll i=0; i<m; ++i) cin>>v[i];

    for(ll i=0; i<m; ++i) {
        map<char, ll> mp;
        ll maxi=-1;
        for(ll j=0; j<n; ++j) {
            ++mp[str[j][i]];
            maxi=max(maxi, mp[str[j][i]]);
        }
        ans+=maxi*v[i];
    }
    cout<<ans<<el;
    //for(auto i: str) cout<<i<<el;
    return 0;
}


