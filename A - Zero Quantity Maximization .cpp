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
    ll n, b, ans=0, bothZero=0;
    map<PI, ll> mp;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; ++i) cin>>a[i];
    for(ll i=0; i<n; ++i) {
        cin>>b;
        if(a[i]==0 && b==0) ++bothZero;
        else if(a[i]) {
            ll gcd = __gcd(a[i],b);
            b/=gcd;
            a[i]/=gcd;
            ++mp[{b,a[i]}];
            ans=max(ans, mp[{b,a[i]}]);
        }
    }
    cout<<ans+bothZero<<el;
    return 0;
}


