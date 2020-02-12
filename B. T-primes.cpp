/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
#define Max 9000000
bool table[Max]= {0};
ll last;
void seieve(vector<ll>& prime) {
    prime.pb(2);
    prime.pb(3);
    ll i,j,k=4,n=Max;
    for(i=5; i*i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        k=(k==2)?4:2;
    }
    k=4;
    for(i=5; i<=n; i+=k) {
        if(table[i]==0) prime.pb(i);
        k=(k==2)?4:2;
    }
}

bool isPrime(ll n, vector<ll>& prime) {
    if(n==1) return 0;
    bool b=0;
    ll first=0,lst=last,mid;
    while(first<=lst) {
        mid=(first+lst)/2;
        if(prime[mid]<n) first=mid+1;
        else if(prime[mid]>n) lst=mid-1;
        else {b=1;break;}
    }

    return b;
}

int main() {
    vector<ll> prime;
    seieve(prime);
    last=prime.size();
    ll t,n;
    scanf("%I64d",&t);
    while(t--) {
        scanf("%I64d",&n);
        ll sq=sqrt(n);
        if(sq*sq!=n) printf("NO\n");
        else if(isPrime(sq,prime)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

