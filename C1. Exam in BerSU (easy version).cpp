/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, total = 0;
    cin>>n>>m;
    vector<ll> vec(n), ans(n), v;
    for(ll i=0; i<n; ++i) {
        cin>>vec[i];
        total+=vec[i];
        if(total<=m) {
            cout<<0<<" ";
        } else {
            ll j = total, k = i-1, cnt = 0;
            while(j>m) {
                j -= v[k--];
                ++cnt;
            }
            cout<<cnt<<" ";
        }
        v.pb(vec[i]);
        sort(all(v));
    }

    return 0;
}


