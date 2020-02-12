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
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,x,y,d;
    cin>>t;
    while(t--) {
        cin>>n>>x>>y>>d;
        ll pageBack=x-1,pageFront=n-x;
        ll b=y-1,f=n-y;
        ll side1=INF,side2=INF,side3=INF;
        if(b%d==0) {
            side1=pageBack/d;
            if(pageBack%d) ++side1;
            side1+=(b/d);
        }
        if(f%d==0) {
            side2=pageFront/d;
            if(pageFront%d) ++side2;
            side2+=(f/d);
        }
        if(abs(y-x)%d==0) side3=abs(y-x)/d;
        ll ans=min(min(side1,side2),side3);
        if(ans==INF) ans=-1;
        cout<<ans<<el;
    }

    return 0;
}


