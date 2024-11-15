#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main()
{
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int targetNumber = (std::rand() % 100) + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    // Main game loop
    while (true)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        // Check the guess
        if (guess < targetNumber)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else if (guess > targetNumber)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You've guessed the number " << targetNumber << " in " << attempts << " attempts!" << std::endl;
            break;
        }
    }

    return 0;
}
