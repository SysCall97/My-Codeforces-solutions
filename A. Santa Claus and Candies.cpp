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
#define sum(n) n*(n+1)/2
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n==1 || n==2) cout<<1<<el<<n<<el;
    else {
        ll j=2;
        while(1) {
            if(sum(j)>n) {
                --j;
                break;
            }
            ++j;
        }
        cout<<j<<el;
        for(ll i=1; i<j; ++i) cout<<i<<" ";
        cout<<j+n-sum(j)<<el;
    }
    return 0;
}


