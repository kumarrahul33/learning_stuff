
#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
 
int modulo_143(string s, int n)
{
    long long dp[n + 1][143] = { { 0 } };
 
   
    dp[0][0] = 1;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            int nxt = s[i] - '0';
 
            
            if (s[i] == '?')
                nxt = j;
 
            
            for (int k = 0; k < 143; k++) {
                int rem = (10 * k + nxt) % 143;
                dp[i + 1][rem] += dp[i][k];
                dp[i + 1][rem] %= MOD;
            }
            if (s[i] != '?')
                break;
        }
    }
    return (int)dp[n][7];
}

 
int main()
{
    
        // #ifndef ONLINE_JUDGE
    
        // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
        // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);
    
        // #endif
        
    string s;
    cin >> s;
    int n = s.size();
 
    cout << modulo_143(s, n);
 
    return 0;
}
