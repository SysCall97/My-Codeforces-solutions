/***************************************************************
 *    Name:  KAZI NUR ALAM MASHRY                             *
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
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        ll val = 0, inp;
        vector<pair<ll, PI>> p;
        vector<PI> p1;

        for(size_t i = 0; i < n; ++i) {
            cin >> inp;
            p1.pb(mp(inp, i));
        }
        
        sort(allr(p1));

        for(ll i = 1, j = 1; i <= n; i+=2, j++) {
            val += (2 * (j * p1[i-1].x));
            p.pb(mp(p1[i-1].y, mp(p1[i-1].x, j)));
            if(i+1 <= n) {
                val += (2 * (j * p1[i].x));
                p.pb(mp(p1[i].y, mp(p1[i].x, ((-1) * j))));
            }
        }

        sort(all(p));
        cout << val << endl << 0 << ' ';
        for(size_t i = 0; i < n; ++i) {
            cout << p[i].y.y << ' ';
        }
        cout << endl;

    }
    return 0;
}
