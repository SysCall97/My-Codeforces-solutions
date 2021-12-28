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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, l, r, minAns=0, j=2;
    cin>>n>>l>>r;
    minAns=n-(l-1);
    for(ll i=0; i<l-1; ++i) {minAns+=j, j<<=1;}
    ll s=n-(r-1);
    j=pow(2, r-1);
    ll maxAns=s*j;
    s=r-1, j>>=1;
    for(ll i=s; i>0; --i) {maxAns+=j, j>>=1;}
    cout<<minAns<<" "<<maxAns<<el;
    return 0;
}

