
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    int secretNumber, userGuess;
    int totalGames = 0;
    int totalWins = 0;
    int totalLosses = 0;
    bool correctGuess;

    std::cout << "Welcome to the number guessing game.\n";
    std::cout << "For each game, you have at most 3 chances to guess a secret number from 1 to 10.\n";

    while (true) {
        secretNumber = rand() % 10 + 1; // Generate random number between 1 and 10
        std::cout << secretNumber;
        correctGuess = false;           // Reset correct guess flag for each new game
        totalGames++;

        std::cout << "\nEnter a number from 1 to 10. Enter 0 to exit: ";

        for (int tries = 1; tries <= 3; ++tries) {
            std::cin >> userGuess;

            if (userGuess == 0) {
                std::cout << "\nGame summary:\n";
                std::cout << "Total games:      " << totalGames << "\n";
                std::cout << "Total game wins:  " << totalWins << "\n";
                std::cout << "Total game losses: " << totalLosses << "\n";
                return 0; // Exit the game
            }

            if (userGuess == secretNumber) {
                std::cout << "Congratulations, correct! Let's start a new game.\n";
                correctGuess = true;
                totalWins++; // Update win count
                break;       // End this game and start a new one
            }
            else {
                if (tries < 3) {
                    std::cout << "Not correct, try again: ";
                }
                else {
                    std::cout << "Not correct. You have reached your third trial. The correct number was " << secretNumber << ".\n";
                    std::cout << "Let's start a new game.\n";
                    totalLosses++; // Update loss count only if maximum trials reached
                }
            }
        }
    }

    return 0;

}

