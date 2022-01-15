#include<bits/stdc++.h>
using namespace std;

int getbin(int n){
    int bin=0;
    int i=0;
    while(n!=0){
        bin+=(pow(10,i))*(n%2);
        n=n/2;
        //cout<<bin<<" "<<n<<endl;
        i++;
    }
    return bin;
}
int findunique(int arr[], int n){
    int xor1=0;
    for(int i=0; i<n;i++){
        xor1=xor1^arr[i];
        cout<<getbin(xor1)<<endl;
    }
    cout<<getbin(xor1)   ;
    return 0;
    
    
    /*the principle here is this:
    [2, 3, 4, 4, 3, 2, 5]
    2^3^4^4^3^2^5
    A^A=0
    xor is commucative
    thus we are left with 5
    */

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    int arr1[n];
    for (int i=0; i<n; i++){
        cin>>arr1[i];
    }

    findunique(arr1,n);

}