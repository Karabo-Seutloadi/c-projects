
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int* first = new int[4];
    for (int row = 0; row < 4; row++) {
        first[row] = row;
    }
    int* second = new int[4];

    //deep copy
    for (int row = 0; row < 4; row++) {
        first[row] = second[row];
    }

    delete []first;
    delete[]second;
    first = 0;
    second = 0;
}

