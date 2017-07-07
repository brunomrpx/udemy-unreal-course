//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 06/07/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//

#include "FBullCowGame.hpp"

int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

void FBullCowGame::Reset(){
    return;
}

bool FBullCowGame::IsGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(std::string Guess) {
    return true;
}

