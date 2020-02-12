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
#define Max           2000000
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

bool table[Max]= {0};
ll p[Max/10]= {0};
vector<ll> prime;

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
            p[j]=i;
            j++;
        }
        k=(k==2)?4:2;
    }
    p[0]=2,p[1]=3;
    for(ll i=0; ; ++i) {
        if(p[i]==0) break;
        prime.pb(p[i]);
    }
}

bool isPrime(ll n) {
    for(ll i=0; prime[i]*prime[i]<=n; i++) {
        if(!(n%prime[i])) return false;
    }
    return true;
}

ll solve(ll n) {
    ll ans=1, m=n;
    for(ll i=0; prime[i]*prime[i]*prime[i]<=n; ++i) if(n%prime[i]==0) {
            ll cnt=1;
            while(n%prime[i]==0) n/=prime[i], ++cnt;
            ans*=cnt;
        }
    ll sq=(ll)sqrt(n);
    if(isPrime(n)) ans*=2;
    else if(isPrime(sq) && sq*sq==n) ans*=3;
    else if(n!=1) ans*=4;
    return ans;
}

int main() {
    sieve();
    ll n;
    scanf("%lld",&n);
    printf("%lld",solve(n));
    return 0;
}

