#include<iostream>

int *countingSort(int A[], int min, int max, int size);

int main(){
  int size = 5;
  int A[size] = {6,1,3,7,2};

  int min = 0;
  for(int i = 0; i < size; i++){
    if(A[min] > A[i]){
      min = A[i];
    }
  }

  int max = 0;
  for(int i = 0; i < size; i++){
    if(max < A[i]){
      max = A[i];
    }
  }

  int *B = countingSort(A,min,max,size);

  for(int i = 0; i < size; i++){
    std::cout << B[i] << "\n";
  }

  return 0;
}

int *countingSort(int A[], int min, int max, int size){
  int countIndex = (max - min + 1);
  int count[countIndex];

  for(int i = 0; i < countIndex; i++){
    count[i] = 0;
  }

  for(int i = 0; i < size; i++){
    count[A[i] - min] += 1;
  }

  int z = 0;
  for(int i = min; i <= max; i++){
    while(count[i - min] > 0){
      A[z] = i;
      z += 1;
      count[i - min] -= 1;
    }
  }

  return A;
}
