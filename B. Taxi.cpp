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
    ll n,a,s=0,ans=0,arr[]={0,0,0,0,0};
    cin>>n;
    while(n--) {
        cin>>a;
        ++arr[a];
    }
    ans=arr[4];
    if(arr[3]>=arr[1]) {
        ans+=arr[1];
        arr[3]-=arr[1];
        ans+=arr[3]+(arr[2]/2)+(arr[2]%2);
    } else {
        ans+=arr[3];
        arr[1]-=arr[3];
        ll rem=2*arr[2];
        if(rem>=arr[1]) {
            ans+=(arr[1]/2);
            arr[2]-=(arr[1]/2);
            if(arr[1]%2) ++ans,--arr[2];
            ans+=(arr[2]/2)+(arr[2]%2);
        } else {
            ans+=arr[2];
            arr[1]-=(2*arr[2]);
            ans+=(arr[1]/4);
            if(arr[1]%4) ++ans;
        }
    }
    cout<<ans<<el;
    return 0;
}


