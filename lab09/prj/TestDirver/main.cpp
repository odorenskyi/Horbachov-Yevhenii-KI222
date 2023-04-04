#include <iostream>
#include "ModulesHorbachov.h"

using namespace std;

int main()
{
    cout << "First unit test" << endl;

    for (int i = 0; i < 5; i++)
    {
        float salary;
        int years;
        float result;

        cout << "Enter " << i + 1 << " salary: ";
        cin >> salary;

        cout << "Enter " << i + 1 << " years: ";
        cin >> years;

        cout << "Enter " << i + 1 << " result: ";
        cin >> result;

        if (task9_1(salary, years) == result)
            cout << "Passed " << i + 1 << " test" << endl;
        else
            cout << "Failed " << i + 1 << " test" << endl;
    }

    cout << "Second unit test" << endl;

    for (int i = 0; i < 5; i++)
    {
        int lengthHead;
        string result;

        cout << "Enter " << i + 1 << " length of head: ";
        cin >> lengthHead;

        cout << "Enter " << i + 1 << " result: ";
        cin >> result;

        if (task9_2(lengthHead) == result)
            cout << "Passed " << i + 1 << " test" << endl;
        else
            cout << "Failed " << i + 1 << " test" << endl;
    }

    cout << "Third unit test" << endl;

    for (int i = 0; i < 5; i++)
    {
        int number;
        int result;

        cout << "Enter " << i + 1 << " number: ";
        cin >> number;

        cout << "Enter " << i + 1 << " result: ";
        cin >> result;

        if (task9_3(number) == result)
            cout << "Passed " << i + 1 << " test" << endl;
        else
            cout << "Failed " << i + 1 << " test" << endl;
    }

    return 0;
}
