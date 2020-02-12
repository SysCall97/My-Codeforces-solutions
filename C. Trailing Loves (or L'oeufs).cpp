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
    ll n,b,ans=ll(1e19),j,cnt1,cnt2;
    cin>>n>>b;
    for(ll i=2; i*i<=b; ++i) {
        if(b%i==0) {
            cnt1=cnt2=0;
            while(b%i==0) {
                b/=i;
                ++cnt1;
            }
            ll N=n;
            while(N) {
                cnt2+=(N/i);
                N/=i;
            }
            ans=min(ans,cnt2/cnt1);
        }
    }
    if(b>1) {
        ll N=n;
        cnt2=0;
        while(N) {
            cnt2+=(N/b);
            N/=b;
        }
        ans=min(ans,cnt2);
    }
    cout<<ans<<el;

    return 0;
}

