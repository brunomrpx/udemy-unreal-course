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
    const FString HIDDEN_WORD = "ant";
    
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
FBullCowCount FBullCowGame::SubmitGuess(FString Guess) {
    // increment the turn number
    MyCurrentTry++;
    
    // setup a return variable
    FBullCowCount BullCowCount;
    
    // loop through all letters in the guess
    int32 HiddenWordLength = (int32) MyHiddenWord.length();
    
    for (int32 MHWChar = 0; MHWChar < HiddenWordLength; MHWChar++) {
        // compare letters against the hidden word
        for (int32 GChar = 0; GChar < HiddenWordLength; GChar++) {
            if (MyHiddenWord[MHWChar] == Guess[GChar]) { // if they match then
                if (MHWChar == GChar) { // if they're in the same place
                    BullCowCount.Bulls++; // increment bulls
                } else {
                    BullCowCount.Cows++; // must be cow
                }
            }
        }
    }
    
    return BullCowCount;
}

