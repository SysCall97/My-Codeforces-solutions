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
vector<ll> adjMat[200010], vec;
ll ans=-1;

void dfs(ll src, vector<ll>& point, vector<ll>& vis) {
    for(ll i=0; i<adjMat[src].size(); ++i) {
        if(vis[adjMat[src][i]]==0) {
            vec.pb(adjMat[src][i]);
            vis[adjMat[src][i]]=1;
            vis[src]=0;
            dfs(adjMat[src][i], point, vis);
            vis[adjMat[src][i]]=0;
            vis[src]=1;
            vec.pop_back();
        } else {
            ll g=0;
            for(ll i=0; i<vec.size(); ++i) g+=point[vec[i]];
            for(ll i: vec) cout<<i<<" ";
//            cout<<" "<<g<<el;
            ans=max(ans, g);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k, u, v;
    cin>>n>>m;
    vector<ll> p(n+1), vis(n+1, 0);
    for(ll i=1; i<=n; ++i) cin>>p[i];
    for(ll i=0; i<m; ++i) {
        cin>>u>>v;
        adjMat[u].pb(v);
        adjMat[v].pb(u);
    }
    cin>>k;
    vec.pb(k);
    dfs(k, p, vis);
    cout<<ans<<el;
    return 0;
}
