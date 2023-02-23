#include <iostream>
#include <Windows.h>
#include "ModulesHorbachov.h"

using namespace std;

name_and_surname(){
    cout << "Горбачов Євгеній " << (char)0xA9 << endl;
}

logic_exercise(char a, char b){
    if (a + 7 == b){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}

decimal_and_hex(int x, int y, int z){
    cout << "Десяткова: " << x << ", " << y << ", " << z << endl;
    printf("Шістнадцяткова: %X, %X, %X\n", x, y, z);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    name_and_surname();
    char a, b;
    cout << "Введіть значення a, b: " << endl;
    cin >> a >> b;
    logic_exercise(a, b);
    float x, y, z;
    cout << "Введіть значення x, y, z: " << endl;
    cin >> x >> y >> z;
    decimal_and_hex(x, y, z);
    cout << "S = " << s_calculation(x, y, z);

    return 0;
}
