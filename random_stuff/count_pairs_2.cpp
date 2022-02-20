#include<bits/stdc++.h>
using namespace std;

int countPairs(int n, int *arr, int i, int j,int l,int r,vector<int> &first,vector<int> &second)
{
    int a[n];
   
    if(j<=i) return 0;

    else if(arr[i]+arr[j]<l)
    {
        //cout<<"<l"<<'\n';
        return countPairs(n,arr,i+1,j,l,r,first,second);
        
    }

    else if (arr[i]+arr[j]>r)
    {
        //cout<<">r "<<'\n';
        return countPairs(n,arr,i,j-1,l,r,first,second);
    }

    else
    {   
       // cout<<arr[i]<<" "<<arr[j]<<'\n';
        //cout<<"recurse +1"<<'\n';
        first.push_back(arr[i]);
        second.push_back(arr[j]);
        return 1+countPairs(n,arr,i,j-1,l,r,first,second)+countPairs(n,arr,i+1,j,l,r,first,second);
    }

}
int main(){
    // #ifndef ONLINE_JUDGE

    // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    // #endif
    int n; int l; int r;
    cin>>n>>l>>r;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
   vector<int> first;
   vector<int> second;
   countPairs(n,arr,0,n-1,l,r,first,second);
   int finalCount=0;

    set<pair<int,int>> copies;
    for(int i=0; i<first.size();i++){
       copies.insert(make_pair(first[i],second[i]));
    }

    cout<<copies.size();
    
    }
    