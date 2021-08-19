// Preprocessor Directives
#include <stdio.h>
#include <iostream>

// PrintIntroduction Function
void PrintIntroduction(int Difficulty) {
    // Expression Statements
    printf("HelloWorld"); // Print with <stdio.h>
    std::cout << std::endl; // End line with <iostream>
    std::cout << "You are a secret agent breaking into a " << Difficulty << " secure server room...\n"; // Print and end line with <iostream>
    std::cout << "Enter the correct code to continue...\n\n"; // Print and end line with <iostream>
}

// PlayGame Function
bool PlayGame(int CurrentDifficulty) {
    PrintIntroduction(CurrentDifficulty);

    // Declaration Statements
    int CodeA = rand() % (CurrentDifficulty * 3);
    int CodeB = rand() % 10;
    int CodeC = rand() % 10;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Expression Statements
    std::cout << "*** There are 3 numbers in the code ***\n";
    std::cout << "The code add-upp to: " << CodeSum;
    std::cout << "\nThe code multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "The sum of guess: " << GuessSum;
    std::cout << "\nThe product of guess: " << GuessProduct << std::endl;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "It Works!!\n";
        return true;
    }
    else {
        std::cout << "You lose!\n";
        return false;
    }

}

// Main Function
int main() {
    int LevelDifficulty = 1;
    const int MaxDifficulty = 3;

    while (LevelDifficulty <= MaxDifficulty) {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discarts the buffer

        if (bLevelComplete) {
            //Increase the level difficulty
            ++LevelDifficulty;
        }
    }

    std::cout << "Game Over\n\n";
    /* End of
    the program
    */
    return 0;
}
