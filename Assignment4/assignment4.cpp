#include <iostream>

int main(){
    float const progAssig = 0.15;
    float const chapTest = 0.5;
    float const finTest = 0.3;
    float const classPar = 0.05;
    float proMark, chapMark, finMark, classMark, finalMark;

    
    std::cout << "Please enter your programming assignment mark:";
    std::cin >> proMark;

    std::cout << "Please enter your chapter test mark:";
    std::cin >> chapMark;

    std::cout << "Please enter your final exam mark:";
    std::cin >> finMark;

    std::cout << "Please enter your class participation mark:";
    std::cin >> classMark;

    std::cout << "Calculating your final mark......\n";
    finalMark = proMark*progAssig + chapMark*chapTest + finMark*finTest + classPar*classMark;
    std::cout << "Your final mark is: " << finalMark;

    return 0;

}
