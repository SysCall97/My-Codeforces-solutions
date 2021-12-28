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
    ll n,a,b,low=-1,high=-1;
    char ch;
    cin>>n;
    while(n--) {
        cin>>ch>>a>>b;
        if(a>b) swap(a,b);
        if(ch=='+') {
            low=max(low,a);
            high=max(high,b);
        } else {
            if(low<=a && high<=b) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }


    return 0;
}

