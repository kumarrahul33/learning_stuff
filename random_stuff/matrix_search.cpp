#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int m,n;
    int key;
    cin>>m>>n;
    cin>>key;
    int arr[m][n];
    
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int row=0;
    int col=0;
    int check=12;

    while(arr[row][0]<=key){
   
    int s=0;
    int e=n-1;
                while(e-s>=0){
                    if(arr[row][(s+e)/2]>key)
                        e=(s+e)/2 -1;
                    
                    else if(arr[row][(s+e)/2]<key)
                        s=(s+e)/2+1;
                    else if(arr[row][(s+e)/2]=key){
                        cout<<"found";
                        check=1;
                        break;
                    }
                }
                if(e-s<0)
                    check=0;
    
    
         
        if (check==1){
            //cout<<"found";
            break;

        }
        
        else if(check==0)
            row+=1;

    
    }
    if(check==0)
        cout<<"not found";
        
        
    

}          