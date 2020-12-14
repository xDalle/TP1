#include <iostream>
#include "testes.h"
#include <cstdlib>

using namespace std;

int main()
{
    system("Color 0F");
    Teste *T;
    T = new Teste;
    T->Execute();
    delete T;

    return 0;
}
