#include <iostream>
#include <string>
#include "CCex.h"

using namespace std;

int main()
{
    CCex *cex = new CCex ("Name","Boss",5);
    OutputInfo (*cex);
    return 0;
}
