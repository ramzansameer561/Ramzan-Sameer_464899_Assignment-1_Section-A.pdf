#include <iostream>
using namespace std;
int main() {
    int a[] = {1, 2, 3, 4, 5};
    cout<<"Your existing array is:\na[] = {1 , 2, 3, 4, 5}\n";
    // Add more elements
    cout<<"please enter the 5 th element of the array: ";
    cin>> a[5];

    cout<<"please enter the 6 th element of the array: ";
cin>> a[6];
    // Display all elements
    cout << "Array elements: ";
    for (int i = 0; i < 7; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
