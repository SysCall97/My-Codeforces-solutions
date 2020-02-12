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

class pile {
public:
    ll first,last;
    pile(){first=last=0;}
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,q,A;
    cin>>n;
    pile a[n+1];
    for(int i=1; i<=n; ++i) {
        cin>>A;
        a[i].first=a[i-1].last+1;
        a[i].last=a[i-1].last+A;
    }
    cin>>m;
    for(int i=0; i<m; ++i) {
        cin>>q;
        ll lo=1,hi=n,mid;
        while(1) {
            mid=(lo+hi)/2;
            if(q>a[mid].last) lo=mid+1;
            else if(q<a[mid].first) hi=mid-1;
            else break;
        }
        cout<<mid<<el;
    }

    return 0;
}

