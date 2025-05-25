#include "quiz.h"
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

bool askQuestion(const string& question, const string options[4], char correctAnswer) {
    cout << question << endl;
    for (char opt = 'A'; opt <= 'D'; opt++) {
        cout << opt << ") " << options[opt - 'A'] << endl;
    }

    char userAnswer;
    cout << "Your answer (A/B/C/D): ";
    cin >> userAnswer;
    userAnswer = toupper(userAnswer);

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n\n";
        return true;
    } else {
        cout << "Wrong. Correct answer was " << correctAnswer << ".\n\n";
        return false;
    }
}

int startQuiz() {
    int score = 0;

    string q1_opts[4] = {"2", "2.5", "3", "2.0"};
    string q2_opts[4] = {"malloc", "create", "new", "alloc"};
    string q3_opts[4] = {"for i = 0 to n", "repeat", "loop (i)", "for (i = 0; i < n; i++)"};
    string q4_opts[4] = {"define", "structure", "class", "object"};
    string q5_opts[4] = {"Outputs data", "Clears the console", "Takes input", "Declares variable"};
    string q6_opts[4] = {".py", ".cpp", ".java", ".c"};
    string q7_opts[4] = {"Private", "Public", "Main", "Void"};

    if (askQuestion("1. What is the output of 'cout << 5 / 2;'?", q1_opts, 'A')) score++;
    if (askQuestion("2. Which keyword is used to create an object in C++?", q2_opts, 'C')) score++;
    if (askQuestion("3. What is the correct syntax for a for loop in C++?", q3_opts, 'D')) score++;
    if (askQuestion("4. Which keyword defines a class in C++?", q4_opts, 'C')) score++;
    if (askQuestion("5. What is 'cin' used for in C++?", q5_opts, 'C')) score++;
    if (askQuestion("6. What is the file extension for C++ source files?", q6_opts, 'B')) score++;
    if (askQuestion("7. Which access specifier allows access from outside the class?", q7_opts, 'B')) score++;

    cout << "You scored " << score << " out of 7.\n";
    return score;
}