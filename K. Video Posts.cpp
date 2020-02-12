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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),ans;
    for(ll i=0; i<n; ++i) cin>>a[i];
    ll sum=accumulate(all(a),0);
    if(sum%k) cout<<"No";
    else {
        sum/=k;
        ll s,cnt,pos=0;
        bool b=1;
        while(pos<n && b) {
            s=0,cnt=0;
            while(s<sum && pos<n) s+=a[pos++], ++cnt;
            if(s>sum) b=0;
            ans.pb(cnt);
        }
        if(!b) cout<<"No";
        else {
            cout<<"Yes\n";
            for(ll i:ans) cout<<i<<" ";
        }
    }
    cout<<el;

    return 0;
}
