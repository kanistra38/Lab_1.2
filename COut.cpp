#include <iostream>
#include "CCex.h"
#include "COut.h"

using namespace std;

void OutputInfo(CCex &cex) {
    cout << "Name of Section: " << cex.name << endl;
    cout << "The character classes: " << cex.boss << endl;
    cout << "Price of section: " << cex.kil << endl;
}
