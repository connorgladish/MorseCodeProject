//Name:Connor Gladish
//Date: 03/10/23
//Description: Morse Code
#include <string>
#include <iostream>
using namespace std;

//https://www.programiz.com/cpp-programming/switch-case
string toMorseCode(char c) {
    switch (tolower(c)) {
    case 'a':
        return ".-";
    case 'b':
        return "-...";
    case 'c':
        return "-.-.";
    case 'd':
        return "-..";
    case 'e':
        return ".";
    case 'f':
        return "..-.";
    case 'g':
        return "--.";
    case 'h':
        return "....";
    case 'i':
        return "..";
    case 'j':
        return ".---";
    case 'k':
        return "-.-";
    case 'l':
        return ".-..";
    case 'm':
        return "--";
    case 'n':
        return "-.";
    case 'o':
        return "---";
    case 'p':
        return ".--.";
    case 'q':
        return "--.-";
    case 'r':
        return ".-.";
    case 's':
        return "...";
    case 't':
        return "-";
    case 'u':
        return "..-";
    case 'v':
        return "...-";
    case 'w':
        return ".--";
    case 'x':
        return "-..-";
    case 'y':
        return "-.--";
    case 'z':
        return "--..";
    case '0':
        return "-----";
    case '1':
        return ".----";
    case '2':
        return "..---";
    case '3':
        return "...--";
    case '4':
        return "....-";
    case '5':
        return ".....";
    case '6':
        return "-....";
    case '7':
        return "--...";
    case '8':
        return "---..";
    case '9':
        return "----.";
    case '.':
        return ".-.-.-";
    case ',':
        return "--..--";
    case ':':
        return "---...";
    case '?':
        return "..--..";
    case '\'':
        return ".----.";
    case '-':
        return "-....-";
    case '/':
        return "-..-.";
    case '"':
        return ".-..-.";
    case '@':
        return ".--.-.";
    default:
        return "";
    }
}

void printA() {
    cout << ".- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. ---";
    cout << " .--. --.- .-. ... - ..- ...- .-- -..- -.-- --..\n";
}

void printP() {
    cout << ".-.-.- --..-- ---... ..--.. .----. -....- -..-. .-..-. .--.-.\n";
}

void printN() {
    cout << "----- .---- ..--- ...-- ....- ..... -.... --... ---.. ----.\n";
}

void printI() {
    cout << "-... -... / .- -. -.. / --.. -...\n";
}

int main() {

    while (true) {
        string input;
        char choice;

        cout << "Menu" << endl;
        cout << "A - Alphabet" << endl;
        cout << "I - Initials" << endl;
        cout << "N - Numbers" << endl;
        cout << "P - Punctuations" << endl;
        cout << "S - User Sentence" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter command:";

        cin >> choice;

        switch (choice) {
        case 'a':
            cout << "Here are the letters of the alphabet (A-Z) in Morse code:"
                << endl;
            printA();
            break;
        case 'i':
            cout << "Here are the team member initials in Morse code:" << endl;
            printI();
            break;
        case 'n':
            cout << "Here are the numbers (0-9) in Morse code:" << endl;
            printN();
            break;
        case 'p':
            cout << "Here are the punctuation marks (.,:?'-/""@)\n";
            cout << "in morse code:\n";
            printP();
            break;
        case 's':
            cout << "Please enter a sentence: ";
            getline(cin, input); //the trash cin
            getline(cin, input); // get user input
            cout << "Here is your sentence in morse code:\n";

            //Got help from ChatGPT here on how I would create this ForStatement
            //since I kept getting so many errors.
            for (string::size_type i = 0; i < input.size(); i++) {
                if (input[i] == ' ') {
                    cout << "/ ";
                }
                else {
                    cout << toMorseCode(input[i]) << " ";
                }
            }
            cout << endl;
            break;
        case 'q':
            cout << "Program done";
            return false;
            break;
        }

    }
    return 0;
}

/* This project was probably the easiest.
Just used a switch case and some simple function writing. 
Was fun.
*/