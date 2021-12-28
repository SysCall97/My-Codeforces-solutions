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
    ll n, ans=1, maxi=-1;
    cin>>n;
    vector<ll> v;
    for(ll i=2; n>1; ++i) if(n%i==0) {
            ll cnt=0;
            while(n%i==0) {
                ++cnt;
                n/=i;
            }
            v.pb(cnt);
            maxi=max(maxi, cnt);
            ans*=i;
        }
    if(n>1) {
        maxi=max(maxi, (ll) 1);
        v.pb(1);
    }

    bool b=false;
    for(ll i=1; i<v.size(); ++i) {
        if(v[i]!=v[i-1]) {
            b=true;
            break;
        }
    }


    if(b || (maxi>1 && maxi&(maxi-1))) n=1;
    else n=0;

    ll m=1;
    for(ll i=1; ; ++i) {
        if(m<maxi)++n;
        else break;
        m=m<<1;
    }

    cout<<ans<<" "<<n<<el;
    return 0;
}
