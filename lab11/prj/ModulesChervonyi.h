#ifndef MODULESCHERVONYI_H_INCLUDED
#define MODULESCHERVONYI_H_INCLUDED

#include "struct_type_project_1.h"

#include <iostream>
#include <Windows.h>

void print_car(const Car& car) {
  SetConsoleOutputCP(1251);
    cout <<"ПІБ: " << car.full_name << endl
         <<"Марка: "<< car.brand <<endl
         <<"Рік випуску: " << car.year <<endl
         <<"Дата: " << car.data << endl
         <<"Державний номер: " << car.license_plate <<endl
         <<"Примітки: " << car.additions << endl;
}

void print_registry() {
    for (const auto& car : registry) {
        print_car(car);
    }
}

void search_car() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    string license_plate;
    cout << "Введіть державний номер для пошуку: ";
    cin >> license_plate;
    for (const auto& car : registry) {
        if (car.license_plate == license_plate) {
            print_car(car);
            return;
        }
    }
    cout << "Не знайдено автомобіля з таким номером." << endl;
}

#endif // MODULESCHERVONYI_H_INCLUDED
