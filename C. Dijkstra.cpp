/***************************************************************
 *    Name:  KAZI NUR ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           1e9
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
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int mx = 100005;
ll dis[mx], path[mx];
vector<vi> adjList(mx), weight(mx);
int n, m, a, b, w;

void dijkstra() {
    int src = 1;
    // mem(dis, 1e18);
    // mem(path, -1);
    for(int i = 0; i <= n+2; ++i) {
        dis[i] = 1e18;
        path[i] = i;
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({1, src});
    dis[src] = 0;
    path[src] = 1;

    while(!pq.empty()) {
        pii top = pq.top();
        pq.pop();
        int u = top.y;
        for(int i = 0; i < adjList[u].size(); ++i) {
            int v = adjList[u][i];
            if(dis[u] + weight[u][i] < dis[v]) {
                dis[v] = dis[u] + weight[u][i];
                pq.push({dis[v], v});
                path[v] = u;
            }
        }
    }

    if(dis[n] == 1e18) cout << -1 << el;
    else {
        // for(int i = 1; i <= n; ++i) cout << path[i] << " "; cout << el;
        // for(int i = 1; i <= n; ++i) cout << dis[i] << " ";
        vi ans;
        ans.pb(n);
        int ind = path[n];
        while(ind > 1) {
            ans.pb(ind);
            ind = path[ind];
        }
        ans.pb(1);
        for(int i = ans.size() - 1; i >=0; --i) cout << ans[i] << " ";
        cout << el;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m;
    while(m--) {
        cin >> a >> b >> w;
        adjList[a].pb(b);
        adjList[b].pb(a);
        weight[a].pb(w);
        weight[b].pb(w);
    }
    dijkstra();
    return 0;
}
