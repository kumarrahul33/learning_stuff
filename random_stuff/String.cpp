#include<bits/stdc++.h>
using namespace std;

bool similar(string a, string b)
{   
int m=a.length();
int n=b.length();
    if(m==n){
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(i!=n-1)
                return false;
            }
        }
        return true;
    }
    else if(abs(m-n)==1){
        for(int i=0;i<min(m,n);i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}
int FindSequence(int n, vector<string> arr)
{
    // WRITE YOUR CODE HERE

    int res = 0;
    loop(i, n - 1)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (similar(arr[i],arr[j]))
            {
                count++;
            }
            else{
                break;
            }
        }
        res = max(res, count);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<string>arr;
    for(int i=0;i<n;i++)
    {
        string k;
        arr.push_back(k);
    }
cout<<FindSequence(n,arr);
return 0;

}