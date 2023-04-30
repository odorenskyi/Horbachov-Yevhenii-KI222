#ifndef MODULESCHERVONYI_H_INCLUDED
#define MODULESCHERVONYI_H_INCLUDED

#include "struct_type_project_1.h"

#include <iostream>
#include <Windows.h>

void print_car(const Car& car) {
  SetConsoleOutputCP(1251);
    cout <<"ϲ�: " << car.full_name << endl
         <<"�����: "<< car.brand <<endl
         <<"г� �������: " << car.year <<endl
         <<"����: " << car.data << endl
         <<"��������� �����: " << car.license_plate <<endl
         <<"�������: " << car.additions << endl;
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
    cout << "������ ��������� ����� ��� ������: ";
    cin >> license_plate;
    for (const auto& car : registry) {
        if (car.license_plate == license_plate) {
            print_car(car);
            return;
        }
    }
    cout << "�� �������� ��������� � ����� �������." << endl;
}

#endif // MODULESCHERVONYI_H_INCLUDED
