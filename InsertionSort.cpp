#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

    int a[9];

    a[0] = 7;

    int x, key;

    for(int i = 1; i < 9; i++){
        x = rand()%10 + 1;
        a[i] = x;
    }

    for(int i = 0; i < 9; i++){
        cout << a[i] << "\n";
    }

    cout << '\n';

    for(int j = 1; j < 9; j++){
        key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] > key){
            a[i+1] = a[i];
            i = i - 1;
            //a[i + 1] = key;
        }
        a[i + 1] = key;
    }

    for(int i = 0; i < 9; i++){
        cout << a[i] << '\n';
    }

    return 0;
}
