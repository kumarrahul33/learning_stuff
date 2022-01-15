/*Our next problem is to find a path from the upper-left corner to the lower-right
corner of an n × n grid, such that we only move down and right. Each square
contains a positive integer, and the path should be constructed so that the sum of
the values along the path is as large as possible.*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j-1<n && j-1>=0 && i-1<n && i-1>=0)
                arr[i][j]=max(arr[i][j-1]+arr[i][j],arr[i-1][j]+arr[i][j]);

            else if(j-1<n && j-1>=0) 
                arr[i][j]=arr[i][j-1]+arr[i][j];
            else if(i-1<n && i-1>=0)
                arr[i][j]=arr[i-1][j]+arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


  

  
    


}