#include <iostream>
using namespace std;

int main() {
    // Part 1: Pointers and Variables
    int a = 10;
    int *p = &a;
    
    std::cout << "Address stored in pointer p: " << p << std::endl;
    std::cout << "Value of a using pointer p: " << *p << std::endl;
    
    *p = 20;
    std::cout << "New value of a: " << a << std::endl;
    
    
    // Part 2: Pointer Arithmetic and Arrays
    int arr[5] = {1, 2, 3, 4, 5};
    int *prt = arr;
    
    for (int i = 0; i < 5; ++i) {
        std::cout << "Address of arr[" << i << "]: " << (p+i) << endl;
        std::cout << "Value of arr[" <<i << "]: " << *(p+i) << endl;
    }
    return 0;
}
