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

// all values initialised to zero
struct BullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make a more rich return value
    bool CheckGuessValidity(FString); // TODO make a more rich return value
    
    // counts bulls & cows and increases try number assuming valid guess
    BullCowCount SubmitGuess(FString);
    
private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};

