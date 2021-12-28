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
    ll n, m, k;
    cin>>n>>m;
    vector<ll> mat[n+1], B[n+1];
    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            cin>>k;
            mat[i].pb(k);
            B[i].pb(0);
        }
        mat[i].pb(1);
        B[i].pb(1);
    }
    for(ll i=0; i<=m; ++i) {
        mat[n].pb(1);
        B[n].pb(1);
    }
    vector<PI> ans;
    ll cnt=0;

    for(ll i=0; i<n-1; ++i) {
        for(ll j=0; j<m-1; ++j) {
            if(mat[i][j]==1 && mat[i+1][j]==1 && mat[i+1][j+1]==1 && mat[i][j+1]==1) {
                if(B[i][j]==0 || B[i+1][j]==0 || B[i+1][j+1]==0 || B[i][j+1]==0) {
                    ans.pb(mp(i+1, j+1));
                    B[i][j]=B[i+1][j]=B[i+1][j+1]=B[i][j+1]=1;
                    ++cnt;
                }
            }
        }
        for(ll j=0; j<m; ++j) {
            if(mat[i][j]!=B[i][j]) {
                cout<<-1<<el;
                return 0;
            }
        }
    }
    for(ll i=0; i<m; ++i) if(mat[n-1][i]!=B[n-1][i]) {
            cout<<-1<<el;
            return 0;
        }
    cout<<cnt<<el;
    for(ll i=0; i<cnt; ++i) cout<<ans[i].first<<" "<<ans[i].second<<el;
    return 0;
}

