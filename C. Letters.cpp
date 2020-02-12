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
ll a[int(2e5)+100];
ll qSum[int(2e5)+100]={0};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,q;
    cin>>n>>m;
    for(ll i=0; i<n; ++i) {
        cin>>a[i];
        qSum[i+1]=qSum[i]+a[i];
    }
    qSum[n+1]=ll(1e19);
    while(m--) {
        cin>>q;
        ll low=1, high=n, ans;
        while(true) {
            ll mid=(low+high)/2;
            if(q>qSum[mid-1] && q<qSum[mid+1] && q<=qSum[mid]) {
                ans=mid;
                break;
            } else if(q<=qSum[mid-1]) {
                high=mid-1;
            } else if(q>qSum[mid]) {
                low=mid+1;
            }
        }
        cout<<ans<<" "<<q-qSum[ans-1]<<el;
    }

    return 0;
}

