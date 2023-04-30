#ifndef MODULESTKACHENKO_H_INCLUDED
#define MODULESTKACHENKO_H_INCLUDED

#include "struct_type_project_1.h"

#include <iostream>
#include <Windows.h>

void add_car() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Car car;
    string first_name;
    string last_name;
    string po_batkovi;
    cout << "Прізвище: ";
    cin >> first_name;
    cout << "Ім'я: ";
    cin >> last_name;
    cout << "По батькові: ";
    cin >> po_batkovi;
    car.full_name = first_name + " " + last_name + " " + po_batkovi;
    cout << "Марка: ";
    cin >> car.brand;
    cout << "Рік випуску: ";
    cin >> car.year;
    cout << "Дата (01.01.2001): ";
    cin >> car.data;
    cout << "Державний номер (BA1234BA): ";
    cin >> car.license_plate;
    cout << "Додатки: ";
    cin >> car.additions;
    registry.push_back(car);
    cout << "Запис додано до регістру." << endl;
}

void remove_car() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    string license_plate;
    cout << "Введіть державний номер для видалення: ";
    cin >> license_plate;
    for (auto i = registry.begin(); i != registry.end(); ++i) {
        if (i->license_plate == license_plate) {
            registry.erase(i);
            cout << "Автомобіль видалено із регістру." << endl;
            return;
        }
    }
    cout << "Не знайдено автомобіля з таким номером." << endl;
}

#endif // MODULESTKACHENKO_H_INCLUDED
