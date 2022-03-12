#include<bits/stdc++.h>
using namespace std;

void quickSort(int* arr, int n, int pivot)
{
    if(n <= 1)
    {
        return;
    }
    int S[n]; 
    int L[n];

    int ptrS = 0;
    int ptrL = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= pivot)
        {
            S[ptrS] = arr[i];
            ptrS++;
        }

        else
        {
            L[ptrL] = arr[i];
            ptrL++;
        }
    }

    quickSort(S, ptrS, S[ptrS - 1]);
    quickSort(L, ptrL, L[ptrL - 1]);

    for (int i = 0; i < ptrS; i++)
    {
        arr[i] = S[i];
    }

    for (int i = ptrS; i < ptrL; i++)
    {
        arr[i] = L[i - ptrL];
    }
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

    quickSort(arr, n, arr[n-1]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    
    
}