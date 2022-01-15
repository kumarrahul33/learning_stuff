#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int m){
    for(int i=0;i<m-1;i++){
        if(arr[i]%arr[i+1]!=0){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<m;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int m;
    //cout<<n<<endl;
    for(int i=0; i<n; i++){
        cin>>m;
        int arr[m];
        for(int j=0;j<m;j++){
            cin>>arr[j];
            //cout<<i<<" "<<arr[i]<<endl;
        }
        
        fun(arr,m);
    }



}