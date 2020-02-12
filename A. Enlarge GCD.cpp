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
    ll n, gcd=0, maxi=15000000;
    vector<ll> mp(maxi+3), cnt(maxi+3);
    for(ll i=2; i<=maxi; ++i) if(!mp[i]){
        for(ll j=i; j<=maxi; j+=i) {
            if(!mp[j]) mp[j]=i;
        }
    }
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; ++i) {
        cin>>v[i];
        gcd=__gcd(gcd, v[i]);
        maxi=max(maxi, v[i]);
    }
    maxi=0;
    for(ll i=0; i<n; ++i) {
        ll x=v[i]/gcd;
        while(x>1) {
            ll p=mp[x];
            while(x%p==0) x/=p;
            ++cnt[p];
            maxi=max(maxi, cnt[p]);
        }
    }
    if(maxi) cout<<n-maxi<<el;
    else cout<<-1<<el;
    return 0;
}
