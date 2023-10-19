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

    int winTimePlayerOne = 0;
    int winTimePlayerTwo = 0;

    std::ofstream outfile;
    outfile.open("result.txt");

    short seed;
    seed = time(0);
    srand(seed);

    for(int i = 0; i < 10; i++ ){
        

        playerOneFingure = rand() % (MAX_FIGURES - MIN_FIGURES) + MIN_FIGURES;
        playerOneGuess = rand() % ( MAX_SUM - MIN_SUM) + MIN_SUM;
        playerTwoFingure = rand() % (MAX_FIGURES - MIN_FIGURES) + MIN_FIGURES;
        playerTwoGuess = rand() % ( MAX_SUM - MIN_SUM) + MIN_SUM;
        
        sum = playerOneFingure + playerTwoFingure;

        outfile << "Game " << i << ":"<<std::endl;
        outfile << "Player      |Fingers    |Total" << std::endl;
        outfile << "============|===========|============" << std::endl;
        outfile << "1           |" << playerOneFingure << "          |" << playerOneGuess << std::endl;
        outfile << "2           |" << playerTwoFingure << "          |" << playerTwoGuess << std::endl;
        outfile << std::endl;
        outfile << "Correct total is " << sum << std::endl;

        if (( sum == playerOneGuess ) && (sum == playerTwoGuess)){
            outfile << "TIE";
        }
        else if (sum == playerOneGuess){
            outfile << "PLAYER 1 WINS";
            winTimePlayerOne = winTimePlayerOne + 1;
        }
        else if (sum == playerTwoGuess){
            outfile << "PLAYER 2 WINS";
            winTimePlayerTwo = winTimePlayerTwo + 1;
        }
        else{
            outfile << "NO ONE WINS";
        };
        outfile << std::endl;
        outfile << std::endl;
        outfile << "-------------------------------------" << std::endl;
    }
    
    outfile << "=====================================" << std::endl;
    outfile << "Summary of the series" << std::endl;
    outfile << "=====================================" << std::endl;
    outfile << "Player 1 won " << winTimePlayerOne << " games" << std::endl;
    outfile << "Player 2 won " << winTimePlayerTwo << " games" << std::endl;
    outfile << std::endl;

    if(winTimePlayerOne > winTimePlayerTwo){
        outfile << "Winner of the series: It is PLAYER 1";
    }
    else if(winTimePlayerOne < winTimePlayerTwo){
        outfile << "Winner of the series: It is PLAYER 2";
    }
    else{
        outfile << "Winner of the series: It is TIE";
    }

    outfile.close();

    return 0;
}

// 