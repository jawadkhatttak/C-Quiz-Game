#ifndef QUIZ_H //Means: "If Not Defined" This is a header guard. It checks if QUIZ_H has not already been defined. 
               //If it's the first time this file is being included, the code that follows will be processed.
               // If QUIZ_H has already been defined, the code will be skipped to avoid redefinition errors.

#define QUIZ_H //This line says, “okay, we’re now defining QUIZ_H”.
               //Next time the compiler sees #ifndef QUIZ_H, it will skip the contents — preventing the header from being included multiple times.
               //Why this is useful: It avoids “duplicate definition” errors when a header is included in multiple .cpp files.

#include <string> //Includes the C++ Standard Library string header
                  //This allows the use of std::string in your function declarations.
                  //Without this, the compiler won’t recognize std::string.

int startQuiz();
bool askQuestion(const std::string& question, const std::string options[4], char correctAnswer);

#endif