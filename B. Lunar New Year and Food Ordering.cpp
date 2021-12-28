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
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    using mypair = pair<ll, ll>;
    vector<PI> dish(n);
    vector<ll>type(m),unit(m);
    map<ll, ll> cost;
    for(ll i=0; i<n; ++i) cin>>dish[i].x;
    for(ll i=0; i<n; ++i) {
        cin>>dish[i].y;
        cost[i]=dish[i].y;
    }
    for(ll i=0; i<m; ++i) cin>>type[i]>>unit[i];
    vector<mypair> v(begin(cost), end(cost));
    sort(begin(v), end(v), [](const mypair& a, const mypair& b) {
        return a.second < b.second;
    });
    for(ll i=0; i<m; ++i) {
        ll ans=0;
        if(dish[type[i]-1].x>=unit[i]) {
            ans+=(unit[i]*dish[type[i]-1].y);
            dish[type[i]-1].x-=unit[i];
            unit[i]=0;
        } else {
            ans+=(unit[i]-abs(unit[i]-dish[type[i]-1].x))*dish[type[i]-1].y;
            unit[i]-=dish[type[i]-1].x;
            dish[type[i]-1].x=0;
            vector<mypair>::iterator it = v.begin();
            while(unit[i] && it != v.end()) {
                ll pos=it->first;
                if(dish[pos].x) {
                    if(unit[i]<=dish[pos].x) {
                        ans+=unit[i]*dish[pos].y;
                        dish[pos].x-=unit[i];
                        unit[i]=0;
                    } else {
                        ans+=dish[pos].x*dish[pos].y;
                        unit[i]-=dish[pos].x;
                        dish[pos].x=0;
                    }
                }
                ++it;
            }
        }
        if(unit[i]) ans=0;
        cout<<ans<<el;

    }

    return 0;
}
