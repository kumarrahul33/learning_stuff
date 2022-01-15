#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int m,n;
    cin>>m>>n;
    int m1,n1;
    cin>>m1>>n1;

    int arr1[m][n];
    int arr2[m1][n1];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }

   

    
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cin>>arr2[i][j];
        }
    }

    int temp=0;
    int arr[m][n1];
    for(int i=0; i<m; i++){
        for(int j=0; j<n1; j++){
            for(int k=0; k<m1; k++){
                temp+= arr1[i][k] * arr2[k][j];

            }
            arr[i][j]=temp;
            temp=0;
            
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n1; j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
        }
    /*for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr1[i][j]<<" ";

        }
        cout<<endl;
        }
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cout<<arr2[i][j]<<" ";

        }
        cout<<endl;
        }*/

}

