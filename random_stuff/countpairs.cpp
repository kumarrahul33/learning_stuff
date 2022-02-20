#include<bits/stdc++.h>
using namespace std;

// int count_pairs_alternate(int arr[],int l,int r,int start_arr,int end_arr)
// {
//     if(end_arr-start_arr+1==1)
//     {
//         return 0;
//     }

//     else
//     {
//         int small1=start_arr;
//         int small2=(start_arr+end_arr)/2 +1;
//         int large1=small2-1;
//         int large2=end_arr;
      
//         int lowest_sum=arr[small1]+arr[small2];
//         while(lowest_sum<l)
//         {
//             if(small1<=large1)
//             {
//                 small1++;
//                 lowest_sum=arr[small1]+arr[small2];
//                 continue;
//             }

//             else if(small2<=large2)
//             {
//                 small2++;
//                 lowest_sum=arr[small1]+arr[small2];
//                 continue;
//             }

//             break;
//         }

//         int greatest_sum=arr[large1]+arr[large2];
//         while(greatest_sum>r)
//         {
//             if(large1>=small1)
//             {
//                 large1--;
//                 greatest_sum=arr[large1]+arr[large2];
//                 continue;
//             }

//             else if(large2>=small2)
//             {
//                 large2--;
//                 greatest_sum=arr[large1]+arr[large2];
//                 continue;
//             }

//             break;
//         }
        
      

//         if(small1>large1 || small2>large2)
//         {
//             return  count_pairs_alternate(arr,l,r,start_arr,(start_arr+end_arr)/2)+count_pairs_alternate(arr,l,r,(start_arr+end_arr)/2+1,end_arr);
//         }

//         else
//         {
//             return (large1-small1+1)*(large2-small2+1)+count_pairs_alternate(arr,l,r,start_arr,(start_arr+end_arr)/2)+count_pairs_alternate(arr,l,r,(start_arr+end_arr)/2+1,end_arr);
//         }

        

         
//     }

    
    
//     return 0;
    
// }

int count_pairs(int arr[],int l,int r,int start_arr,int end_arr)
{
    if(end_arr-start_arr+1==1)
    {
        return 0;
    }

    else
    {
        
       // cout<<arr[small1]<<" "<<arr[small2]<<" "<<arr[large1]<<" "<<arr[large2]<<'\n';
        // cout<<"_____________________________________________________"<<endl;
        // cout<<arr[small1]<<" "<<arr[large1]<<" "<<count_pairs_alternate(arr,l,r,small1,large1)<<endl;'\n';
        //  cout<<arr[small2]<<" "<<arr[large2]<<" "<<count_pairs_alternate(arr,l,r,small2,large2)<<endl;'\n';
         
        int temp=0;
        for(int leftArr=start_arr; leftArr<(start_arr+end_arr)/2; leftArr++)
        {
            int small1=start_arr;
            int small2=(start_arr+end_arr)/2 +1;
            int large1=small2-1;
            int large2=end_arr;
            //cout<<small2<<" "<<large2<<endl;
            int lowest_sum=arr[leftArr]+arr[small2];
            while(lowest_sum<l && small2<=large2)
            {
                small2++;
                lowest_sum=arr[small2]+arr[leftArr];
                
            }

            int greatest_sum=arr[leftArr]+arr[large2];
            while(greatest_sum>r && large2>=small2)
            {
                
                large2--;
                greatest_sum=arr[leftArr]+arr[large2];
                
            }
            if(small2<=large2)
            {
           
                temp+=large2-small2+1;
            }

            //cout<<small2<<" "<<large2<<endl;


        }

        
         

        
           
            return temp+count_pairs(arr,l,r,start_arr,(start_arr+end_arr)/2)+count_pairs(arr,l,r,(start_arr+end_arr)/2+1,end_arr);
    }

        
            //return 0;
        

         
}

    
    
    


int main(){
    #ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif

    int n; int l; int r;
    cin>>n>>l>>r;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

     cout<<count_pairs(arr,l,r,0,n-1)<<endl;
    //cout<<count_pairs(arr,l,r,0,2)<<endl;
    // cout<<count_pairs_alternate(arr,l,r,0,2)<<endl;
    // cout<<count_pairs_alternate(arr,l,r,3,5)<<endl;
    // cout<<count_pairs_alternate(arr,l,r,0,1)<<endl;
    // cout<<count_pairs_alternate(arr,l,r,2,2)<<endl;
    // cout<<count_pairs_alternate(arr,l,r,0,0)<<endl;
    // cout<<count_pairs_alternate(arr,l,r,1,1)<<endl;
    //cout<<count_pairs_alternate(arr,l,r,0,3)<<endl;

    
}