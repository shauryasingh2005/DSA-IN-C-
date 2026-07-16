//MOVE ZEROES AT LAST WITHOUT FUCKING UP THE ORDER 

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {0, 1, 0, 3, 12};
    int l = 0, h = 0;
    
    while(h < 5) {
        // The Reader only cares if it found a non-zero!
        if(arr[h] != 0) {
            // Swap them. (You can also just use the built-in C++ swap)
            swap(arr[l], arr[h]);
            
            // Writer moves forward, ready for the next non-zero
            l++;
        }
        h++; // Reader always moves forward
    }

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}