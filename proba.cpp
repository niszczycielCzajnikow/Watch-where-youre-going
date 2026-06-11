#include <iostream>
using namespace std;

int main() {
    const int ROWS = 15;
    const int COLS = 30;

    int x = 2; // kolumna gracza
    int y = 2; // wiersz gracza

    char move;

    while (true) {
        // Rysowanie planszy
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (i == y && j == x)
                    cout << "P ";
                else if(i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1)
                    cout << "# ";
                else
                    cout << ". ";
            }
            cout << '\n';
        }

        cout << "\nWASD do ruchu, q aby wyjsc: ";
        cin >> move;

        if (move == 'q')
            break;

        // Ruch
        if (move == 'w' && y > 0) y--;
        if (move == 's' && y < ROWS - 1) y++;
        if (move == 'a' && x > 0) x--;
        if (move == 'd' && x < COLS - 1) x++;

        cout << "\n\n";
    }

    return 0;
}