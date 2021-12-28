/***************************************************************
 *    Name:  KAZI NUR ALAM MASHRY                             *
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

int visited[3000];

ll bfs(vector<vector<ll>>& adjList, ll n, ll st) {
    vector<ll> lvl(n+5);
    lvl[st] = 1;
    queue<ll> q;
    q.push(st);
    visited[st] = 0;
    while(!q.empty()) {
        ll u = q.front();
        q.pop();
        for(ll i = 0; i < adjList[u].size(); ++i) {
            visited[adjList[u][i]] = 0;
            lvl[adjList[u][i]] = lvl[u] + 1;
            q.push(adjList[u][i]);
        }
        cout << el;
    }
    return *max_element(all(lvl));
}

ll calculate(vector<vector<ll>>& adjList, ll n) {
    ll max = 1;
    mem(visited, -1);   
    for(ll i = 1; i<=n; ++i) {
        if(adjList[i].size() > 0 && visited[i] == -1) {
            ll lvl = bfs(adjList, n, i);
            max = max < lvl ? lvl : max;
        }
    }

    return max;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n;
    vector<vector<ll>> adjList(n+5);

    for(ll i = 1; i <= n; ++i) {
        cin >> m;
        if(m != -1) adjList[m].pb(i);
    }

    cout << calculate(adjList, n) << el;

    return 0;
}
