#include <iostream>
using namespace std;
void helloworld(int a){
    int arr[5];
    arr[a]=a+1;
   
    for(int i=0; i<5; i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
	

	for(int i=0; i<5; i++) helloworld(i);
	return 0;
	
}
