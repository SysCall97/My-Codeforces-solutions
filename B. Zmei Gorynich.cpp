/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
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
    ll t;cin>>t;
    while(t--) {
        ll n, x, ans=INF;
        cin>>n>>x;
        bool b=0;
        vector<PI> v(n);
        for(ll i=0; i<n; ++i) {
            cin>>v[i].first>>v[i].second;
            if(v[i].first>v[i].second) {
                b=1;
                if(x>v[i].first) ans=min(ans, (ll)1);
                else {
                    ll c=(x/v[i].first);
                    if(x%v[i].first) ++c;
                    ll nx=x+(c-1)*v[i].second-(c*v[i].first);
                    while(nx>0) {
                        ll g=(nx/v[i].first);
                        if(nx%v[i].first) ++g;
                        c+=g;
                        nx=nx+(g-1)*v[i].second-(g*v[i].first);
                    }
                    ans=min(ans, c);
                }

            }
        }
        if(b) cout<<ans<<el;
        else cout<<-1<<el;
    }
    return 0;
}
