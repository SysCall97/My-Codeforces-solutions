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
typedef unsigned long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll b,k,val;cin>>b>>k;
    bool isEven=1;
    for(ll i=0; i<k; ++i) {
        cin>>val;
        isEven=(((val*b)%2 && i!=k-1) || (i==k-1 && val%2))?!isEven:isEven;
    }
    if(isEven) cout<<"even\n";
    else cout<<"odd\n";

    return 0;
}
