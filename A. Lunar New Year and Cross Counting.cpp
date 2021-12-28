/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans=0; cin>>n;
    string str[n+1];
    for(ll i=0; i<n; ++i) cin>>str[i];
    if(n<3) ans=0;
    else {
        for(ll i=1; i<n-1; ++i) {
            for(ll j=1; j<n-1; ++j) {
                if(str[i-1][j-1]=='X' && str[i-1][j+1]=='X' && str[i][j]=='X' && str[i+1][j-1]=='X' && str[i+1][j+1]=='X')
                    ++ans;
            }
        }
    }
    cout<<ans<<el;

    return 0;
}
