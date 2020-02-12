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
    vector<ll> div(n);
    map<ll, ll> mp;
    for(ll i=0; i<n; ++i) {
        cin>>div[i];
        ++mp[div[i]];
    }
    sort(all(div));
    for(ll i=n-1; i>0; --i) {
        for(ll j=i-1; j>-1; --j) {
            ll gcd=__gcd(div[i],div[j]);
            bool flag=1;
            for(ll k=1; k*k<=gcd; ++k) if(gcd%k==0 && (mp[k]!=2 || mp[gcd/k]!=2)) {
                    flag=0;
                    break;
                }
            if(flag) {
                cout<<max(div[i],div[j])<<" "<<min(div[i],div[j])<<el;
                return 0;
            }
        }
    }
}
