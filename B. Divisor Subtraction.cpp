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
#define Max 500000
using namespace std;
typedef long long ll;
vector<ll> prime;
vector<bool> table;
void seieve() {
    for(ll i=0; i<Max; ++i) table.pb(0);
    ll pri[Max/2];
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
            pri[j]=i;
            j++;
        }
        k=(k==2)?4:2;
    }
    pri[0]=2,pri[1]=3;
    for(i=0; i<j; ++i) prime.pb(pri[i]);
}

ll func(ll n) {
    for(ll i=0; prime[i]*prime[i]<=n; ++i) if(n%prime[i]==0)
        return prime[i];
    return n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seieve();
    ll n,ans=INF,d,output=0;
    cin>>n;
    if(n%2) {
        n-=func(n);
        ++output;
    }
    cout<<output+n/2<<el;
    return 0;
}


