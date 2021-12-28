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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin>>n>>m;
    ll arr[n][m];
    vector<PI> row[n], col[m];

    for(ll i=0; i<n; ++i) {
        ll sz=0;
        set<ll> rowWise;
        map<ll, ll> mp1;
        for(ll j=0; j<m; ++j) {
            cin>>arr[i][j];
            rowWise.insert(arr[i][j]);
        }
        for(set<ll>:: iterator it=rowWise.begin(); it!=rowWise.end(); ++it) mp1[*it]=(++sz);
        for(ll j=0; j<m; ++j) row[i].pb(mp(mp1[arr[i][j]], sz));
    }

    for(ll i=0; i<m; ++i) {
        ll sz=0;
        set<ll> colWise;
        map<ll, ll> mp1;
        for(ll j=0; j<n; ++j) colWise.insert(arr[j][i]);
        for(set<ll>:: iterator it=colWise.begin(); it!=colWise.end(); ++it) mp1[*it]=(++sz);
        for(ll j=0; j<n; ++j) col[i].pb(mp(mp1[arr[j][i]], sz));
    }

    for(ll i=0; i<n; ++i){
        for(ll j=0; j<m; ++j) cout<<max(max(row[i][j].first+abs(col[j][i].second-col[j][i].first), col[j][i].first+abs(row[i][j].second-row[i][j].first)), max(row[i][j].second, col[j][i].second))<<" ";
        cout<<el;
    }

    return 0;
}

