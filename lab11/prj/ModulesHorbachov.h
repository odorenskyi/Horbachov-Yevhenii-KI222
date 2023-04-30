#ifndef MODULESHORBACHOV_H_INCLUDED
#define MODULESHORBACHOV_H_INCLUDED

#include "struct_type_project_1.h"

#include <iostream>
#include <fstream>
#include <Windows.h>

void write_registry() {
	SetConsoleOutputCP(1251);
    ofstream out("registry.txt");
    if (!out) {
        cout << "Error: не вдалося відкрити файл для запису." << endl;
        return;
    }
    for (const auto& car : registry) {
        out << car.full_name << " " << car.brand << " " << car.year << " " << car.data << " " << car.license_plate << " " << car.additions << endl;
    }
    out.close();
    cout << "Реєстр записано у файл registry.txt." << endl;
}

void read_registry() {
    SetConsoleOutputCP(1251);
    string first_name;
    string last_name;
    string po_batkovi;
    ifstream in("registry.txt");
    if (!in) {
        cout << "Немає існуючого реєстру." << endl;
        return;
    }

    registry.clear();

    while (!in.eof()) {
        Car car;
        in >> first_name >> last_name >> po_batkovi;
        car.full_name = first_name + " " + last_name + " " + po_batkovi;
        in >> car.brand >> car.year >> car.data >> car.license_plate >> car.additions;
        if (in) {
            registry.push_back(car);
        }
    }
    in.close();
}

#endif // MODULESHORBACHOV_H_INCLUDED
