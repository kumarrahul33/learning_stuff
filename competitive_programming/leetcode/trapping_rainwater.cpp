//https://leetcode.com/problems/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;

// int trap(vector<int>& height) {
//         int temp=0;
//         int water=0;
//         int ptr = 0;
//         int n = height.size();
//         for (int i = 0; i < n; i++)
//         {
//             if(height[i] != 0) break;
//             else if(i == n-1) return 0;
//         }


//         while (ptr < n)
//         {
//             if(height[ptr] != 0){
//                 ptr++;

//                 while(ptr < n && height[ptr] == 0){
//                     if(height[ptr] == 0) temp++;
//                     ptr++;
//                 }

//                 if(ptr < n){
//                     water += temp;
//                     temp = 0;
//                 } 
//             }

//             else ptr++;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if(height[i] != 0) height[i] -= 1;
//         }


//         return water + trap(height);

//  }

//do it later


int trap(vector<int>& height) {
    
}

int main(){
    #ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif
    int n;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    cout << trap(arr);
    

}