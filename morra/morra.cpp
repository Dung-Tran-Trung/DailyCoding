#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

int main(){
    int const MAX_FIGURES = 5;
    int const MIN_FIGURES = 1;
    int const MAX_SUM = 10;
    int const MIN_SUM = 2;
    int sum, 
        playerOneFingure,
        playerOneGuess,
        playerTwoFingure,
        playerTwoGuess;

    std::ofstream outfile;
    outfile.open("result.txt");

    short seed;
    seed = time(0);
    srand(seed);

    playerOneFingure = rand() % (MAX_FIGURES - MIN_FIGURES) + MIN_FIGURES;
    playerOneGuess = rand() % ( MAX_SUM - MIN_SUM) + MIN_SUM;
    playerTwoFingure = rand() % (MAX_FIGURES - MIN_FIGURES) + MIN_FIGURES;
    playerTwoGuess = rand() % ( MAX_SUM - MIN_SUM) + MIN_SUM;
    
    sum = playerOneFingure + playerTwoFingure;

    outfile << "Fingers total" << std::endl;
    outfile << playerOneFingure << " " << playerOneGuess << std::endl;
    outfile << playerTwoFingure << " " << playerTwoGuess << std::endl;
    outfile << "Correct total is " << sum << std::endl;
    outfile << std::endl;
    

    if (( sum == playerOneGuess ) && (sum == playerTwoGuess)){
        outfile << "TIE";
    }
    else if (sum == playerOneGuess){
        outfile << "PLAYER 1 WINS";
    }
    else if (sum == playerTwoGuess){
        outfile << "PLAYER 2 WINS";
    }
    else{
        outfile << "NO ONE WINS";
    };

    outfile.close();

    return 0;
}

// 