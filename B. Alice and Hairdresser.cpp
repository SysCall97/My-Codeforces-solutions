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
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,l,t,p,d,ans=0;
    cin>>n>>m>>l;
    vector<ll> a;
    cin>>p;
    a.pb(p);
    if(p>l) ++ans;

    for(ll i=1; i<n; ++i) {
        cin>>p;
        a.pb(p);
        if(a[i-1]<=l && p>l) ++ans;
    }
    for(ll i=0; i<m; ++i) {
        cin>>t;
        if(t) {
            cin>>p>>d;
            --p;
            a[p]+=d;
            if(p>0 && p<n-1) {
                if(a[p-1]<=l && a[p+1]<=l && a[p]>l && a[p]-d<=l) ++ans;
                else if(a[p-1]>l && a[p+1]>l && a[p]>l && a[p]-d<=l) --ans;
            } else {
                if(p==0 && a[p]>l && a[p]-d<=l && a[1]<=l) ++ans;
                else if(p==n-1 && a[p]>l && a[p]-d<=l && a[n-2]<=l) ++ans;
            }
        } else {
            cout<<ans<<el;
        }
    }
    return 0;
}


