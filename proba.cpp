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
                else if(i==5 && j<=5 || i==7 && j<=16 && j>=12 || i==7 && j>=19 && j<=22 || i==7 && j>=24 && j<=28)
                    cout << "# ";
                else if(i>=6 && i<=11 && j==5 || i>=1 && i<=6 && j==9 || i>=3 && i<=6 && j==14 || i>=1 && i<=6 && j==19)
                    cout << "# ";
                else if(i>=10 && i<=11 && j==10 || i>=10 && i<=11 && j==11 || i>=10 && i<=11 && j==15 || i>=10 && i<=11 && j==16|| i>=3 && i<=4 && j==21 || i>=3 && i<=4 && j==22 || i>=3 && i<=4 && j==25 || i>=3 && i<=4 && j==26)
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