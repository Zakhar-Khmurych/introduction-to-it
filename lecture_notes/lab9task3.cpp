#include <iostream>
using namespace std;

int compare(int a=0, int b=0)
{
    if (a > b) {
        return a;
    }
    if (b > a) {
        return b;
    }
}

int main()
{
    cout << compare(24, 45);
}

