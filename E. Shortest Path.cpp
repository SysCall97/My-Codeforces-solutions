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
const int mx = 3005;
vi adjList[mx];
map<pair<pii, int>, int> forbidden;
int n, m, k, x, y, a, b, c;

vi bfs(int src, int des) {
    queue<int> q;
    vi visited(n+2, -1), par(n+2);
    for(int i = 0; i <= n+1; ++i) par[i] = i;
    q.push(src);
    visited[src] = 0;
    while(!q.empty() && visited[des] == -1) {
        int u = q.front();
        q.pop();
        for(int i = 0; i < adjList[u].size() && visited[des] == -1; ++i) {
            int v = adjList[u][i];
            if(visited[v] == -1) {
                visited[v] = 0;
                par[v] = u;
                q.push(v);
            }
        }
    }

    vi ans;
    if(visited[des] == 0) {
        ans.pb(des);
        int ind = par[des];
        while(ind != par[ind]) {
            ans.pb(ind);
            ind = par[ind];
        }
        ans.pb(src);
        reverse(all(ans));

    }

    return ans;

}

vi _merge(vi& path, vi& tempPath, int st) {
    vi v;
    for(int i = 0; i < st; ++i) v.pb(path[i]);
    for(int i = 0; i < tempPath.size(); ++i) v.pb(tempPath[i]);
    for(int i = st+1; i < path.size(); ++i) v.pb(path[i]);

    return v;
}

bool check(vi& path, vi& tempPath, int st) {
    vi v = _merge(path, tempPath, st);

    bool ok = true;
    for(int i = 0; i < v.size() - 2 && ok; ++i) {
        int u = v[i], _v = v[i+1], w = v[i+2];
        if(forbidden[mp(mp(u, _v), w)] == 5) ok = false;
    }

    // cout << ok << el << el;
    return ok;
}

void calculate() {
    vi path = bfs(1, n);
    if(path.size() == 0) {
        cout << -1 << el;
    } else {
        bool ok = true;
        for(int i = 0; i < path.size() - 2 && ok; ++i) {
            int u = path[i], v = path[i+1], w = path[i+2];
            if(forbidden[mp(mp(u, v), w)] == 5) {
                ok = false;
                bool init = true;
                vi tempPath1, tempPath2, tempPath3;
                for(int j = 0; j < adjList[u].size(); ++j) {
                    int z = adjList[u][j];
                    if(z != v) {
                        if(init) {
                            tempPath1 = bfs(z, v);
                            if(check(path, tempPath1, i+1)) {
                                init = false;
                                ok = true;
                            } else tempPath1.clear();
                        } else {
                            tempPath2 = bfs(z, v);
                            if(check(path, tempPath2, i+1)) {
                                ok = true;
                                if(tempPath1.size() > tempPath2.size()) {
                                    tempPath1 = tempPath2;
                                }
                            }
                        }
                    }
                }

                init = true;

                for(int j = 0; j < adjList[v].size(); ++j) {
                    int z = adjList[v][j];
                    if(z != w) {
                        if(init) {
                            tempPath2 = bfs(z, w);
                            if(check(path, tempPath2, i+2)) {
                                init = false;
                                ok = true;
                            } else tempPath2.clear();
                        } else {
                            tempPath3 = bfs(z, w);
                            if(check(path, tempPath3, i+2)) {
                                ok = true;
                                if(tempPath2.size() > tempPath3.size()) {
                                    tempPath2 = tempPath3;
                                }
                            }
                        }
                    }
                }

                if(ok) {
                    // cout << "Size: " << tempPath1.size() << ", " << tempPath2.size() << el;
                    if(tempPath1.size() < tempPath2.size()) {
                        if(tempPath1.size() > 0) {
                            int st = i+1;
                            path = _merge(path, tempPath1, st);
                        } else {
                            int st = i+2;
                            path = _merge(path, tempPath2, st);
                        }
                    } else if(tempPath1.size() > tempPath2.size()) {
                        if(tempPath2.size() > 0) {
                            int st = i+2;
                            path = _merge(path, tempPath2, st);
                        } else {
                            int st = i+1;
                            path = _merge(path, tempPath1, st);
                        }
                    }
                }
            
            }
        }

        if(!ok) cout << -1 << el;
        else {
            cout << path.size() - 1 << el;
            for(auto i: path) cout << i << " "; cout << el;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m >> k;
    while(m--) {
        cin >> x >> y;
        adjList[x].pb(y);
        adjList[y].pb(x);
    }
    while(k--) {
        cin >> a >> b >> c;
        pii d;
        d = mp(a, b);
        pair<pii, int> e;
        e = mp(d, c);
        forbidden[e] = 5;
    }

    calculate();
    
    return 0;
}