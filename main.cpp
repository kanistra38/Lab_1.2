#include <iostream>
#include "CCex.h"

int main() {
    CCex *cex = new CCex ("Name", "Boss", 5);
    OutputInfo(*cex);
    CCex *cex2 = new CCex(*cex);
    OutputInfo(*cex2);
    delete cex, cex2;
    cex = new CCex();
    OutputInfo(*cex);
    cex->SetName("Name");
    OutputInfo(*cex);
    delete cex;
    return 0;
}
