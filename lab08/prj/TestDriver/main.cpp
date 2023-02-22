#include <iostream>
#include "ModulesHorbachov.h"

using namespace std;

int main()
{
    float input_array[5][3] = {{1.0, 2.0, 3.0}, {0.1, 7.5, 8.1}, {5.2, 0, 10}, {0.7, 6.5, 15.7}, {5, 4, 3}};
    float output_array[5] = {{4.36338}, {1.19571}, {2.28035}, {22.57255}, {248828.48437}};
    for(int i=0; i<size(input_array); i++)
        {
        float s_calc = s_calculation(input_array[i][0], input_array[i][1], input_array[i][2]);
        if(s_calc==output_array[i]){
            cout << "Testcase " << i+1 << " passed" << endl;
        }
        else{
            cout << "Testcase " << i+1 << " failed"<< endl;
        }
    }
    return 0;
}
