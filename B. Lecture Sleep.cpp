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
    ll n, k, m, ans = 0, additional = 0;
    cin>>n>>k;
    vector<ll> a(n), t(n), pre(n);
    for(ll i=0; i<n; ++i) cin>>a[i];
    for(ll i=0; i<n; ++i) cin>>t[i];
    for(ll i=0; i<n; ++i) {
        if(i) pre[i] = pre[i-1];
        if(t[i]) ans+=a[i];
        else pre[i]+=a[i];
    }
    for(ll i=k-1; i<n; ++i)
        additional = max(additional, pre[i]-(i>=k?pre[i-k]:0));
    cout<<ans+additional<<el;

    return 0;
}
