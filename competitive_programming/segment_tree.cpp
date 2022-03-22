#include<bits/stdc++.h>
using namespace std;

//function to make segment tree for a corresponding array
void segment_tree(int arr[], int n, int *seg_tree){
    int s_tree[2*n];

    for (int i = 0; i < n; i++)
    {
        s_tree[2*n-i-1] = arr[n-i-1];
    }

    int unmodified_n = n;

    while(n > 1){

        for (int i = 2*n - 1; i > n; i -= 2)
        {
            s_tree[n - ((2*n - 1)-i)/2 - 1 ] = s_tree[i] + s_tree[i-1];  
        }

        n = n/2 ;
    }
    int i;
    for ( i = 1; i < 2*unmodified_n; i++)
    {
        seg_tree[i] = s_tree[i];
    }    
}
//sum Query function
int sum(int a, int b, int n, int tree[]) {
    a += n; b += n;
    int s = 0;
    while (a <= b) {
        if (a%2 == 1) s += tree[a++];
        if (b%2 == 0) s += tree[b--];
        a /= 2; b /= 2;
    }
    return s;
}

void add(int tree[], int arr[], int n, int pos, int k){
    arr[pos] += k;
    pos += n;

    while (pos >= 1)
    {
        tree[pos] += k;
        pos /= 2;
    }
    
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


    int s_tree[2*n];
    segment_tree(arr, n, s_tree);

    add(s_tree, arr, n, 2, 2);

}