#include <iostream>
#include "CCex.h"

using namespace std;

CCex::CCex(void)
    : name("none"), boss("none"), kil(0) {
    cout << endl << "*constructor is work" << endl << endl;
}

CCex::CCex(char *n, char *b, int k)
    : name(n), boss(b), kil(k) {
    cout << endl << "*constructor with parameters is work" << endl << endl;
}

CCex::CCex(CCex &cex)
    : name(cex.name), boss(cex.boss), kil(cex.kil) {
    cout << endl << "*constructor copy is work" << endl << endl;
}

CCex::~CCex(void) {
    cout << endl << "*constructor was deleted" << endl << endl;
}

void CCex::SetName(char *n) {
    name = n;
    cout << endl << "*Setter is work" << endl;
}

char *CCex::GetName() {
    return name;
}

void CCex::SetBoss(char *b) {
    boss = b;
    cout << endl << "*Setter is work" << endl;
}

char *CCex::GetBoss() {
    return boss;
}

void CCex::SetKil(int k) {
    kil = k;
    cout << endl << "*Setter is work" << endl;
}

int CCex::GetKil() {
    return kil;
}
