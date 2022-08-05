#include<iostream>
#include "queue.h"

template<>
bool DynamicQueue<int>::isEmpty(){
    return head == tail;
}

template<>
bool DynamicQueue<int>::isFull(){
    return (head - tail == 1 || tail - head == N-1);
}

template<>
void DynamicQueue<int>::grow(){
    N = nextSize();
    
    int *temp = new int[N];
    //copy the existing data to a new list temp
    for (int i = head; i < head+N-1; i++)   temp[i-head] = A[i%(N-1)];
    

    //pointing the T ptr to temp
    //delete A;
    A = temp;

    tail = N-1;
    head = 0;
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
    else if (tail == N-1 && head!=0)
    {
        A[tail%(N-1)] = x;
        tail = (tail+1) % N-1;
    }

    else {
        A[tail] = x;
        tail = (tail+1) % N-1;
    }
    
    
}

template<>
bool DynamicQueue<int>::QDelete(int* x){
    if (isEmpty()) return false;
    
    *x = A[head];
    A[head] = -1;

    head = (head+1) % (N-1);
    return true;
}