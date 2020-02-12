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
    ll n, ans=0, m, cnt=0, cnt0=0;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        if(m>=0) {
            ans+=abs(m-1);
            if(m==0) ++cnt0;
        } else {
            ++cnt;
            ans+=abs(-1-m);
        }
    }
    if(cnt%2==1) {
        if(cnt0>0) ans+=0;
        else ans+=2;
    }

    cout<<ans<<el;
    return 0;
}

