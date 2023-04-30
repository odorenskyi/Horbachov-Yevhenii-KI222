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
        cout << "======== МЕНЮ ========" << endl;
        cout << "1. Вивести весь регістр" << endl;
        cout << "2. Додати новий запис до реєстру" << endl;
        cout << "3. Записати реєстр у файл" << endl;
        cout << "4. Пошук автомобіля по номеру" << endl;
        cout << "5. Видалення автомобіля по номеру" << endl;
        cout << "6. Вихід з програми" << endl;
        int option;
        cout << "Оберіть дію, вказавши відповідний номер: ";
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
                cout << "Вихід..." << endl;
                write_registry();
                return 0;
            default:
                cout << "Неправильний ввод." << endl;
                break;
        }
    }
    return 0;
}
