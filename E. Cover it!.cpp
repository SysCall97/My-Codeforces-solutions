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
vector<ll> vec[200010];

void bfs(ll src, vector<ll>& distance) {
    distance[src] = 0;
    queue<ll> q;
    q.push(src);

    while(!q.empty()) {
        ll v = q.front();
        q.pop();
        for(ll to: vec[v]) if(distance[to]==INF) {
             distance[to] = distance[v]+1;
             q.push(to);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin>>t;
    while(t--) {
        ll n, k, u, v;
        cin>>n>>k;
        vector<ll> distance(n+1, INF), odd, even;
        for(ll i=0; i<k; ++i) {
            cin>>u>>v;
            vec[u].pb(v);
            vec[v].pb(u);
        }
        bfs(1, distance);
        for(ll i=0; i<=n; ++i) vec[i].resize(0);

        for(ll i=1; i<=n; ++i) {
            if(distance[i]&1) odd.pb(i);
            else even.pb(i);
        }

        if(even.size()<odd.size()) {
            cout<<even.size()<<el;
            for(ll i:even) cout<<i<<el;
        } else {
            cout<<odd.size()<<el;
            for(ll i:odd) cout<<i<<el;
        }
    }
    return 0;
}

