#include<bits/stdc++.h>
using namespace std;
//if in an array all number are present thrice except one then this program 
//will find that number
int getbit(int n, int pos){
    return ((n&(1<<pos))!=0);
}

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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int arr1[32];
    for(int i=0; i<32; i++){
        arr1[i]=0;
    }

    for(int i=0; i<32; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(getbit(arr[j],i)==1){
                count+=1;
            }
        }
        arr1[i]=count;
        
    }

    int ans=0;

    for(int i=0; i<32; i++){
        ans+=(1<<i)*(arr1[i]%3);
    }
    cout<<ans;

    

    
    
}