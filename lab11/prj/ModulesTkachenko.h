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
    cout << "�������: ";
    cin >> first_name;
    cout << "��'�: ";
    cin >> last_name;
    cout << "�� �������: ";
    cin >> po_batkovi;
    car.full_name = first_name + " " + last_name + " " + po_batkovi;
    cout << "�����: ";
    cin >> car.brand;
    cout << "г� �������: ";
    cin >> car.year;
    cout << "���� (01.01.2001): ";
    cin >> car.data;
    cout << "��������� ����� (BA1234BA): ";
    cin >> car.license_plate;
    cout << "�������: ";
    cin >> car.additions;
    registry.push_back(car);
    cout << "����� ������ �� �������." << endl;
}

void remove_car() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    string license_plate;
    cout << "������ ��������� ����� ��� ���������: ";
    cin >> license_plate;
    for (auto i = registry.begin(); i != registry.end(); ++i) {
        if (i->license_plate == license_plate) {
            registry.erase(i);
            cout << "��������� �������� �� �������." << endl;
            return;
        }
    }
    cout << "�� �������� ��������� � ����� �������." << endl;
}

#endif // MODULESTKACHENKO_H_INCLUDED
