#include <iostream>
#include "ModulesHorbachov.h"

using namespace std;

int main()
{
    while (true)
    {
        char action;
        cout << "Choose action: ";
        cin >> action;

        switch (action)
        {
        case 'e':
            float x, y, z;

            cout << "Enter x, y, z: ";
            cin >> x >> y >> z;

            cout << s_calculation(x, y, z) << endl;

            continue;
        case 'r':
            float salary;
            int years;

            cout << "Enter salary and years: ";
            cin >> salary >> years;

            cout << task9_1(salary, years) << endl;

            continue;
        case 'f':
            int lengthHead;

            cout << "Enter length of head: ";
            cin >> lengthHead;

            cout << task9_2(lengthHead) << endl;

            continue;
        case 't':
            int number;

            cout << "Enter a number: ";
            cin >> number;

            cout << task9_3(number) << endl;

            continue;
        default:
            if (action == 'g' || action == 'G' || action == 'o')
                break;
            continue;
        }
        break;
    }
    return 0;
}
