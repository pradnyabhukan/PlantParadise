#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double ROSE = 10.00,
                 TULIP = 5.00,
                 SUNFLOWER = 7.50,
                 ORCHID = 20.00;
    double numItems = 0,
           menuItem,
           total = 0;
    char itemLetter;

    cout << "=====================================================\n"
         << "\t\tWelcome to Plant Paradise\n"
         << "=====================================================" << endl;

    cout << fixed << setprecision(2) << right;

    do {
        cout << "-----------------------------------------------------\n\n"
             << "\tA\tRose" << setw(29) << ROSE
             << "\n\tB\tTulip" << setw(28) << TULIP
             << "\n\tC\tSunflower" << setw(24) << SUNFLOWER
             << "\n\tD\tOrchid" << setw(27) << ORCHID
             << "\n\tE\tExit" << endl;

        cout << "\nPlease enter the next menu item Letter: ";
        cin >> itemLetter;

        switch (itemLetter) {
            case 'A':
                menuItem = ROSE;
                break;
            case 'B':
                menuItem = TULIP;
                break;
            case 'C':
                menuItem = SUNFLOWER;
                break;
            case 'D':
                menuItem = ORCHID;
                break;
            case 'E':
                break;
            default:
                cerr << "\nPlease pick a valid option\n";
        }

        if (itemLetter == 'A' || itemLetter == 'B' || itemLetter == 'C' || itemLetter == 'D')
            numItems++;

        cout << "\nNumber of items: " << setprecision(0) << numItems << endl;

        if (itemLetter == 'A' || itemLetter == 'B' || itemLetter == 'C' || itemLetter == 'D')
            total += menuItem;

        cout << "Total: " << setprecision(2) << total << endl;

    } while (itemLetter != 'E');

    cout << "\nThank you! Enjoy your plants!" << endl;

    return 0;
}
