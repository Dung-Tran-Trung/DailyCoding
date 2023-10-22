#include<iostream>

int main(){
    int arr[10];
    int sum = 0;

    std::cout << "Enter 10 numbers" << std::endl;

    for (int i = 1; i <= 10; i++){
        std::cout << "Enter #" << i << ": ";
        std::cin >> arr[i-1];
    }

    for (int i = 0; i <= 9; i++){
        sum = sum + arr[i];
    }
    std::cout << "Sum is: " << sum << std::endl;
    std::cout << "The list of numbers were: ";
    for (int i = 0; i <= 9; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}   