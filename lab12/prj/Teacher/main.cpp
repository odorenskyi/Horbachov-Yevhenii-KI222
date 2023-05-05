#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "ModulesHorbachov.h"

using namespace std;

int main()
{
    string line;
    if(checkFileInFolder() == false)
        return 0;

    ClassLab12_Horbachov akvarium;
    ifstream Tests_File("../../TestSuite/Tests.txt");
    ofstream TestResult_File("../../TestSuite/TestResult.txt");

    if (Tests_File.is_open() || TestResult_File.is_open())
    {
        int counter = 1;
        float number;
        while (getline(Tests_File, line, '\n'))
        {
            istringstream iss(line);
            vector<float> arrNumbers;

            while (iss >> number)
                arrNumbers.push_back(number);

            akvarium.changeLength(arrNumbers[0]);
            akvarium.changeWidth(arrNumbers[1]);
            akvarium.changeHeight(arrNumbers[2]);
            TestResult_File << writeResultToFile(akvarium, counter);
            counter++;
        }
    }
    Tests_File.close();
    TestResult_File.close();
    system("pause");
    return 0;
}
