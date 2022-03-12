#include<bits/stdc++.h>
using namespace std;

void merge(int* a, int* b, int* arr, int alen, int blen)
{
    int ptr1 = 0; int ptr2 = 0;
    int n = alen + blen;
    int finalArr[n];

    for (int i = 0; i < n; i++)
    {
        if((a[ptr1] > b[ptr2]) && ptr2 < blen && ptr1 < alen )
        {
            finalArr[i] = b[ptr2];
            ptr2++;
        }

        else if(a[ptr1] <= b[ptr2] && ptr1 < alen && ptr2 < blen)
        {
            finalArr[i] = a[ptr1];
            ptr1++;
        }

        else
        {
            if(ptr1 >= alen)
            {
                finalArr[i] = b[ptr2];
                ptr2++;
                if(ptr2 >= blen) break;
            }

            else if (ptr2 >= alen)
            {
                finalArr[i] = a[ptr1];
                ptr1++;
                if(ptr1 >= alen) break;
            }
        }
        

    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = finalArr[i];
    }
    
    return;
    
}

void merge_sort(int* arr, int n)
{
    if(n == 1)
    {
        return;
    }

    int a[n/2]; int b[n-n/2];

    for (int i = 0; i < n/2; i++)
        a[i] = arr[i];
    

    for (int j = 0; j < n-n/2; j++)
        b[j] = arr[n/2 + j];
    
    
    merge_sort(a, n/2);
    merge_sort(b, n-n/2);

    merge(a, b, arr, n/2, n-n/2);
    return;
}


int main(){
    #ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    
    merge_sort(arr, n);
    
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }
    
              
}
