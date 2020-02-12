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
    ll t; cin>>t;
    while(t--) {
        ll b, p, f, bp, cp;
        cin>>b>>p>>f>>bp>>cp;
        if(b%2) --b;

        if(b>=(2*p+2*f)) cout<<p*bp+f*cp<<el;
        else {
            if(bp>=cp) {
                if(b<=2*p) {
                    cout<<(b/2)*bp<<el;
                } else {
                    cout<<p*bp+((b-2*p)/2)*cp<<el;
                }
            } else {
                if(b<=2*f) {
                    cout<<(b/2)*cp<<el;
                } else {
                    cout<<f*cp+((b-2*f)/2)*bp<<el;
                }
            }
        }
    }
    return 0;
}
