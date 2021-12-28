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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;

    cin>>n>>m;
    vector<ll> e(n), p(m);
    for(ll i=0; i<n; ++i) cin>>e[i];
    for(ll i=0; i<m; ++i) cin>>p[i];

    ll gcd = e[1]-e[0];
    for(ll i=2; i<n; ++i) gcd = __gcd(gcd, e[i]-e[i-1]);

    bool b=true;

    for(ll i=0; i<m; ++i) {
        if(gcd%p[i]==0) {
            cout<<"YES\n"<<e[0]<<" "<<i+1;
            b=false;
            break;
        }
    }
    if(b) cout<<"NO\n";

    return 0;
}
