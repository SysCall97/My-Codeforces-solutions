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
        ll n;
        cin>>n;
        vector<ll> v(4*n), a;
        map<ll, ll> nm;
        for(ll i=0; i<4*n; ++i) {
            cin>>v[i];
            ++nm[v[i]];
        }
        bool b=true;
        for(map<ll, ll>::iterator it=nm.begin(); it!=nm.end(); ++it) if(it->y%2!=0) {
                b=false;
                break;
            }
        if(!b) cout<<"NO\n";
        else {
            for(map<ll, ll>::iterator it=nm.begin(); it!=nm.end(); ++it) {
                ll m=it->y/2;
                for(ll i=0; i<m; ++i) a.pb(it->x);
            }
            sort(all(a));
            b=true;
            ll area=a[0]*a[a.size()-1];
            for(ll i=1, j=a.size()-2; i<j; ++i, --j) {
                if(a[i]*a[j]!=area) {
                    b=false;
                    break;
                }
            }
            if(b) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}

