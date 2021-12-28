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
    ll n;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        ll x,y,x1,x2,x3,x4,y1,y2,y3,y4,counter=8;;
        bool b=1;
        cin>>x>>y;
        x1=x-1;
        x2=x-2;
        x3=x+1;
        x4=x+2;
        y1=y-1;
        y2=y-2;
        y3=y+1;
        y4=y+2;
        if(x1<1 || y2<1) --counter;
        if(x1<1 || y4>8) --counter;
        if(x2<1 || y1<1) --counter;
        if(x2<1 || y3>8) --counter;
        if(x3>8 || y2<1) --counter;
        if(x3>8 || y4>8) --counter;
        if(x4>8 || y1<1) --counter;
        if(x4>8 || y3>8) --counter;
        printf("Case %lld: %lld\n",i+1,counter);

    }
    return 0;
}


