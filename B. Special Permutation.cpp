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
    ll t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        if((a < b && b-1 >= (n/2) && (n-a) >= (n/2)) || (a > b && b >= (n/2) && (n-a+1) >= (n/2))) {
            cout << a << ' ';
            for (size_t i = n; i >= 1; i--) {
                if(i != a && i != b) {
                    cout << i << ' ';
                }
            }
            
            cout << b << el;
        } else {
            cout << -1 <<el;
        }
    }
    
    return 0;
}
