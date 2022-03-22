#include<bits/stdc++.h>
using namespace std;
#define len(int)(1e5)

int dp[len][len] = {{INT_MIN}};




int fun(int a, int b, int n){
    if(::dp[a][b] != INT_MIN) return ::dp[a][b];

    if(a < n && b < n){
        ::dp[a][b] = a + b - 2*(a & b);
        return a + b - 2*(a & b);
    }

    return a + b - 2*(a & b);
}

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif


    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int finalAns = 0;
    int temp1 = pow(10,9) + 7;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                finalAns += fun(fun(arr[i], arr[j], n), arr[k], n);
                finalAns = finalAns % temp1;
            }
            
        }
        
    }


    cout << finalAns;
    
    return 0;

    
}