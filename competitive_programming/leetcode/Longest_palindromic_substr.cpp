// https://leetcode.com/problems/longest-palindromic-substring/solution/
#include<bits/stdc++.h>
using namespace std;

//needed for the brute force method
// bool check_palindrome(string str){
//     bool is_palin = true;

//     for (int i = 0; i < str.size()/2; i++)
//     {
//         if(str[i] == str[str.size()-i-1]) continue;
        
//         is_palin = false;
//         break;
//     }

//     return is_palin;

    
// }


int main(){
    #ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif
    
    string s;
    cin >> s;

//brute force approach

//    for (int i = s.size() ; i > 1; i--)
//    {
//        for (int j = 0; j < s.size() - i + 1; j++)
//        {
//            string temp = s.substr(j, i);
//             if(check_palindrome(temp)){
//                 cout << temp;
//                 return 0;
//             }
//        }

//    }

// using dynamic programming
    int n = s.size();

//stores the length, starting index of the palindrome

    int finalAns[2] = {1,0};

    int dp_palin[n][n];
    memset(dp_palin, -1, sizeof(dp_palin));

    for (int len = 0; len < n; len++)
    {
        for (int i = 0; i < n - len; i++)
        {
            if(len == 0 ) dp_palin[i][i] = 1;

            else if(s[i] == s[i+len]){
                if(dp_palin[i+1][i+len-1] != -1 || i+1 > i+len-1){
                    dp_palin[i][i+len] = len+1;
                    if( finalAns[0] < len+1 ){
                        finalAns[0] = len+1 ;
                        finalAns[1] = i;
                    }
                }
            }
        }
    }

    cout << s.substr(finalAns[1], finalAns[0]);
    
    

    
   
    
}