#ifndef STRUCT_TYPE_PROJECT_1_H_INCLUDED
#define STRUCT_TYPE_PROJECT_1_H_INCLUDED

#include <vector>
using namespace std;

struct Car {
    string full_name;
    string brand;
    int year;
    string data;
    string license_plate;
    string additions;
};
vector<Car> registry;

#endif // STRUCT_TYPE_PROJECT_1_H_INCLUDED
