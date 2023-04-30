#include <iostream>
#include <Windows.h>
#include "struct_type_project_1.h"
#include "ModulesTkachenko.h"
#include "ModulesChervonyi.h"
#include "ModulesHorbachov.h"

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    read_registry();
    while (1) {
        cout << "======== ���� ========" << endl;
        cout << "1. ������� ���� ������" << endl;
        cout << "2. ������ ����� ����� �� ������" << endl;
        cout << "3. �������� ����� � ����" << endl;
        cout << "4. ����� ��������� �� ������" << endl;
        cout << "5. ��������� ��������� �� ������" << endl;
        cout << "6. ����� � ��������" << endl;
        int option;
        cout << "������ ��, �������� ��������� �����: ";
        cin >> option;
        switch (option) {
            case 1:
                print_registry();
                break;
            case 2:
                add_car();
                break;
            case 3:
                write_registry();
                break;
            case 4:
                search_car();
                break;
            case 5:
                remove_car();
                break;
            case 6:
                cout << "�����..." << endl;
                write_registry();
                return 0;
            default:
                cout << "������������ ����." << endl;
                break;
        }
    }
    return 0;
}
