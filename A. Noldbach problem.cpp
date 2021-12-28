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
#define Max 2000
bool table[Max]= {0};
ll prime[Max];
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seieve();
    ll n, k, counter=0;
    cin>>n>>k;
    vector<ll> p;
    for(ll i=0; prime[i]<=n; ++i) p.pb(prime[i]);
    ll sz=p.size();
    for(ll i=0; i<sz; ++i) {
        if(counter==k) break;
        ll prm=p[i]-1;
        for(ll j=0; prime[j]<=prm; ++j) if(prime[j]+prime[j+1]==prm) {
            ++counter;
            break;
        }
    }
    if(counter==k) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
