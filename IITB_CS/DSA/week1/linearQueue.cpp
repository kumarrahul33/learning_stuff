#include<iostream>
#include "queue.h"

template<>
bool DynamicQueue<int>::isEmpty(){
    return head == tail;
}

template<>
bool DynamicQueue<int>::isFull(){
    return (head == 0) && (tail == N);
}

template<>
void DynamicQueue<int>::grow(){
    N = nextSize();
    
    int *temp = new int[N];
    //copy the existing data to a new list temp
    for (int i = 0; i < N; i++)   temp[i] = A[i];
    

    //pointing the T ptr to temp
    //delete A;
    A = temp;
}

template<>
void DynamicQueue<int>::QInsert(int x){
    //queue full
    if (isFull())
    {
        grow();
        A[tail] = x;
        tail++;
    }

    //queue full from end
    else if (tail == N && head!=0)
    {
        int *temp = new int[N];
        for (int i = head; i < N; i++){
            temp[i-head] = A[i];
        }

        //delete A;
        A = temp;

        tail = N-head;
        head = 0;

        A[tail] = x;   
    }

    else {
        A[tail] = x;
        tail++;
    }
    
    
}

template<>
bool DynamicQueue<int>::QDelete(int* x){
    if (isEmpty()) return false;
    
    *x = A[head];
    A[head] = -1;

    head++;
    return true;
}


