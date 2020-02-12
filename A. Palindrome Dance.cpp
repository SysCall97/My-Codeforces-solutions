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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,a,b,deflt,ans=0;
    ll arr[30];
    cin>>n>>a>>b;
    deflt=min(a,b);
    for(ll i=0; i<n; ++i) cin>>arr[i];
    ll left=0, right=n-1;
    while(left<=right) {
        if(left==right && arr[left]==2) ans+=deflt;
        else {
            if(arr[left]==2 && arr[right]==2) ans+=2*deflt;
            else if(arr[left]==2 || arr[right]==2) {
                if(arr[right]==0) ans+=a;
                else if(arr[left]==0) ans+=a;
                else if(arr[right]==1) ans+=b;
                else if(arr[left]==1) ans+=b;
            }
            else if(arr[left]!=arr[right]) {
                ans=-1;
                break;
            }
        }
        ++left;
        --right;
    }
    cout<<ans<<el;

    return 0;
}
