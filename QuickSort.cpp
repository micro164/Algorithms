#include<iostream>

int *quicksort(int A[], int low, int high);
int partition(int A[], int low, int high);

int main(){
  int A[5] = {2,1,5,4,9};
  int *B = quicksort(A, 0, 5);

  for(int i = 0; i < 5; i++){
    std::cout << B[i] << "\n";
  }

  return 0;
}

int *quicksort(int A[], int low, int high){
  if(low < high){
    int p = partition(A, low, high);
    quicksort(A,low,p);
    quicksort(A,p+1,high);
  }
  return A;
}

int partition(int A[], int low, int high){
  int pivot = A[low];
  int i = low - 1;
  int j = high + 1;

  while(true){
    do{
      i += 1;
    }while(A[i] < pivot);

    do{
      j -= 1;
    }while(A[j] > pivot);

    if(i >= j) return j;

    std::swap(A[i],A[j]);
  }
}
