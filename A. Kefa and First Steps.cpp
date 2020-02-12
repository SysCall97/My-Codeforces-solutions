/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,prevNum,num,counter=1,ans=-1;
    cin>>n;
    cin>>prevNum;
    for(int i=1; i<n; ++i) {
        cin>>num;
        if(num>=prevNum) ++counter;
        else {
            if(counter>ans) ans=counter;
            counter=1;
        }
        prevNum=num;
    }
    if(counter>ans) ans=counter;
    cout<<ans<<el;

    return 0;
}

