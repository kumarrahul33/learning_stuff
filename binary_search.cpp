#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int key;
    cin >> key;
    
    int n;
    cin >> n;

    int l1[n];

    for(int i=0; i<=n-1; i++){
        cin >> l1[i];
    }

    int temp=0;
    //bubble sort
    for(int j=n-1; j>=0; j--){
        for(int k=0; k<=j; k++){
            if (l1[k]>l1[k+1]){
                temp=l1[k+1];
                l1[k+1]=l1[k];
                l1[k]=temp;
            }
            else{

            }

        }
    }
    for(int q=0; q<n; q++){
        cout << l1[q]<<" ";
    }
    cout << endl;
    //binary sort

    int s=0;
    int e=n;
    int check=1;
    //cout << s << " " << e<<" "<<(s+e)/2<<endl;
    while(l1[(s+e)/2]!=key){
        if(l1[(s+e)/2]>key){
            e=(s+e)/2;
           //cout << s << " " << e<<" "<<(s+e)/2<<endl;
        }
        else if(l1[(s+e)/2]==key){
            
            //cout << s << " " << e<<" "<<(s+e)/2<<endl;
            break;
          
        }
        
        else if((e-s==1) && l1[(s+e)/2]!=key){
            check=0;
            cout << "not found";
            
            break;
        }

        else if(l1[(s+e)/2]<key){
            s=(s+e)/2;
            //cout << s << " " << e<<" "<<(s+e)/2<<endl;
        }

        
    }
        if (check==1){
            cout<<"found";

    }
    return 0;
    
}