#include <iostream>
#include <Windows.h>
#include "ModulesHorbachov.h"

using namespace std;

string name_and_surname(){
    return "Горбачов Євгеній (char)0xA9";
}

bool logic_exercise(char a, char b){
    if (a + 7 == b){
        return "true";
    }
    else{
        return "false";
    }
}

float decimal_and_hex(int x, int y, int z){
    cout << "Десяткова: " << x << ", " << y << ", " << z << endl;
    printf("Шістнадцяткова: %X, %X, %X\n", x, y, z);
    return s_calculation(x, y, z);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << name_and_surname() << endl;
    char a, b;
    cout << "Введіть значення a, b: " << endl;
    cin >> a >> b;
    cout << logic_exercise(a, b) << endl;;
    float x, y, z;
    cout << "Введіть значення x, y, z: " << endl;
    cin >> x >> y >> z;
    cout << decimal_and_hex(x, y, z);

    return 0;
}
