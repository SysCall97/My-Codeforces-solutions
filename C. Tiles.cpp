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
ll mod=998244353;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll w, h, ans=1;
    cin>>w>>h;
    ll t=w+h;
    for(ll i=1; i<=t; ++i) ans=(ans*2)%mod;
    cout<<ans<<el;
    return 0;
}
