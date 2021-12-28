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

ll solve(ll a, ll b, ll c) {
    if(a==b && b==c) return a;
    if(a>c) swap(a, c);
    ll ob = b;
    ll avg = (a+b+c)/3;
    if(b<a) {
        while(a<c && b<=a) ++b, --c;
    } else if(b>c) {
        while(b>=c) --b, ++c;
        ob=b;
    }

    while(ob && a<avg) {
        ++a;
        if(b>c) --b, --ob;
        else --ob, --c;
    }
    ll j = (b+c)/2;
    c -= (j-b), b = j;
    return max(a, max(b, c));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, c;
        cin>>a>>b>>c;
        cout<<solve(a, b, c)<<el;
    }
    return 0;
}
