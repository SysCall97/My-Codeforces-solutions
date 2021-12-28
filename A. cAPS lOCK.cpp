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
    string inp;
    cin>>inp;
    int counter=0;
    for(int i=1; inp[i]; ++i) if(inp[i]>='A' && inp[i]<='Z')
        ++counter;
    if((!counter && inp.size()==1) || counter==inp.size()-1) {
        for(int i=1; inp[i]; ++i) if(inp[i]>='A' && inp[i]<='Z')
            inp[i]=inp[i]-'A'+'a';
        if(inp[0]>='a' && inp[0]<='z') inp[0]=inp[0]-'a'+'A';
    }
    cout<<inp<<el;
    return 0;
}

