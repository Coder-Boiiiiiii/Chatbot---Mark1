// CHATBOT - MARK 1.cpp

//Includes
#include <iostream>
#include <string>

using namespace std;

void main()
{
    //inputs
    string sentence;
    string Question[11];

    //Questions
    Question[0] = "hello";
    Question[1] = "how are you";
    Question[2] = "how are you?";
    Question[3] = "what is your name?";
    Question[4] = "what is your name";
    Question[5] = "who made you?";
    Question[6] = "who made you";
    Question[7] = "hi";
    Question[8] = "hey";
    Question[9] = "hola";
    Question[10] = "shortcuts";

    //starting sentence
    cout << "Please type in lowercase" << endl;

    string Answers[10] = {
        "hi!",
        "I am fine, thank you",
        "I am fine, thank you",
        "My name is JARVIS",
        "My name is JARVIS",
        "MST is the person who programmed me",
        "MST is the person who programmed me",
        "sup",
        "Heyyyyyyyyyyyyyyyyyyyyy",
        "Hola"
    };

    do {
        getline(cin, sentence);
        if (sentence == Question[0]) {
            cout << "Hi!" << endl;
        }

        else if (sentence == Question[1]) {
            cout << "I am fine, thank you" << endl;
        }

        else if (sentence == Question[2]) {
            cout << "I am fine, thank you" << endl;
        }

        else if (sentence == Question[3]) {
            cout << "My name is JARVIS" << endl;
        }

        else if (sentence == Question[4]) {
            cout << "My name is JARVIS" << endl;
        }
        
        else if (sentence == Question[5]) {
            cout << "MST is the person who programmed me" << endl;
        }

        else if (sentence == Question[6]) {
            cout << "MST is the person who programmed me" << endl;
        }

        else if (sentence == Question[7]) {
            cout << "sup" << endl;
        }

        else if (sentence == Question[8]) {
            cout << "Heyyyyyyyyyyyyyyyyyyyyy" << endl;
        }

        else if (sentence == Question[9]) {
            cout << "Hola" << endl;
        }

        else if (sentence == Question[10]) {
            cout << "Youtube ===========> y" << endl;
            cout << "Instagram ==============> insta" << endl;
            cout << "Facebook =============> fb" << endl;
            cout << "Google =============> ggl" << endl;
        }

        else if (sentence == "y") {
            system("start https://www.youtube.com/");
        }

        else if (sentence == "fb") {
            system("start https://www.facebook.com/");
        }

        else if (sentence == "insta") {
            system("start https://www.instagram.com/");
        }

        else if (sentence == "ggl") {
            system("start https://www.google.com/");
        }

        else {
            cout << sentence + " " + "is not a valid question" << endl;
        }
    }

    while (sentence != "exit");
}
