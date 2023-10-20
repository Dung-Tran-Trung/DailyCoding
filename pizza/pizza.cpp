#include<iostream>

void showOption();

int main(){
    float const COSTPERPIZZA = 15.5,
                COSTPERSODA = 2.00,
                COSTPERCHICKENNUGETS = 7.00,
                COSTPERBREADSTICKS = 9.75;
    float totalCost = 0;
    int numItem = 0;
    char userChoosen;

    std::cout << "========================================" << std::endl;
    std::cout << "              Welcome to Pizza          " << std::endl;
    std::cout << "========================================" << std::endl;

    while(userChoosen != 'E')
    {
        std::cout << "      A      Pizza                  " << COSTPERPIZZA << std::endl;
        std::cout << "      B      Soda                   " << COSTPERSODA << std::endl;
        std::cout << "      C      Chicken Nugets         " << COSTPERCHICKENNUGETS << std::endl;
        std::cout << "      D      BreadSticks            " << COSTPERBREADSTICKS << std::endl;
        std::cout << "      E      Exit                   \n" << std::endl;
        std::cout << "Please enter the next menu item number: ";
        std::cin >> userChoosen ;
        if((65 < userChoosen) && (userChoosen > 69)){
            std::cout << "Please pick a invalid option: ";
            std::cin >> userChoosen ;
        }
        if(userChoosen == 'A'){
            totalCost = totalCost + COSTPERPIZZA;
        }
        else if(userChoosen == 'B'){
            totalCost = totalCost + COSTPERSODA;
        }
        else if(userChoosen == 'C'){
            totalCost = totalCost + COSTPERCHICKENNUGETS;
        }
        else if(userChoosen == 'E'){
            totalCost = totalCost + COSTPERBREADSTICKS;
        }
        if(userChoosen != 'E'){
            numItem = numItem + 1; 
        }
        std::cout << "Number of items so far " << numItem << std::endl;
        std::cout << "Your total so far " << totalCost << std::endl << std::endl;
    }

    std::cout << "Exit!" << std::endl;
    std::cout << "Number of item: " << numItem << std::endl;
    std::cout << "Total: " << totalCost << std::endl << std::endl;
    std::cout << "Thank you !" << std::endl;

    return 0;
}

