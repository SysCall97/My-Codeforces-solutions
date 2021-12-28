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
    ll n, k, min = INF, ans = 1;
    cin >> n >> k;
    vector<ll> v(n+5, 0), acc(n, 0);
    for(ll i = 1; i <= n; ++i) {
        cin >> v[i];
        acc[i] = v[i] + acc[i-1];
        if(i >= k) {
            acc[i] -= v[i-k];
            if(acc[i] < min) {
                min = acc[i];
                ans = i-k+1;
            }
        }
    }
    
    cout << ans << el;

    return 0;
}
