/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
ll MAX = -1;
vector<ll> init;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,k,rem=0;
    cin>>n>>m;
    for(ll i=0; i<n; ++i) {
        cin>>k;
        init.pb(k);
        if(k>MAX) MAX=k;
    }
    ll ans1,ans2=MAX+m;
    for(ll i=0; i<n; ++i) {
        rem+=(MAX-init[i]);
    }
    if(rem>m) ans1=MAX;
    else {
        ans1=MAX+(m-rem)/n;
        if((m-rem)%n) ++ans1;
    }
    cout<<ans1<<" "<<ans2<<el;

    return 0;
}


