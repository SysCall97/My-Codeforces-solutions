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
ll n,k,a,b,c;
vector<ll> vec;

ll func(ll l, ll u) {
    ll i=lower_bound(all(vec),l)-vec.begin();
    ll j=upper_bound(all(vec),u)-vec.begin();
    ll x=j-i, mid=(l+u)/2, p;
    if(x==0) p=a;
    else p=b*x*(u-l+1);
    if(l==u || x==0) return p;
    return min(p,func(l,mid)+func(mid+1,u));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k>>a>>b;
    for(ll i=0; i<k; ++i) {
        cin>>c;
        vec.pb(c);
    }
    sort(all(vec));
    ll x=1<<n;
    cout<<func(1,x)<<el;
    return 0;
}

