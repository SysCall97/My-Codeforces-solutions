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
ll n,a,b,cnt=0,m;
bool Continue=1;
vector<ll> v;

void me() {
    for(ll i=0; i<n; ++i) if(v[i]>0) {
            v[i]-=a;
            if(v[i]<0) v[i]=0;
            if(v[i]+b>=v[i]+a && v[i]>0) Continue=0;
            else v[i]=0;
            return;
        }
    Continue=0;
    return;
}

void slavik() {
    for(ll i=0; i<n; ++i) if(v[i]!=0) {
            v[i]+=b;
            return;
        }
    if(v[n-1]>0) v[n-1]+=b;
    return;
}

ll operate() {
    for(ll i=0; ; ++i) {
        if(i%2==0) {
            me();
            if(!Continue) break;
        } else {
            slavik();
            sort(all(v));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>a>>b;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        v.pb(m);
    }
    sort(all(v));
    operate();
    for(ll i=0; i<n; ++i) if(v[i]==0) ++cnt;
    cout<<cnt<<el;
    return 0;
}
