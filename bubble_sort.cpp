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
    /*for(int j=1; j<=5; j++){
        cout << l1[j] << " ";
    }*/

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

            else{

            }
           /* for(int m=0; m<=n-1; m++){
            cout << l1[m] << " ";
        }*/
       
            
        }
    }
        for(int m=0; m<=n-1; m++){
            cout << l1[m] << " ";
        }
        cout<< endl << count;



    return 0;
}