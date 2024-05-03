#include <iostream>

using namespace std;

int main(int argc, char)
{

    for (int numero = 100; numero >= 1; numero--)
    {
        if (numero % 2 != 0)
        {
            cout << numero << endl;
        }
    }

    return 0;
} 
