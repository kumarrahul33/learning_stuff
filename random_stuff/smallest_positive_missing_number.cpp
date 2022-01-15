#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);

    #endif
    
    // obtaining the list
    int n;
    cin >> n;

    

    int l1[n];

    for(int i=0; i<=n-1; i++){
        cin>>l1[i];
    }

    //bubble sort
    int count =0;
    int temp=0;
    for(int k=n-2; k>=0; k--){
        for(int l=0; l<=k; l++){
            if (l1[l]>l1[l+1]){
                temp=l1[l+1];
                l1[l+1]=l1[l];
                l1[l]=temp;
                count += 1;
            }
        }
    }
    /*for(int i=0; i<n; i++)
        cout<<l1[i]<<" ";*/

    //binary search

    int key=0;
    int st=0 , end=n-1, mid1=0;
    while(end-st>1){
        mid1=(st+end)/2;
        int mid=l1[(st+end)/2];
        if(key>mid){
            st=mid1;
        }
        else if(key<mid){
            end=mid1;
        }
        
        else if(key==mid){
            //cout<<endl<<mid1;
            break;
        }
        
        
    }
    int check=1;
    for(int k=mid1;  k<n; k++ ){
        if(l1[k]>check){
            cout<<check;
            break;
        }
        else if(l1[k]==check){
            check+=1;
        } 
    }
}