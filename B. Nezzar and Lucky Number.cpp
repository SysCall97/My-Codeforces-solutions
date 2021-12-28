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
    cin.tie(0), cout.tie(0);
    ll t, q, d, n;
    cin >> t;
    while(t--) {
        cin >> q >> d;
        while(q--) {
            cin >> n;
            bool flag = false;
            if(n >= d*10) flag = true;
            else if(n%d == 0)flag = true;
            else {
                while (n>=d && !flag) {
                    flag = (n%d == 0);
                    n -= 10;
                }
            }
            cout << (flag ? "YES" : "NO") << el;
        }
   }
    return 0;
}
