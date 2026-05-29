// 20230918 장인영

#include "ComplexList.h"
#include "Complex.h"
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    ComplexList cl;

    for (int i = 0; i < 10; i++)
        cl.Add(i + 1, i + 2);

    cout << "Get Test\n" << endl;

    for (int i = 0; i < cl.Length(); i++)
        cl.Get(i).ShowComplex();

    cout << "\npGet Test\n" << endl;

    for (int i = 0; i < cl.Length(); i++)
        cl.pGet(i)->ShowComplex();

    cout << "\n예외처리 Test\n" << endl;

    try
    {
        cl.Get(100).ShowComplex();
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}