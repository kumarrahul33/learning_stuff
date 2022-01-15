#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int key;
    cin>>key;

    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int row=m-1;
    int col=0;

    while(true){
       int pos=arr[row][col];
       if (pos==key){
            cout<<"found"<<endl;
             cout<<row<<" "<<col;
            break;
       }
      
        if(row==0 && col==n-1){
            cout<<"not found"<<endl;
             cout<<row<<" "<<col;
            break;
        }
        if(row==0 && col==0){
            cout<<"not found"<<endl;
             cout<<row<<" "<<col;
            break;
        }
        if(row==m-1 && col==m-1){
            cout<<"not found"<<endl;
            cout<<row<<" "<<col;
            break;
        }
         if(pos>key)
          row-=1;
       else if(pos<key)
            col+=1;
         
        

    }


}