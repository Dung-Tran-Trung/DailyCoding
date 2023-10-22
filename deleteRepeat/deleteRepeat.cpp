#include<iostream>
using namespace std;

void readArray(char[], int &);
void printArray(char [], int);
void deleteRepeat(char [], int &);


const int SIZE_LIMIT = 1024;

int main(){
    char inputArray[SIZE_LIMIT];
    int size;
    
    size = 0;
    readArray(inputArray, size);
    deleteRepeat(inputArray, size);
    return 0;
}

void readArray(char data[], int &arrSize){

    std::cout << "Please input size of array: ";
    std::cin >> arrSize;
    std::cout << "Please input the array: ";
    while (arrSize > SIZE_LIMIT || arrSize < 0)
    {
        std::cout << "Please input a valid size between 0 to " << SIZE_LIMIT;
        std::cin >> arrSize;
    }
    
    for(int i = 0; i< arrSize; i++){
        std::cin >> data[i];
    }
}

void deleteRepeat(char data[], int &size){
    for(int i = 0; i < size; i++){
        for (int j = i + 1 ; j < size + 1; j++){
            if(data[i] != data[j]){
                continue;
            }else{
                std::cout << "Found duplicates at position " << i << " and position " << j << " with value: " << data[i] << " and " << data[j] << std::endl;
                size = size - 1;
                for (int k = j; k < size - 1; k++){
                    data[k] = data[k + 1];
                }
                printArray(data, size);
            }
        }
    }
}

void printArray(char data[], int size){
    std::cout << "Update the array :";
    for (int i = 0; i < size; i++){
        std::cout << data[i] << " ";
    }
     std::cout << std::endl;
}