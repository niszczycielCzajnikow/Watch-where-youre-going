#include <iostream>
using namespace std;

int main() {
    int c=15, r=30;
    int t[15][30];
    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++) {
            t[i][j] = 1;
        }
    }
    for(int i=0; i<c; i++) {
        for (int j=0; j<r; j++) {
        if(t[i][j] == 1) {
            cout << "- ";
        }
        cout << endl;
    }
    return 0;
    }
}