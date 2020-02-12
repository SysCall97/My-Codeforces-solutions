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
    string ini;
    cin>>ini;
    vector<ll> of, on, of1;
    for(ll i=0; i<n; ++i) {
        if(ini[i]=='0') of.pb(i);
        else on.pb(i);
    }
    vector<PI> v(n);
    for(ll i=0; i<n; ++i) {
        cin>>v[i].x>>v[i].y;
        if(binary_search(all(of), i)) of1.pb(v[i].y);
    }
    sort(all(of1));
    sort(all(on));
    ll ans=on.size();

    for(ll sec=1; sec<=99999; ++sec) {
        ll cnt=0;
        for(ll i=0; i<n; ++i) {
            if(sec==v[i].y || ((sec-v[i].y)>=0 && (sec-v[i].y)%v[i].x==0)) {
                if(ini[i]=='0') ini[i]='1';
                else ini[i]='0';
            }
            if(ini[i]=='1') ++cnt;
        }
        ans=max(ans, cnt);
    }

    cout<<ans<<el;
    return 0;
}

