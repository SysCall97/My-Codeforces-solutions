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
    ll n;
    cin>>n;
    vector<PI> XY(n),AB(n),ans(n);
    for(ll i=0; i<n; ++i) cin>>XY[i].x>>XY[i].y;
    for(ll i=0; i<n; ++i) cin>>AB[i].x>>AB[i].y;
    sort(all(XY));
    sort(all(AB));
    reverse(all(AB));
    for(ll i=0; i<n; ++i) ans[i]={XY[i].x+AB[i].x, XY[i].y+AB[i].y};
    sort(all(ans));
    cout<<ans[0].x<<" "<<ans[0].y<<el;
    return 0;
}


