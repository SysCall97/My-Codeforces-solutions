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

ll s(ll n) {
    ll ans=0;
    while(n) {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

ll d(ll n) {
    ll ans=0,k=1;
    while(n>10) {
        ans=(ans)+((n%10)*k);
        n/=10;
        k*=10;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n;
    m=log10(n);
    m=(9*m)+((n/pow(10,m))-1);
    n=d(n)+1;
    cout<<s(n)+m<<el;
    return 0;
}


