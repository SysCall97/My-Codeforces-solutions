/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,k,s,e;
    cin>>n>>m;
    vector<ll> point,driver,rider,ans(m,0);
    for(ll i=0; i<n+m; ++i) {
        cin>>k;
        point.pb(k);
    }
    for(ll i=0; i<n+m; ++i) {
        cin>>k;
        if(k) driver.pb(point[i]);
        else rider.pb(point[i]);
    }
    driver.pb(1e10);
    point.resize(0);
    if(m==1) cout<<n<<el;
    else {
        s=0,e=1;
        for(ll i=0; i<n; ++i) {
            while(rider[i] > driver[e]) {
                ++s;
                ++e;
            }
            if(abs(driver[s]-rider[i]) <= abs(driver[e]-rider[i])) ++ans[s];
            else ++ans[e];
        }
        for(auto it : ans) cout<<it<<" ";
        cout<<el;
    }

    return 0;
}

