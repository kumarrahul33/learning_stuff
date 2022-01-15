#include<iostream>
#include<vector>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    vector<int> spam;
    for(int i=1; i<=10; i++){
        //to assign values in the vector
        spam.push_back(i);
    }

    //to get the size of the vector

   /* cout<<spam.size()<<endl;

    // to print the values of the vector
    // simple
    for(int i=0; i<spam.size(); i++){
        cout<<spam[i]<<" ";
    }
    cout<<endl;

    //another way to iterate the vector
    vector<int>::iterator head;
    for(head=spam.begin(); head!=spam.end(); head++){
        //dereferencing the pointer that we created
        cout<<*head<<" ";
    }
    cout<<endl;


    for(auto element:spam){
        cout<<element<<" ";
    }
    cout<<endl;*/


    return 0;




    


}
