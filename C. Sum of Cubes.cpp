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
    ll t, _x;
    cin >> t;
    while(t--) {
        bool flag = false;
        cin >> _x;
        ll _cbrt = ceil(cbrt(_x));
        for(ll i = 1; i <= _cbrt && !flag; ++i) {
            ll a = i * i * i;
            ll z = _x - a;
            ll cube_root = round(cbrt(z));
            if(cube_root > 0 && cube_root * cube_root * cube_root == z) 
                flag = true;
        }
        cout << (flag ? "YES" : "NO") << endl;
   }
    return 0;
}
