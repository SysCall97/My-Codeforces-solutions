/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
ll adjList[1010];
bool visited[1010];

ll dfs(ll source) {
    visited[source]=true;
    if(visited[adjList[source]]) return adjList[source];
    else return dfs(adjList[source]);
}

void reset() {
    for(ll i=0; i<1010; ++i) visited[i]=false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    for(ll i=1; i<=n; ++i) cin>>adjList[i];

    for(ll i=1; i<=n; ++i) {
        reset();
        cout<<dfs(i)<<" ";
    }
    cout<<el;

    return 0;
}


