#include<iostream>
#include<cmath>
#include<cstring>
#include "planner.h"
using namespace std;

// this the dictionary defined specially for managing the journeys and their times

int Dictionary::hashValue(string key){
//give the hash value w.r.t the station_one name
    //polynomial accumulation
    int x = 34;
    long long int str_int = 0;
    for (int i = 0; i < 64; i++)
    {
        if(int(key[i]) == 0) break;

        int temp = 1;

        for (int j = 0; j < i; j++)
        {
            temp += (temp*x) % 10^6;
            temp = temp % 10^6;
        }
        
        str_int += (temp*int(key[i]));
    }

    //fibonacci compression
    //str_int = str_int % 10^6;
    float A = (sqrt(5) - 1)/2;
    float integer_part;
    int hashVal = floor(DICT_SIZE*(modf(str_int*A, &integer_part)));

    return hashVal;
}



struct Journey* Dictionary::get(string key){
    int pos = hashValue(key);
    return &A[pos];
}

/*
void Dictionary::showAll(){
    for (int i = 0; i < DICT_SIZE; i++)
    {
        cout << i << " " << A[i].key << " " << A[i].value << endl; 
    }
    
}
*/
void insertElement(Journey* first, Journey* middle, Journey* end) {
    if (end == nullptr)
    {
        first -> next = middle;
    }

    else{
        first -> next = middle;
        middle -> next = end;
    }
    
}

bool Dictionary::put(struct Journey* j){

    //sorting  in ascending order of each linked list is required
    
    //index at which the required journey is 

    Journey* ptr = &A[hashValue(j->station_one)];
    while (ptr->next != nullptr)
    {
        if ((ptr -> next) -> startTime >= j -> startTime )
        {
            insertElement(ptr,j,ptr->next);
            return;
        }
           
        ptr = ptr->next;
    }

    ptr->next = j;

    //making the Journey to be inserted
    return true;
}


Dictionary::Dictionary(){
   A = new Journey[DICT_SIZE];
}

int main() {
    Journey j1 = {"jammu","kashmir", 1500, 1600};
    Journey j2 = {"jammu", "kanpur", 1600, 1800};

    Journey j3 = {"newyork", "delhi", 1200, 1800};
    Journey j4 ={"pathankot","gujrat", 1300, 1200};

    Dictionary d;
    d.put(&j1);
    d.put(&j2);
    d.put(&j3);
    d.put(&j4);

    Journey* ptr = d.get("newyork");

    for (int i = 0; i < 2; i++)
    {
        ptr -> printJourney();
        ptr = ptr -> next;
    }
    

}






