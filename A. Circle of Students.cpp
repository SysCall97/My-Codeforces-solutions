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
    ll q;
    cin>>q;
    while(q--) {
        ll n, m;
        bool b=true;
        cin>>n;
        vector<ll> v;
        for(ll i=0; i<n; ++i) {
            cin>>m;
            v.pb(m);
        }

        for(ll i=0; i<n; ++i) v.pb(v[i]);
        m=v.size();
        b=false;

        for(ll i=0; i<m; ++i) {
            ll cnt=1;
            for(ll j=i; j<m-1; ++j) {
                if(abs(v[j]-v[j+1])!=1 || cnt==n) break;
                ++cnt;
            }
            if(cnt==n) {
                b=true;
                break;
            }
        }

        if(b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
