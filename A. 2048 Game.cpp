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
    ll t;
    cin>>t;
    while(t--) {
        ll n, m, sz=0;
        cin>>n;
        vector<ll> v;
        for(ll i=0; i<n; ++i) {
            cin>>m;
            if(m<=2048) v.pb(m), ++sz;
        }
        sort(all(v));
        ll k=2048;
        for(ll i=sz-1; i>=0; --i) {
            k-=v[i];
            if(k==0) break;
        }
        if(k) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
