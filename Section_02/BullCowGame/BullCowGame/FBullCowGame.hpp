//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 06/07/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//

#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make a more rich return value
    bool CheckGuessValidity(FString); // TODO make a more rich return value
    // provide a method for counting bulls & cows, and increaseing try number
    
private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
};

