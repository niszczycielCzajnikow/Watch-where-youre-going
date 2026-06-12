#include <iostream>
using namespace std;

#define GREEN "\033[38;2;0;222;0m"
#define reset "\033[0m"
#define WHITE "\033[38;2;255;255;255m"

int main()
{
	int t[15][30];
    int r = 15, c = 30;
    char move;
    int rmove=2, cmove=2;
    
	// podstawienie wartosci do tablicy
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
		{
            if(i == 0 || i == r-1 || j == 0 || j == c-1)
			t[i][j] = 1; 
            else if(i==5 && j<=5 || i==7 && j<=16 && j>=12 || i==7 && j>=19 && j<=22 || i==7 && j>=24 && j<=28)
			t[i][j] = 1;
			else if(i>=6 && i<=11 && j==5 || i>=1 && i<=6 && j==9 || i>=3 && i<=6 && j==14 || i>=1 && i<=6 && j==19)
			t[i][j] = 1;
            else if(i>=10 && i<=11 && j==10 || i>=10 && i<=11 && j==11 || i>=10 && i<=11 && j==15 || i>=10 && i<=11 && j==16|| i>=3 && i<=4 && j==21 || i>=3 && i<=4 && j==22 || i>=3 && i<=4 && j==25 || i>=3 && i<=4 && j==26)
			t[i][j] = 1;
			else if(i==7 && j==23)
			t[i][j] = 2;
            else if(i==rmove && j==cmove)
			t[i][j] = 3;
			else
			t[i][j] = 0;
        }
    }
    
    // print tablicy
    while(true)
    {
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++){
            if (t[i][j] == 0) {
                cout << reset << "- ";
            }
			else if (t[i][j] == 1) {
				cout << GREEN << "# ";
			}
			else if (t[i][j] == 2) {
				cout << WHITE << "X ";
			}
            else if(i==rmove && j==cmove) {
                cout << WHITE << "@ ";
            }
        }
        cout << endl;
    }

    cout << "Aby poruszac sie, uzyj klawiszy (W,A,S,D): ";
    cin >> move;
    if(move == 'w' || move == 'W')
        rmove++;
    }
}