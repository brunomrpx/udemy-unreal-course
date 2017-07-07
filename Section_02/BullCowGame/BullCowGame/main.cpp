//
//  main.cpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 29/06/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//
#include <iostream>
#include "FBullCowGame.hpp"

void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintGuess(std::string Guess);
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
    int MaxTries = BCGame.GetMaxTries();
    
    // loop for the number of turns asking for guesses
    std::string Guess;
    
    for (int i = 0; i < MaxTries; i++) {
        Guess = GetGuess();
        PrintGuess(Guess);
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
}

void PrintIntro() {
    // introduce the game
    constexpr int WORD_LENGTH = 5;
    
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH <<  " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    
    return;
}

std::string GetGuess() {
    std::string Guess = "";
    int CurrentTry = BCGame.GetCurrentTry();
    
    // get a guess from the player
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    getline(std::cin, Guess);
    
    return Guess;
}

void PrintGuess(std::string Guess) {
    std::cout << "Your guess was: " << Guess << std::endl;
    
    return;
}

bool AskToPlayAgain() {
    std::cout << "Do yout want to play again? (y/n) ";
    
    std::string Response = "";
    getline(std::cin, Response);
    
    return tolower(Response[0]) == tolower('Y');
}
