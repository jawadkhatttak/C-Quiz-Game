#include "quiz.h"
#include "leaderboard.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the Quiz Game!\n";
    string name;
    cout << "Enter your name: ";
    cin >> name;

    int score = startQuiz();
    cout << "Your final score: " << score << "/3\n";
    saveScore(name, score);
    displayLeaderboard();

    return 0;
}
