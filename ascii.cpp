#include <iostream>
using namespace std;

int main(){
    int inAscii;
    char something;

    cout << "Wprowadź jakiś znak: ";
    cin >> something;
    inAscii=something;
    system("clear");
    cout << "Numer w Ascii: " << inAscii;
    
    return 0;
}