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
ll a[200100];
ll b[200100];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n;
    ll lst=n/2, j=n;
    for(ll i=1; i<=lst; ++i) {
        a[i]=0;
        cin>>b[i];
    }
    for(ll i=1; i<=lst; ++i) a[j--] = b[i];

    j=lst;
    for(ll i=lst+1; i<n; ++i) {
        if(a[i]>a[i+1]) {
            a[j]=a[i]-a[i+1];
            a[i]=a[i+1];
        }
        --j;
    }
    for(ll i=1; i<=n; ++i) cout<<a[i]<<" ";
    cout<<el;

    ll i=1;
    j=lst;
    while(i<j) {
        if((a[i]<=a[i+1]) && (a[j]>=a[j-1])) {
            ++i;
            --j;
        }
        else {
            if(a[i]>a[i+1]) {
                if(j==lst) {
                    a[j]+=a[i];
                    a[i]=0;
                } else {
                    if(a[j]+(a[i]-a[i+1])<=a[j+1]) {
                        a[j]+=(a[i]-a[i+1]);
                        a[i]=a[i+1];
                    } else {
                        a[i]-=(a[j+1]-a[j]);
                        a[j]=a[j+1];
                        a[j-1]-=(a[i]-a[i+1]);
                        a[i+1]+=(a[i]-a[i+1]);
                    }
                }
            }
            ++i;
            --j;
        }
    }

    for(ll i=1; i<=n; ++i) cout<<a[i]<<" ";
    cout<<el;

    return 0;
}


