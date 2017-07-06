//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 06/07/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

class FBullCowGame {
public:
    void Reset(); // TODO make a more rich return value
    int GetMaxTries();
    int GetCurrentTry;
    bool IsGameWon();
    bool CheckGuessValidity(std::string Guess); // TODO make a more rich return value
private:
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBullCowGame_hpp */
