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
bool b[100100];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll k,l,m,n,d,counter=0;;
    cin>>k>>l>>m>>n>>d;

    for(ll i=1; i<=d; ++i) b[i]=false;

    for(ll i=k; i<=d; i+=k) if(!b[i]){
        b[i]=true;
        ++counter;
    }

    for(ll i=l; i<=d; i+=l) if(!b[i]){
        b[i]=true;
        ++counter;
    }

    for(ll i=m; i<=d; i+=m) if(!b[i]){
        b[i]=true;
        ++counter;
    }

    for(ll i=n; i<=d; i+=n) if(!b[i]){
        b[i]=true;
        ++counter;
    }

    cout<<counter<<el;
    return 0;
}


