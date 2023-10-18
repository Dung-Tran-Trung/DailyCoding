#include<iostream>

int main(){
    float const TAX_PER = 4.225;
    int shippingCost;
    float itemWeight, itemPrice, totalPrice;
    int shippingCostList[6] = {10,7,5,3,2,1};
    
    std::cout << "Please input your items's weight: " << std::endl;
    std::cin >> itemWeight;
    
    std::cout << "Please input items's price: " << std::endl;
    std::cin >> itemPrice;
     
    std::cout << "Calculating total rice: " << std::endl;

    if (itemWeight < 1.0){
        shippingCost = shippingCostList[0];
    }
    else if (  itemWeight < 5.0){
        shippingCost = shippingCostList[1];
    }
    else if ( itemWeight < 8.0){
        shippingCost = shippingCostList[2];
    }
    else if ( itemWeight < 10.0){
        shippingCost = shippingCostList[3];
    }
    else if ( itemWeight < 20){
        shippingCost = shippingCostList[4];
    }
    else {
        shippingCost = shippingCostList[5];
    }

    totalPrice = itemPrice + shippingCost*itemWeight + itemPrice*TAX_PER/100;
    std::cout<< "Total price you have to pay is: "<< totalPrice;
    return 0;
}