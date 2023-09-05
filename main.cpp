#include <iostream>

using namespace std;

void sort(int array[]);

int main() {
    int array[10];

    for(int i = 0; i < 10; i++) {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }

    sort(array);

    return 0;
}

void sort(int array[]) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9; j++) {
            if(array[j] > array[j + 1]) {
                array[j] = array[j] + array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] = array[j] - array[j + 1];
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
}