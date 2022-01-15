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
        //cout<<xor1<<endl;
    }
    return xor1;
}

int getbit(int n, int pos){
    return ((n&(1<<pos))!=0);
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
  

  //for rightmost setbit position
    int setpos=0;
    for(int i=0; i<n; i++){
        if (getbit(findunique(arr1,n), i)==1){
            setpos=i;
            //cout<<setpos<<endl;//1
            break;  
        }
    }
    
    int xorsum=findunique(arr1,n);
    //cout<< getbin(findunique(arr1,n))<<endl;//2

    for(int i=0; i<n; i++){
        //cout<<i<<" ";
        if(getbit(arr1[i],setpos)==1){
            xorsum=xorsum^arr1[i];
           // cout<<arr1[i]<<" ";
        }
        
        
    }

    //cout<<endl;
    int x=findunique(arr1,n);
    cout<<xorsum<<endl;//3
    cout<<(xorsum^x)<<endl;//4

   /* for(int i=0; i<n; i++){
        cout<<(arr1[i])<<" ";
    }
    cout<<n;*/
}