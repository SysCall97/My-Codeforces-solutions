/*****************************************************
 *link: http://codeforces.com/problemset/problem/75/C*
 *****************************************************/
#include<bits/stdc++.h>
using namespace std;
vector<int> divisors;

int gcd(int a, int b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}

void GetDivisors(int m)
{
    int sq=sqrt(m);
    for(int i=1; i<=sq; ++i) {
        if(!(m%i)) {
            divisors.push_back(i);
            divisors.push_back(m/i);
        }
    }
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    GetDivisors(gcd(a,b));
    sort(divisors.begin(),divisors.end());
    int n,high,low;
    int last=divisors.size();
    scanf("%d",&n);
    while(n--) {
        int maximum=0;
        scanf("%d%d",&low,&high);
        for(int i=last-1; i>=0; i--) {
            if(divisors[i]>=low && divisors[i]<=high) {
                maximum=divisors[i];
                break;
            }
        }
        if(maximum==0)
            printf("-1\n");
        else
            printf("%d\n",maximum);
    }
    return 0;
}

