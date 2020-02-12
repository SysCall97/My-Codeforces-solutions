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
    ll n; cin>>n;
    vector<ll> v(n), flag(n, 0);
    for(ll i=0; i<n; ++i) cin>>v[i];

    ll l=1, h=n-2, a=1, b=(n==1)?0:1, t1=v[l-1], t2=v[h+1];
    bool b1=(t1<=t2)?true:false, b2=(t2<=t1)?true:false;
    while(l<=h) {
        if(b1 && flag[l]==0) {
            ++a, t1+=v[l], flag[l]=1;
            ++l;
        }
        if(b2 && !(b1 && b2 && l==h) && flag[h]==0) {
            ++b, t2+=v[h], flag[h]=1;
            --h;
        }
        if(t2==t1) b1=b2=true;
        else if(t2<t1) b2=true, b1=false;
        else b1=true, b2=false;
    }
    cout<<a<<" "<<b<<el;
    return 0;
}

