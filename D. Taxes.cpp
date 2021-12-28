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

bool isPrime(ll number) {
    for(ll i=2; i*i<=number; ++i) {
        if(!(number%i)) return false;
    }
    return true;
}

ll func(ll n) {
    if(isPrime(n)) return 1;
    else {
        ll ans=INF, m=3*n;
        for(ll i=2; i*i<=m; ++i) {
            if(isPrime(n-i)) {
                ll total=1+func(i);
                ans=min(ans, total);
            }
        }
        return ans;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    cout<<func(n)<<el;
    return 0;
}


