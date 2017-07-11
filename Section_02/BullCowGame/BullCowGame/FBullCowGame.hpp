//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 06/07/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//

#include <string>

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make a more rich return value
    bool CheckGuessValidity(std::string); // TODO make a more rich return value
    // provide a method for counting bulls & cows, and increaseing try number
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};

