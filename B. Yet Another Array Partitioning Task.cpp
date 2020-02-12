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
    ll n,m,k; cin>>n>>m>>k;
    vector<ll> v(n),s(n);
    for(ll i=0; i<n; ++i) {
        cin>>v[i];
        s[i]=v[i];
    }
    sort(all(s));
    reverse(all(s));
    ll sum=0;
    for(ll i=0; i<m*k; ++i) sum+=s[i];
    cout<<sum<<el;

    return 0;
}

