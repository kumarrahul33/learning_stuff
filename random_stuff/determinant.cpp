#include<bits/stdc++.h>
using namespace std;

int deter(int n,int arr[][6])
{
    int subarry[6][6]={0};
    if(n==2)
    {
        return arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
    }
    
    else
    {

        int temp=0;
        for (int i = 0; i < n; i++)
        {
            int subrow=0; int subcol=0;
            for (int col = 0; col < n; col++)
            {
                if(col==i) continue;
                for (int row = 1; row < n; row++)
                {
                    subarry[subrow][subcol]=arr[row][col];
                    subrow++;
                }
                subrow=0; subcol++;
                
            }

            //cout<<deter(n-1,subarry)<<" "<<arr[0][i]*deter(n-1,subarry)*pow(-1,i)<<endl;
            temp+=arr[0][i]*deter(n-1,subarry)*pow(-1,i);

            

            for(int i1=0; i1<6; i1++)
            {
                for(int j1=0; j1<6; j1++)
                {
                    subarry[i1][j1]=0;
                }
                
            }  
        }
        return temp;
        
    }
    


}
int main(){
    // #ifndef ONLINE_JUDGE

    // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    // #endif
    
    int n;
    cin>>n;
    int arr[6][6]={-1};
    //arr= new int *[n];
    
    for(int i=0; i<n; i++)
    {
        //arr[i]=new int[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    // int except[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    cout<<deter(n,arr);
    

    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<'\n';
    // }
    

}