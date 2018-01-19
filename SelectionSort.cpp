/*
Author: Jonathon Bryant

Description: This program uses selection sort to sort an array. It is an
algorithm that divides the items into two parts, one is the sorted part and the
other is the unsorted part. It keeps moving items into the sorted part until
there are no other items left.
*/
#include<iostream>

using namespace std;

int* SELECTIONSORT(int a[], int n);

int main(){
    int n = 10;
    int a[] = {};
    for(int i = 0; i < 10; i++){
        a[i] = rand()%10;
    }

    int *b = SELECTIONSORT(a, n);

    for(int i = 0; i < 10; i++){
        cout << b[i] << '\n';
    }

    return 0;
}

int* SELECTIONSORT(int a[], int n){
  int smallest = 0;
  int temp = 0;

  for(int j = 0; j < n; j++){
    smallest = j;
    for(int i = j; i < n; i++){
      if(a[i] < a[smallest]){
        smallest = i;
      }
    }
    temp = a[j];
    a[j] = a[smallest];
    a[smallest] = temp;
  }

  return a;
}
