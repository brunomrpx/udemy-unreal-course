//
//  main.cpp
//  BullCowGame
//
//  Created by Bruno Mayer Paixão on 29/06/17.
//  Copyright © 2017 Bruno Mayer Paixão. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintGuess(string Guess);
bool AskToPlayAgain();

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
    // loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TURNS = 5;
    string Guess;
    
    for (int i = 0; i < NUMBER_OF_TURNS; i++) {
        Guess = GetGuess();
        PrintGuess(Guess);
        cout << endl;
    }
    
    cout << endl;
}

void PrintIntro() {
    // introduce the game
    constexpr int WORD_LENGTH = 5;
    
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORD_LENGTH <<  " letter isogram I'm thinking of?\n";
    cout << endl;
    
    return;
}

string GetGuess() {
    string Guess = "";
    
    // get a guess from the player
    cout << "Enter your guess: ";
    getline(cin, Guess);
    
    return Guess;
}

void PrintGuess(string Guess) {
    cout << "Your guess was: " << Guess << endl;
    
    return;
}

bool AskToPlayAgain() {
    cout << "Do yout want to play again? (y/n) ";
    
    string Response = "";
    getline(cin, Response);
    
    return tolower(Response[0]) == tolower('Y');
}
