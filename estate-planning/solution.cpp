#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;
struct Op
{
    /* data */
    int type;
    int i;
    int num;
    bool operator <(const Op &rhs)
    {
        if(i<rhs.i)
        {
            return true;
        }
        else if (i==rhs.i)
        {
            if(type<rhs.type)
            {
                return true;
            }
            else if(type == rhs.type)
            {
                return num < rhs.num;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
}op[MAXN];

void solve() {
    int n,m,x,v;
    cin>>n>>m>>x>>v;
    int ans = 0;
    for (int i = 1; i <= n; i++) 
    {
        cin>>op[i].i>>op[i].num;
        op[i].type = 1;

    }
     for (int i = n+1; i <= n+m; i++) 
    {
        cin>>op[i].i>>op[i].num;
        op[i].type = 2;

    }
    sort(op + 1, op + n + m + 1);

    int last = 0;
    long long have = v;
    for (int i = 1; i <= n+m; i++) 
    {
        if(op[i].type==1)
        {
            have += op[i].num;
        }
        else
        {
            
            have += (op[i].i - last) * x;
            if (have >= op[i].num) 
            {
                have -= op[i].num;
                ans++;
            }
            last = op[i].i;
        }
        
    }
    cout<<ans<<endl;
}

int main() {
    int tcase; scanf("%d", &tcase);
    while (tcase--) solve();
    return 0;
}