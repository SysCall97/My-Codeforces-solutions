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
ll n, m, k, cnt;
char mp[52][52];
vector<ll> adjMat[2510], isOcean;
ll checkWater[2510];
bool flag;
ll fx[]= {-1, 1, 0, 0}, fy[]= {0, 0, 1, -1};

void dfs(ll src, vector<ll>& vis) {
    vis[src]=1;
    if(binary_search(all(isOcean), src)) flag=false;
    for(ll i=0; i<adjMat[src].size(); ++i) {
        if(vis[adjMat[src][i]]==0) {
            dfs(adjMat[src][i], vis);
        }
    }
}

void markLake(ll src, vector<ll>& region, vector<ll>& vis, ll mark) {
    vis[src]=1;
    ++cnt;
    region[src]=mark;
    for(ll i=0; i<adjMat[src].size(); ++i) {
        if(vis[adjMat[src][i]]==0) {
            markLake(adjMat[src][i], region, vis, mark);
        }
    }
}


void solve() {
    ll val[n][m], s=1;
    vector<ll> vis(n*m+5, 0), vis2(n*m+5, 0);
    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            val[i][j]=s++;
            if(mp[i][j]=='.') checkWater[s-1]=1;
            else checkWater[s-1]=0;
            if((i==0 || j==0 || i==n-1 || j==m-1) && mp[i][j]=='.') isOcean.pb(val[i][j]);
        }
    }

    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            if(mp[i][j]=='.') {
                for(ll a=0; a<4; ++a) {
                    adjMat[val[i][j]].pb(val[i][j]);
                    ll X=i+fx[a], Y=j+fy[a];
                    if(X>=0 && X<n && Y>=0 && Y<m && mp[X][Y]=='.') {
                        adjMat[val[X][Y]].pb(val[i][j]);
                        adjMat[val[i][j]].pb(val[X][Y]);
                    }
                }
            }
        }
    }

    vector<ll> region(n*m+1, 0);
    vector<PI> p;
    s=1;
    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            if(vis[val[i][j]]==0 && adjMat[val[i][j]].size()>=1) {
                flag=true;
                dfs(val[i][j], vis);
                if(flag) {
                    cnt=0;
                    markLake(val[i][j], region, vis2, s);
                    p.pb(make_pair(cnt, s));
                    ++s;
                }
            }
        }
    }
    sort(all(p));
    ll g=(s-1)-k, ans=0;
    for(ll d=0; d<g; ++d) {
        for(ll i=0; i<n; ++i) {
            for(ll j=0; j<m; ++j) {
                if(region[val[i][j]]==p[d].y) mp[i][j]='*', ++ans;
            }
        }
    }
    cout<<ans<<el;
    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            cout<<mp[i][j];
        }
        cout<<el;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            cin>>mp[i][j];
        }
    }
    solve();
    return 0;
}
