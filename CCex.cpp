#include <iostream>
#include <string>
#include "CCex.h"

using namespace std;

CCex::CCex(void) {
    cout << "constructor is work" << endl << endl;
}

CCex::CCex(char *n, char *b, int k)
    : name(n), boss(b), kil(k) {
    cout << "constructor with parameters is work" << endl << endl;
}

CCex::CCex(CCex &cex)
    : name(cex.name), boss(cex.boss), kil(cex.kil) {
    cout << "constructor copy is work" << endl << endl;
}

CCex::~CCex(void) {
    cout << "constructor was deleted" << endl << endl;
}
