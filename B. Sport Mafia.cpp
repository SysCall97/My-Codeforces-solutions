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
    ll n, k;
    cin>>n>>k;
    ll ae=0, ag=1, oe=1, og=0;
    ll c=0;
    for(ll i=2; i<=n; ++i) {
        if(c==0) c+=(++ag);
        else ++ae, --c;
//        if(c==0) c+=(++og);
//        else ++oe, --c;
    }
    cout<<ae<<el;
    return 0;
}