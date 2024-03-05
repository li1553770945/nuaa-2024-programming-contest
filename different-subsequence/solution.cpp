#include <iostream>
#include <string>
using namespace std;
int dp[2][5010];
int p = 1e9+7;
int numDistinct(string s, string t) {
        s = " " +s;
        t = " "+ t;
        dp[0][0] = 1;
        dp[1][0] = 1;
        for(int i=1;i<s.length();i++)
        {
            for(int j =1;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    dp[i%2][j] = (dp[(i-1)%2][j-1] + dp[(i-1)%2][j])%p;
                }
                else
                {
                    dp[i%2][j] = dp[(i-1)%2][j];
                }
            }
        }
        return dp[ (s.length()-1)%2][t.length()-1] % p;
    }

int main() {
    string s,t;
    cin>>s>>t;
    cout<<numDistinct(s,t)<<endl;
    return 0;
}
