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
#define TEST          int test; scanf("%d",&test);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

vector<ll> func(ll n) {
    vector<ll> v;
    for(ll i=2; i*i<=n; ++i) if(n%i==0) {
        v.pb(i);
        while(n%i==0) n/=i;
    }
    if(n>1) v.pb(n);
    return v;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<PI> v(n);
    for(ll i=0; i<n; ++i) cin>>v[i].first>>v[i].second;
    sort(allr(v));
    vector<ll> primeFactors=func(v[0].first);
    for(auto i: primeFactors) {
        bool b=true;
        for(ll j=1; j<n; ++j) if(v[j].first%i && v[j].second%i) {
            b=false;
            break;
        }
        if(b) {
            cout<<i<<el;
            return 0;
        }
    }

    primeFactors.clear();
    primeFactors=func(v[0].second);
    for(auto i: primeFactors) {
        bool b=true;
        for(ll j=1; j<n; ++j) if(v[j].first%i && v[j].second%i) {
            b=false;
            break;
        }
        if(b) {
            cout<<i<<el;
            return 0;
        }
    }
    cout<<-1<<el;
    return 0;
}
