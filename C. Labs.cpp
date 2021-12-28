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
    ll n;
    cin>>n;
    ll v[n][n], m=1, b=0;
    for(ll i=0; i<n; ++i) {
        if(b) {
            for(ll j=0; j<n; ++j) v[j][i] = m++;
            b=0;
        } else {
            for(ll j=n-1; j>=0; --j) v[j][i] = m++;
            b=1;
        }
    }

    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<n; ++j) cout<<v[i][j]<<" ";
        cout<<el;
    }
    return 0;
}
