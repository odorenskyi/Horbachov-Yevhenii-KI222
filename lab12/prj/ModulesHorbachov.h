#ifndef MODULESHORBACHOV_H_INCLUDED
#define MODULESHORBACHOV_H_INCLUDED
#include <fstream>
#include <string>

void HelloWorld()
{
    std::cout << "Hello wolrd";
}

class ClassLab12_Horbachov
{
public:
    ClassLab12_Horbachov(const float length = 1, const float width = 1, const float height = 1) :
        Length(length),
        Width(width),
        Height(height)
    {

    }
    float getV();
    float getLength();
    float getWidth();
    float getHeight();
    float changeLength(float length);
    float changeWidth(float width);
    float changeHeight(float heigth);

private:
    float Length;
    float Width;
    float Height;
};

float ClassLab12_Horbachov::getV()
{
    return Length * Width * Height;
}

float ClassLab12_Horbachov::changeLength(float length)
{
    Length = length;
}

float ClassLab12_Horbachov::changeWidth(float width)
{
    Width = width;
}

float ClassLab12_Horbachov::changeHeight(float height)
{
    Height = height;
}

float ClassLab12_Horbachov::getLength()
{
    return Length;
}

float ClassLab12_Horbachov::getHeight()
{
    return Height;
}

float ClassLab12_Horbachov::getWidth()
{
    return Width;
}

bool checkFileInFolder()
{
    std::string file = __FILE__;
    size_t checking = file.find("\\prj");

    if (checking == std::string::npos)
    {
        std::ofstream fileResult("../../TestSuite/TestResult.txt");

        fileResult << "Встановлені вимоги порядку виконання лабораторної роботи порушено!\n";
        for (int i = 0; i < 100; i++)
            std::cout << "\a";

        fileResult.close();
        return false;
    }

    return true;
}

std::string writeResultToFile(ClassLab12_Horbachov akvarium, int counter)
{
    return "Test Suite №" + std::to_string(counter)
     + "\nLength = " + std::to_string(akvarium.getLength())
     + "\theight = " + std::to_string(akvarium.getHeight())
     + "\twidth = " + std::to_string(akvarium.getWidth())
     + "\nResult = " + std::to_string(akvarium.getV()) + "\n";
}

#endif // MODULESHORBACHOV_H_INCLUDED
