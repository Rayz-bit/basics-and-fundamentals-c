#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10; 
    int array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int size1 = 0, size2 = 0;

    
    cout << "Enter up to " << MAX_SIZE << " elements for the first array (enter -1 to stop):" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        int input;
        cin >> input;
        if (input == -1) break; 
        array1[size1++] = input; 
    }

    cout << "Enter up to " << MAX_SIZE << " elements for the second array (enter -1 to stop):" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        int input;
        cin >> input;
        if (input == -1) break; 
        array2[size2++] = input; 
    }

    int mergedSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

// Bubble sort
    for (int i = 0; i < mergedSize; i++) {
        for (int j = 0; j < mergedSize - i - 1; j++) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << "First array: ";
    for (int i = 0; i < size1; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < size2; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    
    cout << "Merged array in descending order: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}