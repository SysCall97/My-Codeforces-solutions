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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,s;
    cin>>n;
    vector<ll>m(n),maxi(n);
    for(ll i=0; i<n; ++i) {
        cin>>m[i];
        maxi[i]=-1;
        for(ll j=0; j<m[i]; ++j) {
            cin>>s;
            maxi[i]=max(maxi[i],s);
        }
    }
    ll maximum=*max_element(all(maxi)), ans=0;
    for(ll i=0; i<n; ++i) ans+=m[i]*(maximum-maxi[i]);
    cout<<ans<<el;

    return 0;
}


