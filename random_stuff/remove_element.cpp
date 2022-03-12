#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = 1;
    for(int x : arr){
        if(x == temp)
        {
            temp++;
        }
    }

    if(temp == 1){
        cout << -1;
        return 0;
    }
    cout << n - temp +1;
    return 0;


    
}