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
vector<ll> adjMat[100000];
ll vis[100010], c=0;

void dsu(ll src) {
    ++c;
    vis[src]=1;
    for(ll i=0; i<adjMat[src].size(); ++i) {
        if(vis[adjMat[src][i]]==0) dsu(adjMat[src][i]);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, a, b;
    cin>>n>>k;
    for(ll i=0; i<k; ++i) {
        cin>>a>>b;
        adjMat[a].pb(b);
        adjMat[b].pb(a);
    }
    for(ll i=1; i<n; ++i) {
        if(vis[i]==0) dsu(i), --c;
    }
    cout<<k-c<<el;
    return 0;
}

