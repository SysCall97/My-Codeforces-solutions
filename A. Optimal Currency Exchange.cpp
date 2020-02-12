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
    ll n, d, e;
    cin>>n>>d>>e;
    ll db[]={1, 2, 5, 10, 20, 50,  100};
    ll eb[]={5 , 10, 20, 50, 100, 200};
    ll ans=n;
    for(ll i=0; i<7; ++i) db[i]*=d;
    for(ll i=0; i<6; ++i) eb[i]*=e;

    for(ll i=0; i<7; ++i) {
        for(ll j=0; j<6; ++j)
            ans=min(ans, min((ans%db[i])%eb[j], (ans%eb[j])%db[i]));
    }
    ll ans1=n;
    for(ll i=6; i>-1; --i) {
        for(ll j=5; j>-1; --j)
            ans1=min(ans, min((ans1%db[i])%eb[j], (ans1%eb[j])%db[i]));
    }
    cout<<min(ans, ans1)<<el;
    return 0;
}
