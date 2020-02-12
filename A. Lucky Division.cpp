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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[14]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    bool b=0;
    cin>>n;
    for(int i=0; i<14; ++i) if(n==arr[i])
            b=1;
    if(!b) {
        for(int i=0; i<14; ++i) if(!(n%arr[i])) {
                b=1;
            }
    }
    if(b) cout<<"YES"<<el;
    else cout<<"NO"<<el;

    return 0;
}

