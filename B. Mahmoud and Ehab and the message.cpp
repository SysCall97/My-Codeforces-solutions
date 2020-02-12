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
    ll n, k, m, ans=0;
    string w;
    cin>>n>>k>>m;
    vector<ll> cost(n+1), grpMin(k);
    map<string, ll> Map;
    map<ll, ll> tag;

    for(ll i=1; i<=n; ++i) {
        cin>>w;
        Map[w] = i;
    }

    for(ll i=1; i<=n; ++i) cin>>cost[i];

    for(ll i=0; i<k; ++i) {
        grpMin[i] = INF;
        ll x, y;
        cin>>x;
        for(ll j=0; j<x; ++j) {
            cin>>y;
            tag[y] = i;
            grpMin[i] = min(grpMin[i], cost[y]);
        }
    }

    for(ll i=0; i<m; ++i) {
        cin>>w;
        ans += grpMin[tag[Map[w]]];
    }
    cout<<ans<<el;


    return 0;
}
