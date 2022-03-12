#include<bits/stdc++.h>
using namespace std;
int fun(int a, int b){
    return a + b - 2*(a & b);
}

int main()
{
    // #ifndef ONLINE_JUDGE

    // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    // #endif

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
                finalAns += fun(fun(arr[i], arr[j]), arr[k]);
                finalAns = finalAns % temp1;
            }
            
        }
        
    }


    cout << finalAns;
    
    return 0;

    
}