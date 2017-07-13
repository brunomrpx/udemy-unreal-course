//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 06/07/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//

#include "FBullCowGame.hpp"

using int32 = int;
using FString = std::string;

FBullCowGame::FBullCowGame() {
    Reset();
}

int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 8;
    const FString HIDDEN_WORD = "planet";
    
    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
    MyCurrentTry = 1;
    
    return;
}

bool FBullCowGame::IsGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(FString Guess) {
    return true;
}

// receives a VALID guess, increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString) {
    // increment the turn number
    MyCurrentTry++;
    
    // setup a return variable
    BullCowCount BullCowCount;
    
    // loop through all letters in the guess
        // compare letters against the hidden word

    return BullCowCount;
}

