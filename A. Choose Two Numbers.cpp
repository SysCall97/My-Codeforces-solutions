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
    ll n, m, a1=-1, a2=-1;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        if(m>a1) a1=m;
    }
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        if(m>a2) a2=m;
    }
    cout<<a1<<" "<<a2<<el;

    return 0;
}
