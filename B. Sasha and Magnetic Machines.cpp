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
    ll n;
    cin>>n;
    vector<ll> vec(n),div[101];
    for(ll i=0; i<n; ++i) cin>>vec[i];
    sort(all(vec));

    for(ll i=1; i<101; ++i) {
        for(ll j=1; j*j<=i; ++j) {
            if(i%j==0) {
                if(j!=1) div[i].pb(j);
                div[i].pb(i/j);
            }
            if(j*j==i) div[i].pop_back();
        }
        sort(all(div[i]));
    }

    ll ans=accumulate(all(vec),0);
    ll ans2=ans;
    for(ll i=1; i<n; ++i) {
        ll j=vec[i];
        for(ll k=0; k<div[j].size(); ++k) {
            ll ans1=ans2-vec[0]-j;
            ans1+=(vec[0]*div[j][k])+(j/div[j][k]);
            ans=min(ans,ans1);
        }
    }
    cout<<ans<<el;

    return 0;
}

