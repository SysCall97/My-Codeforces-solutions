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
    ll n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;
    ll ans=(n/a)*p+(n/b)*q;
    ll g=__gcd(a,b);
    if(min(a,b)!=1 && g==min(a,b)) ans-=(n/max(a,b))*min(p,q);
    if(g==1) ans=(ans-(n/(a*b))*(p+q))+(n/(a*b))*max(p,q);
    else if(g>1 && g!=min(a,b)) ans-=(n/(a*b/g))*min(p,q);
    cout<<ans<<el;
    return 0;
}
