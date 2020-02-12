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
    ll n,k,i=0,ans=0; cin>>n>>k;
    vector<ll> p(n);
    for(ll i=0; i<n; ++i) cin>>p[i];
    string inp;cin>>inp;
    while(i<n) {
        vector<ll> m;
        while(i<n && inp[i]==inp[i+1]) m.pb(p[i++]);
        m.pb(p[i++]);
        sort(all(m));
        ll lst=m.size()-1;
        for(ll j=lst; j>lst-k && j>=0; --j) ans+=m[j];
    }
    cout<<ans<<el;

    return 0;
}

