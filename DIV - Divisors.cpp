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
#define Max           1000
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

bool table[Max]= {0};
ll prime[Max/4];
vector<ll> check, p;
void sieve() {
    ll i,j,k=4,n=Max;
    for(i=5; i*i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        k=(k==2)?4:2;
    }
    k=4;
    for(i=5,j=2; i<=n; i+=k) {
        if(table[i]==0) {
            prime[j]=i;
            j++;
        }
        k=(k==2)?4:2;
    }
    prime[0]=2, prime[1]=3;
    for(ll i=0; i<j; ++i) p.pb(prime[i]);
}

void func() {
    ll sz=p.size();
    for(ll i=0; i<sz-1; ++i) {
        for(ll j=i+1; j<sz; ++j) check.pb(prime[i]*prime[j]);
    }
    sort(all(check));
}

void solve() {
    vector<ll> v(1000005, 2), ans;
    for(ll i=2; i<1000005; ++i)
        for(ll j=i+i; j<1000005; j+=i) ++v[j];

    ans.pb(-1);
    for(ll i=2; i<1000001; ++i) if(v[i]>5 && binary_search(all(check), v[i])) ans.pb(i);

    ll sz=ans.size();
    for(ll i=9; i<sz; i+=9) if(i%9==0) printf("%lld\n", ans[i]);
}

int main() {
    sieve();
    func();
    solve();
    return 0;
}

