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
    ll n, ans=0;
    cin>>n;
    vector<ll> v(n), mp(150010, 0);

    for(ll i=0; i<n; ++i) cin>>v[i];
    ll sz=v.size();
    sort(all(v));

    for(ll i=0; i<sz; ++i) {
        if(v[i]!=1 && mp[v[i]-1]==0) {
            mp[v[i]-1]=1;
            ++ans;
        } else if(mp[v[i]]==0) {
            mp[v[i]]=1;
            ++ans;
        } else if(mp[v[i]+1]==0) {
            mp[v[i]+1]=1;
            ++ans;
        }
    }
    cout<<ans<<el;
    return 0;
}
