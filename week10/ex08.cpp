#include <iostream>
using namespace std;

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
enum colors { white, red, blue, green, black };
enum boolean { FALSE, TRUE };
enum months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum major { COMMUNICATION, COMPUTER, ELECTRIC, ELECTRONICS };
enum component { MAIN_BOARD, CPU, GRAPHIC_CARD, DISK, MEMORY };
enum levels { low = 1, medium, high };
enum CarOptions {
    SunRoof = 0x01,
    Spoiler = 0x02,
    FogLights = 0x04,
    TintedWindow = 0x08,
};

int main() {
    enum days day = FRI;
    cout << day << endl;  

    return 0;
}
