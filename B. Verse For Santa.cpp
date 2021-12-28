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
        ll n, s, maxi=-1, pos, ans=-1, a, sum=0;
        cin>>n>>s;
        for(ll i=0; i<n; ++i) {
            cin>>a;
            if(sum+a<=s) {
                sum+=a;
                if(maxi < a) maxi = a, pos = i;
            } else if(ans==-1) {
                if(sum-maxi+a<=s) {
                    if(maxi<=a) ans = i + 1;
                    else sum = sum - maxi +a, ans = pos +1;
                } else {
                    ans = i + 1;
                }
            }
        }
        ans = (ans==-1)?0:ans;
        cout<<ans<<el;
    }
    return 0;
}

