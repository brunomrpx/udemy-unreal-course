//
//  main.cpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 29/06/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//

// This is the console executable, that makes use of the BullCow class.
// This acts as the view in a MVC pattern and is responsible for all
// user interaction. For game logic see the FBullCowGame class.

#include <iostream>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
void PrintGuess(FText Guess);
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

// the entry point of application
int main() {
    bool bPlayAgain = false;
    
    PrintIntro();
    
    do {
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    } while(bPlayAgain);
    
    return 0;
}

void PlayGame() {
    BCGame.Reset();
    
    int32 MaxTries = BCGame.GetMaxTries();
    FText Guess;
    
    // loop for the number of turns asking for guesses
    // TODO change to WHILE llop once we are validating tries
    for (int32 i = 0; i < MaxTries; i++) {
        Guess = GetGuess(); // TODO make loop checking valid guesses
        
        // submit valid guess to the game and receive counts
        FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
        
        // print number of bulls and cows
        std::cout << "Bulls = " << BullCowCount.Bulls;
        std::cout << ". Cows = " << BullCowCount.Cows << std::endl;
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    
    // TODO summarize game
}

void PrintIntro() {
    // introduce the game
    
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << BCGame.GetHiddenWordLength() <<  " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    
    return;
}

FText GetGuess() {
    FText Guess = "";
    int32 CurrentTry = BCGame.GetCurrentTry();
    
    // get a guess from the player
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    getline(std::cin, Guess);
    
    return Guess;
}

bool AskToPlayAgain() {
    std::cout << "Do yout want to play again? (y/n) ";
    
    FText Response = "";
    getline(std::cin, Response);
    
    return tolower(Response[0]) == tolower('Y');
}
