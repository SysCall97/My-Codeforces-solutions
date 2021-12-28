///***************************************************************
// *    Name:  KAZI NUR  ALAM MASHRY                             *
// *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
// *           CSE (14TH BATCH)                                  *
// ***************************************************************/
//#include<bits/stdc++.h>
//#define INF 0x3f3f3f3f
//#define el '\n'
//#define x first
//#define y second
//#define pi acos(-1.0)
//#define pb push_back
//#define mp make_pair
//#define all(v) v.begin(), v.end()
//#define mem(x,y) memset(x , y , sizeof(x))
//using namespace std;
//typedef long long ll;
//typedef pair<ll, ll> PI;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll n,k,m;
//    cin>>n>>k>>m;
//    vector<ll> v(n),cnt(n,0);
//    for(ll i=0; i<n; ++i) cin>>v[i];
//    sort(all(v));
//    reverse(all(v));
////    for(ll i:v) cout<<i<<" ";cout<<el;
//    ll sum=accumulate(all(v),0);
////    cout<<sum<<el;
//    double avg=(double)sum/n;
//    ll j=0;
//    for(ll i=0; i<m; ++i) {
//        ll av=(ll)ceil(avg);
//        if((v[n-1]<av && n>1) || ((ll)(n/(m-i))>k) && n>1) {
//            sum-=v[n-1];
//            v.pop_back();
//            --n;
//        } else {
//            ll prev=j%n;
//            while(cnt[j%n]>k) {
//                j=(++j)%n;
//                if(prev==j) break;
//            }
//            if(cnt[j%n]<k) {
//                ++v[j%n];
//                ++cnt[j%n];
//                ++j;
//                ++sum;
//            } else break;
//        }
//        avg=sum/n;
//        for(ll i:v) cout<<i<<" ";
//        cout<<el<<el;
//    }
//    cout<<avg<<el;
//
//    return 0;
//}
//











#include <bits/stdc++.h>
using namespace std;
const long long N = 100010;

long long a[N];

int main()
{
    long long n, k, m, i, sum=0, tp;
    long double mx;
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    // Sorting the array
    sort(a+1, a+n+1);
    // Checking for the case where none of the avengers is removed
    mx = (long double)(sum+min(m, n*k))/(long double)(n);

    for(int i=1;i<=min(n-1, m);i++)
    {
        sum -= a[i];
        tp = sum + min(m-i, (n-i)*k);
        mx = max(mx, (long double)(tp)/(long double)(n-i));
    }
    cout<<fixed<<setprecision(20)<<mx<<endl;
    return 0;
}
