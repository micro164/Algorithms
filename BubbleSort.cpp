/*
Author: Jonathon Bryant

Description: This is code for the algorithm Bubble Sort. This means that the
algorithm keeps going through the list that it is trying to sort and compares
each pair of adjacent items. It then swaps the items if they are in the wrong
order.
*/
#include<iostream>

int *bubbleSort(int A[], int size);

int main(){
  int A[5] = {1,9,8,2,4};
  int *B = bubbleSort(A,5);

  for(int i = 0; i < 5; i++){
    std::cout << B[i] << "\n";
  }

  return 0;
}

int *bubbleSort(int A[], int size){
  int n = size;
  for(int i = 0; i < n-1; i++){
    for(int j = 1; j < n; j++){
      if(A[j-1] > A[j]){
        std::swap(A[j-1],A[j]);
      }
    }
  }
  return A;
}
