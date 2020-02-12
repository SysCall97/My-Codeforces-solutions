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
ll n, m, mod = 1000000007;
vector<ll> v(1100, 0);
#define Max 10000
bool table[Max]= {0};
int prime[Max/5];
void seive() {
    int i,j,k=4,n=Max;
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
    prime[0]=2,prime[1]=3;
}


ll f(ll n, ll p) {
    ll s = 1;
    for(ll i=1; i<=p; ++i) s = (s*n)%mod;
    return s;
}

int main() {
    seive();
    cin>>n>>m;

    ll x = n+2*m-1;
    for(ll i=0; prime[i]<=x; ++i) {
        ll y = x, s = 0;
        while(y>0) {
            s += (y/prime[i]);
            y /= prime[i];
        }
        v[prime[i]] = s;
    }

    x = 2*m;
    for(ll i=0; prime[i]<=x; ++i) {
        ll y = x, s = 0;
        while(y>0) {
            s += (y/prime[i]);
            y /= prime[i];
        }
        v[prime[i]] -= s;
    }

    x = n-1;
    for(ll i=0; prime[i]<=x; ++i) {
        ll y = x, s = 0;
        while(y>0) {
            s += (y/prime[i]);
            y /= prime[i];
        }
        v[prime[i]] -= s;
    }

    x = n+2*m-1;
    ll ans = 1;
    for(ll i = 0; prime[i]<=x; ++i) {
        ans = ( ans * f(prime[i], v[prime[i]]) )%mod;
    }
    cout<<ans<<el;
    return 0;
}

