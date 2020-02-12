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

ll func(vector<ll>& v, ll n) {
    ll ans = -1;
    ll startingPoint = 0, endingPoint;

    while(startingPoint<n) {
        endingPoint = startingPoint;
        while(endingPoint+1<n && 2*v[endingPoint]>=v[endingPoint+1]) ++endingPoint;
        ans = max(ans, endingPoint-startingPoint+1);
        startingPoint = endingPoint+1;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    bool b = false;
    cin>>n;
    vector<ll> vec(n);
    for(ll i=0; i<n; ++i) {
        cin>>vec[i];
        if(i && 2*vec[i-1]>=vec[i]) b = true;
    }
    if(b) cout<<func(vec, n)<<el;
    else cout<<1<<el;
    return 0;
}
