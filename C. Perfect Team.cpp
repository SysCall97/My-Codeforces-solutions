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
    ll t;
    cin>>t;
    while(t--) {
        ll c, m, x, ans;
        cin>>c>>m>>x;
        ans=min(c, min(m, x));
        c-=ans, m-=ans, x-=ans;
        if(c>0 && m>0) {
            ll rem = max(c, m)-min(c, m);
            if(rem>=min(c, m)) ans+=min(c, m);
            else ans+=rem+(2*min(c-rem, m-rem)/3);
        }
        cout<<ans<<el;
    }
    return 0;
}

