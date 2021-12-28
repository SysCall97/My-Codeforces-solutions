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
#define Max 3200000
bool table[Max]= {0};
ll prime[Max/10];
void seieve() {
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

bool isPrime(ll val) {
    for(ll i=0; prime[i]*prime[i]<=val; ++i) if(val%prime[i]==0)
        return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seieve();
    ll t;
    cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        if(a-b==1) {
            if(isPrime(a+b)) cout<<"YES\n";
            else cout<<"NO\n";
        } else cout<<"NO\n";
    }
    return 0;
}
