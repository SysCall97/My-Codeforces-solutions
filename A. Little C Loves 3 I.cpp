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
    ll n,a,b,c;
    cin>>n;
    a=n/2;
    if(a%3==0) ++a;
    n-=a;
    b=n/2;
    if(b%3==0) ++b;
    c=n-b;
    if(c%3==0) {
        --c;
        if((b+1)%3) ++b;
        else if((a+1)%3) ++a;
        else{
            --c;
            b+=2;
        }
    }

    cout<<a<<" "<<b<<" "<<c<<el;
    return 0;
}


