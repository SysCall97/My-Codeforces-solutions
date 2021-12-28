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
vector<ll> matrix[100010];

bool func(ll i, ll j){return i>j;}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,s,r;
    cin>>n>>m;
    for(ll i=0; i<n; ++i) {
        cin>>s>>r;
        matrix[s-1].pb(r);
    }
    for(ll i=0; i<m; ++i) sort(all(matrix[i]),func);
    for(ll i=0; i<m; ++i) {
        for(ll j=0; j<matrix[i].size(); ++j)
            cout<<matrix[i][j]<<" ";
        cout<<el;
    }


    return 0;
}


