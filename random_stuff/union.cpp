#include<bits/stdc++.h>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE

    // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    // #endif
    
    int n1; int n2;
    cin>>n1;
    
    cin>>n2;
    char arr1[n1]; 
    char arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }

    int ptr1=0;
    int ptr2=0;
    int ptr=1;
    char finalArr[n1+n2+1];
    finalArr[0]='A';

    while(ptr1!=n1 && ptr2!=n2)
    {
        // if(ptr1>=1)
        // {
        // if(finalArr[ptr-1]==arr1[ptr1]) ptr1++;
        
        // if(finalArr[ptr-1]==arr2[ptr2]) ptr2++;
        // }

        
        if(arr1[ptr1]==arr2[ptr2])
        {   
            if(finalArr[ptr-1]==arr1[ptr1] )
            {
               ptr1++; ptr2++; continue;
            }
            finalArr[ptr]=arr1[ptr1];
            ptr++; ptr1++; ptr2++;
        }

        else if (arr1[ptr1]>arr2[ptr2])
        {
            if(finalArr[ptr-1]==arr2[ptr2] )
            {
                 ptr2++; continue;
            }
            finalArr[ptr]=arr2[ptr2];
            ptr2++; ptr++;
        }

        else if (arr1[ptr1]<arr2[ptr2])
        {
            if(finalArr[ptr-1]==arr1[ptr1] )
            {
               ptr1++; continue;
            }
            finalArr[ptr]=arr1[ptr1];
            ptr1++; ptr++;
        }
        
    }

    while(ptr1<n1)
    {
        if(finalArr[ptr-1]!=arr1[ptr1]){
        finalArr[ptr]=arr1[ptr1];
        ptr1++; ptr++;
        }
        else ptr1++;

    }

    while(ptr2<n2)
    {
        if(finalArr[ptr-1]!=arr2[ptr2]){
        finalArr[ptr]=arr2[ptr2];
        ptr2++; ptr++;
        }
        else ptr2++;
    }

    for(int elt=1; elt<ptr; elt++)
    {
        
        cout<<finalArr[elt]<<" ";
    }
    

    
}