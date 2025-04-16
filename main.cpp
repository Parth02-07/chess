#include <iostream>
#include <string>
#include <limits>
#include "chess.h"

using namespace std;

int main() {
    Board b;
    string s;
    bool newgame = true;

    cout << "  _____ _   _ ______  _____ _____ \n";
    cout << " / ____| | | |  ____|| ____| ____|\n";
    cout << "| |    | || | | |__  | |__ | |__  \n";
    cout << "| |    |  _  |  __| |___ \\|___ \\ \n";
    cout << "| |____| | | | |____ ____) |___) |\n";
    cout << " \\_____|_| |_|______|_____/|____/ \n" << endl;
    cout << "A simple console chess game" << endl;
    cout << "Enter any key to continue: ";
    cin >> s;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (newgame) {
        b.setBoard();
        b.playGame();

        cout << "Do you want to play again? (y for yes, anything else for no): ";
        cin >> s;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (s != "y" && s != "Y") {
            newgame = false;
        }
    }

    cout << "\nThanks for playing!" << endl;
    return 0;
}
