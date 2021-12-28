/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
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
vector<int> coinVal;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,val1=0,val2=0,ans=0;
    cin>>n;
    for(int i=0; i<n; ++i) {
        cin>>m;
        val1+=m;
        coinVal.pb(m);
    }

    sort(all(coinVal));


    for(int i=n-1; i>=0; --i) {
        val1-=coinVal[i];
        val2+=coinVal[i];
        ++ans;
        if(val2>val1) break;
    }
    cout<<ans<<el;

    return 0;
}
