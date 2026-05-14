#ifndef MAIN_HPP
#define MAIN_HPP
// Circular N left rotation in Arrays
// [1,2,3,4,5] and we want to make 3 left rotation => Result is [4,5,1,2,3]
// [10,13,5,7,2] and we want to make 1 left rotation => Result is [13,5,7,2,10]
// Do not use the additional array. In-place swapping.
#include <iostream>
#include <iomanip>
using namespace std;
void shiftleft(int[], int, int);
void printout(int[], int);
void shiftleft(int number[], int SIZE, int count)
{
    if (SIZE == 0 || count == 0) return;

    count = count % SIZE;

    if (count == 0) return;

    // 3-reverse method (in-place, no extra array)
    // Step 1: reverse first `count` elements
    int left = 0, right = count - 1;
    while (left < right) {
        int temp = number[left];
        number[left] = number[right];
        number[right] = temp;
        left++;
        right--;
    }

    // Step 2: reverse remaining elements
    left = count;
    right = SIZE - 1;
    while (left < right) {
        int temp = number[left];
        number[left] = number[right];
        number[right] = temp;
        left++;
        right--;
    }

    // Step 3: reverse the entire array
    left = 0;
    right = SIZE - 1;
    while (left < right) {
        int temp = number[left];
        number[left] = number[right];
        number[right] = temp;
        left++;
        right--;
    }
}
void printout(int number[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(5) << number[i];
    cout << endl;
    return;
}
#endif
