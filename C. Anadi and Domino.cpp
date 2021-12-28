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
ll arr[8][8], n, m, u, v;
vector<ll> adjMat[8];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(ll i=1; i<7; ++i) {
        for(ll j=i; j<7; ++j) arr[i][j]=1;
    }
    cin>>n>>m;
    for(ll i=0; i<n; ++i) {
        cin>>u>>v;
        adjMat[u].pb(v);
        adjMat[v].pb(u);
    }

    return 0;
}

