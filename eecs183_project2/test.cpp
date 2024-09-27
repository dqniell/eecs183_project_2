/**
 * test.cpp
 * Project UID 24b93ce4a6274610f4c3f3e31fe17277t
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * EECS 183: Project 2
 * Fall 2024
 *
 * Testing functions for your rps.cpp implementation.
 * Holds the definitions of required testing functions.
 * We have stubbed all required functions for you.
 */

#include <iostream>
#include <string>

using namespace std;


//************************************************************************
// You should have implemented the following functions in rps.cpp
//************************************************************************
string getName(int playerNumber);
int getMenuChoice();
bool isMoveGood(char move);
char getMove(string playerName);
bool isRoundWinner(char move, char opponentMove);
void announceRoundWinner(string winnerName);
int doRound(string p1Name, string p2Name);
void announceWinner(string winnerName);
string doGame(string p1Name, string p2Name, int gameType);

//************************************************************************
// The following functions were already implemented for you in rps.cpp
//************************************************************************
void printInitialHeader();
void printMenu();
void printErrorMessage(int errorNumber);
void printCloser();

//************************************************************************
// Testing function declarations. Function definition is below main.
//************************************************************************
void test_isMoveGood();
void test_isRoundWinner();
void test_announceRoundWinner();
void test_announceWinner();


void startTests() {
    cout << "\nExecuting your test cases\n";

    test_isMoveGood();
    test_isRoundWinner();
    test_announceWinner();
    test_announceRoundWinner();
    // TODO: call more test functions here

    return;
}

//************************************************************************
// Put all your test function implementations below here.
// We have stubbed all required functions for you
// to recieve full points when submitting test.cpp
// NOTE: We will only grade your tests for the following functions
//       * isMoveGood
//       * isRoundWinner
//       * announceRoundWinner()
//       * announceWinner()
//************************************************************************

void test_isMoveGood() {
    cout << "Now testing function isMoveGood()\n";
    cout << "'r': Expected: 1, Actual: " << isMoveGood('r') << endl;
    cout << "'q': Expected: 0, Actual: " << isMoveGood('q') << endl;
    cout << "'s': Expected: 1, Actual: " << isMoveGood('s') << endl;
    cout << "'P': Expected: 1, Actual: " << isMoveGood('P') << endl;
    cout << "'Z': Expected: 0, Actual: " << isMoveGood('Z') << endl;
    cout << "' ': Expected: 0, Actual: " << isMoveGood('Z') << endl;

    return;
}

void test_isRoundWinner() {
    // TODO: implement
    cout << "Now testing function isRoundWinner()\n";
    //tests rock, scissor, winner should be rock
    cout << "('r', 's'): Expected: 0, Actual: " << isRoundWinner('r', 's') << endl;
    //tests scissor, paper, winner should be scissor
    cout << "('s', 'p'): Expected: 0, Actual: " << isRoundWinner('s', 'p') << endl;
    //tests paper, rock, winner should be paper
    cout << "('p', 'r'): Expected: 0, Actual: " << isRoundWinner('p', 'r') << endl;
    //tests empty, empty, should be assigned default
    cout << "(' ', ' '): Expected: 0, Actual: " << isRoundWinner('p', 'r') << endl;
    //tests rock, scissor, winner should be rock
    cout << "('R', 'S'): Expected: 0, Actual: " << isRoundWinner('p', 'r') << endl;
    //tests paper, scissor, winner should be scissor
    cout << "('p', 'S '): Expected: 0, Actual: " << isRoundWinner('p', 'r') << endl;

    return;
}

void test_announceRoundWinner() {
    // TODO: implement
    cout << "Now testing function announeRoundWinner()\n";
    //announces player 1 as round winner
    announceRoundWinner("Player 1");
    //announces player 2 as round winner
    announceRoundWinner("Player 2");
    //announces a draw
    announceRoundWinner("");
    //announces 89 as round winner
    announceRoundWinner("89");

    return;
}

void test_announceWinner() {
    // TODO: implement
    cout << "Now testing function announceWinner()\n";
    //announces player 1 as winner
    announceWinner("Player 1");
    //announces player2 as winner
    announceWinner("Player 2");
    //announces a draw
    announceWinner(" ");

    return;
}
