#include<bits/stdc++.h>
using namespace std;

// binary indexed tree is method to calculae the range sum queries in O(logN) time complexity


int ArraySum(int *arr, int p, int q){
    int temp = 0;
    for(int i = p; i <= q; i++) temp += arr[i-1];

    return temp;
}

int P(int k){
    int i = 0;
    int p = 0;
    while(k >= 1<<i){
        if(k % (1<<i) == 0){
            p = i;
        } 
        i++;

    } 

    return 1<<p;
}

int Greatest_pow2(int k){
    int i = 0;
    while(k >= 1<<i) i++;

    return 1<<(i-1);
}

void make_tree(int *arr, int n){
    int arrCopy[n];
    for (int i = 0; i < n; i++)
    {
        arrCopy[i] = arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        int p = min(i - P(i) + 1 , i);
        int q = max(i - P(i) + 1 , i);

        arr[i-1] = ArraySum(arrCopy, p, q);
    }
    
}

//alternate method to find the sum of first k elements

// int range_sum(int k) {
//     int s = 0;
//     while (k >= 1) {
//         s += tree[k];
//         k -= k&-k;
//     }
//     return s;
// }

int range_sum(int arrTree[], int k, int n){
    int ptr = 1;
    int finalSum = 0;
    int end = k;

    while (k != 0)
    {
        finalSum += arrTree[ptr + Greatest_pow2(k) - 2];
        //cout << finalSum << " " << ptr << " " << arrTree[ptr + Greatest_pow2(k) - 2] << " " << Greatest_pow2(k) << " " << k <<endl ;
        ptr += Greatest_pow2(k);

        k -= Greatest_pow2(k);
    }


    return finalSum;

}



int main(){
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
    make_tree(arr, n);

    cout << range_sum(arr, 6, n);
}