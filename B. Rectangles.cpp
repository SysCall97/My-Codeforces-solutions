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
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

ll func(ll n) {
    ll ans=1;
    for(ll i=1; i<=n; ++i) ans*=2;
    return ans-1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin>>n>>m;
    ll ans=0, cntC0[m], cntC1[m], k;
    for(ll i=0; i<m; ++i) cntC0[i]=cntC1[i]=0;
    for(ll i=0; i<n; ++i) {
        ll cntR0=0, cntR1=0;
        for(ll j=0; j<m; ++j) {
            cin>>k;
            if(k) ++cntR1, ++cntC1[j];
            else ++cntC0[j], ++cntR0;
        }
        ans+=func(cntR0)+func(cntR1);
    }
    for(ll i=0; i<m; ++i) ans+=func(cntC0[i])+func(cntC1[i]);
    cout<<ans-n*m<<el;

    return 0;
}
