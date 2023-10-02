#include <iostream>

int main() {
    // Declare variables to store user input
    int num1;
	int num2;
	int num3;

    // Ask user to enter three integers
    std::cout << "Enter three integers:" << std::endl;
    std::cin >> num1 >> num2 >> num3;

    // Create integer pointers and allocate memory
    int* ptr1 = new int(num1);
    int* ptr2 = new int(num2);
    int* ptr3 = new int(num3);

    // Display contents of variables and pointers
    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Pointer 1: " << *ptr1 << std::endl;

    std::cout << "Number 2: " << num2 << std::endl;
    std::cout << "Pointer 2: " << *ptr2 << std::endl;

    std::cout << "Number 3: " << num3 << std::endl;
    std::cout << "Pointer 3: " << *ptr3 << std::endl;

    // Deallocate memory using delete operator
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}



