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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll sq=(ll)sqrt(n);
    if(sq*sq==n) cout<<2*sq<<el;
    else {
        ll ans=2*(sq+1);
        ll diff=(sq+1)*(sq+1)-n,k=0,s=diff+n;
        for(ll i=sq+1; ; --i,++k) {
            s-=i;
            if(s<=n) break;
        }
        if(s==n) ans-=(k+1);
        else ans-=k;
        cout<<ans<<el;
    }
    return 0;
}

