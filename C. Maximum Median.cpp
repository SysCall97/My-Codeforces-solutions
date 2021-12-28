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
    ll n, k;
    scanf("%lld%lld", &n, &k);
    vector<ll> v(n);
    for(ll i=0; i<n; ++i) cin>>v[i];
    if(n==1) {
        printf("%lld\n", v[0]+k);
        return 0;
    }
    sort(all(v));
    ll sz=(n>>1)+1, sum=0;
    v.erase(v.begin(), v.begin()+(n>>1));

    for(ll i=0; i<sz-1; ++i) sum+=(v[sz-1]-v[i]);
    if(sum<k) {
        k-=sum;
        cout<<v[sz-1]+(k/sz)<<el;
    } else if(sum>k) {
        ll s=0;
        for(ll i=1; i<sz; ++i) {
            s+=(i*(v[i]-v[i-1]));
            if(s>k) {
                cout<<v[i-1]+(k-(s-i*(v[i]-v[i-1])))/i<<el;
                return 0;
            }
        }
    } else {
        cout<<v[sz-1]<<el;
    }
    return 0;
}

