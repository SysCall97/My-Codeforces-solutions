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
ll arr[110][110];
ll fx[]= {1, -1, 0, 0}, fy[]= {0, 0, 1, -1};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, ans=0;
    string ch;
    cin>>n>>m>>ch;
    string inp[n];
    vector<PI> v;
    for(ll i=0; i<n; ++i) {
        cin>>inp[i];
        for(ll j=0; j<m; ++j) {
            if(inp[i][j]==ch[0]) v.pb(mp(i, j));
            if(inp[i][j]!='.') arr[i][j]=inp[i][j]-'A';
            else arr[i][j]=-1;
        }
    }

    vector<ll> flag(26, 0);
    for(ll i=0; i<v.size(); ++i) {
        for(ll j=0; j<4; ++j) {
            ll r=v[i].x+fx[j], c=v[i].y+fy[j];
            if(r<n && r>-1 && c<m && c>-1) {
                if(arr[r][c]!=-1 && flag[inp[r][c]-'A']==0 && inp[r][c]!=ch[0]) {
                    flag[inp[r][c]-'A']=1, ++ans;
//                    cout<<inp[r][c]<<el;
                }
            }
        }
    }
    cout<<ans<<el;
    return 0;
}

