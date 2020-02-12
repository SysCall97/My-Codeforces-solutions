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
    ll n,l,a,ans=0,x=0,y=0,x1,y1;
    cin>>n>>l>>a;
    if(n) {
        cin>>x>>y;
        if(x/a>0) ans=x/a;
        if((x/a)*a==x && x) --ans;
        y=x+y;
    }
    for(ll i=1; i<n; ++i) {
        cin>>x1>>y1;
        if((x1-y)/a > 0) ans+=(x1-y)/a;
        if((x1-y)/a==x1-y && x1-y) --ans;
        y=x1+y1;
    }
    ll r=(l-y)/a;
    ans+=r;
    if(ans<=0) ans=0;
    cout<<ans<<el;

    return 0;
}
