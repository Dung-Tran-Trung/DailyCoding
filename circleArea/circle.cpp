#include<iostream>

void greet();
float readRadius();
float findCircumf(float radius);
void printResult(float radius, float cirCum);
void signoff();

int main(){
    float radius, cirCum;
    
    greet();
    
    radius = readRadius();
    cirCum = findCircumf(radius);

    printResult(radius, cirCum);
    signoff();

    return 0;
}

void greet(){
    std::cout << "Welcome to circumference calculation program !" << std::endl;
    std::cout << "you enter the radius; I will find the circumference of the circle" << std::endl;
}

float readRadius(){
    float userInput = 0;
    do{
        std::cout << "Please enter a positive radius: ";
        std::cin >> userInput;
    }while(userInput <= 0);
    return userInput;
}

float findCircumf(float radius){
    float cirCum = 0;
    cirCum = radius * 2 * 3.14;
    return cirCum;
}

void printResult(float radius, float cirCum){
    std::cout << "\nYou entered the radius: " << radius << std::endl;
    std::cout << "The circumference of the circle: " << cirCum << std::endl;
}

void signoff(){
    std::cout << "\nHave a good day !";
}