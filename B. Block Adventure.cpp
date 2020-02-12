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
        ll n, m, k, l, g;
        cin>>n>>m>>k;
        bool b=true;
        cin>>g;
        for(ll i=1; i<n; ++i) {
            cin>>l;
            if(b) {
                if(g>=l) {
                    m+=(g-l);
                    if(l-k>=0) m+=k;
                    else m+=l;
                } else {
                    ll diff=l-g-k;
                    if(diff<0) {
                        if(l>k) m+=g-(l-k);
                        else m+=g;
                    }
                    else m-=diff;
                    if(m<0) b=false;
                }
                g=l;
            }
        }
        if(b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
