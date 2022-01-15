#include<bits/stdc++.h>
using namespace std;


bool safeBox(int**arr,int x,int y,int n){
    for(int i=0; i<n; i++){
        if(arr[i][y]==1 && i!=x)
            return false;
    }
    for(int i=0; i<n; i++){
        if(arr[x][i]==1 && i!=y)
            return false;
    }
    int x1=x;
    int y1=y;
    //int i=0;
    while(x1<n && y1<n && y1>=0 && x1>=0){
        if(arr[x1][y1]==1 && x1!=x && y1!=y)
            return false;
        x1=x1-1;
        y1=y1-1;
    }
     while(x1<n && y1<n && y1>=0 && x1>=0){
        if(arr[x1][y1]==1 && x1!=x && y1!=y)
            return false;
        x1=x1+1;
        y1=y1-1;
    }
     while(x1<n && y1<n && y1>=0 && x1>=0){
        if(arr[x1][y1]==1 && x1!=x && y1!=y)
            return false;
        x1=x1-1;
        y1=y1+1;
    }
     while(x1<n && y1<n && y1>=0 && x1>=0){
        if(arr[x1][y1]==1 && x1!=x && y1!=y)
            return false;
        x1=x1+1;
        y1=y1+1;
    }
    return true;


}


bool nqueen(int**arr,int n,int x=0,int y=0){
    
    if(x==n-1 && safeBox(arr,x,y,n) ){
        arr[x][y]=1;
        return true;
    }
    
    if(safeBox(arr,x,y,n) ){
        arr[x][y]=1;
    }
    


    for(int i=0; i<n; i++){
        if(nqueen(arr,n,x+1,i)){
            return true;
        }
    }
    arr[x][y]=0;
    if(x==0)
        return nqueen(arr,n,x,y+1);
    
    return false;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    /*int** arr=new int*[n];

    for(int i=0; i<n; i++)
        arr[i] = new int[n];
     
     for(int i=0; i<n; i++){
         for(int j=0; j<n; j++)
             cin >> arr[i][j];
     }
*/
    //cout<<safeBox(arr,3,3,4);
    int** arr=new int*[n];

    for(int i=0; i<n; i++)
        arr[i] = new int[n];
     
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            arr[i][j]=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;
    
    cout<<nqueen(arr,n)<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    
    

}