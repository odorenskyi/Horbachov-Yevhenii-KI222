#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <windows.h>
#include <fstream>
#include <bitset>

using namespace std;

float s_calculation(float x, float y, float z)
{
    float S;
    S = abs(pow(z*y, abs(x)) - y/M_PI - sqrt(x));
    return roundf(S * 100000.0f) / 100000.0f;
}

float task9_1(float salary, int years)
{
    float procent = 0;
    if (years >= 2 && years <= 5)
        procent = 0.05;

    if (years >= 5 && years <= 10)
        procent = 0.1;

    if (years > 10)
        procent = 0.25;

    salary += salary * procent;

    return salary;
}
std::string task9_2(int lengthHead)
{
    if (lengthHead >= 53 && lengthHead <= 62)
    {

        if (lengthHead >= 53 && lengthHead <= 54)
            return "XS";

        if (lengthHead >= 55 && lengthHead <= 56)
            return "S";

        if (lengthHead >= 57 && lengthHead <= 58)
            return "M";

        if (lengthHead >= 59 && lengthHead <= 60)
            return "L";

        if (lengthHead >= 61 && lengthHead <= 62)
            return "XL";
    }
    return "";
}

int task9_3(int number)
{
    int bit = (number >> 14) & 1;
    if (bit == 1)
    {
        int count = 0;

        while ((number & 1) == 0)
        {
            count++;
            number >>= 1;
        }
        return count;
    }
    else
    {
        int count = 0;

        while (number != 0)
        {
            if (number & 1)
                count++;
            number >>= 1;
        }
        return count;
    }
}

int quntityvowels_task_10_1(string path_output, string path_input){
    ifstream infile(path_input);

    if (!infile.is_open())
    {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    ofstream outfile("output.txt");

    if (!outfile.is_open())
    {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }


    string sentence;
    int exclamation_count = 0;
    int question_count = 0;
    string no_vowels_sentence;

    outfile << "Горбачов Євгеній" << endl;
    outfile << "ЦНТУ | Кропивницький | Україна | 2023" << endl;

    while (getline(infile, sentence))
    {
        for (char c : sentence)
        {
            if (c == '!')
            {
                exclamation_count++;
            }
            else if (c == '?')
            {
                question_count++;
            }
        }

        for (char c : sentence)
        {
            if (c != 'А' && c != 'а' && c != 'У' && c != 'у' && c != 'О' &&
                c != 'о' && c != 'Е' && c != 'е' && c != 'І' && c != 'і' &&
                c != 'И' && c != 'и' && c != 'Я' && c != 'я' && c != 'Ю' &&
                c != 'ю' && c != 'Ї' && c != 'ї' && c != 'Є' && c != 'є')
            {

                no_vowels_sentence += c;
            }
        }

        outfile << "Кількість знаків \"!\" у реченні: " << exclamation_count << endl;
        outfile << "Кількість знаків \"?\" у реченні: " << question_count << endl;
        outfile << "Речення без голосних літер: " << no_vowels_sentence << endl;

        break;
    }

    infile.close();
    outfile.close();

    return 0;
}

int translitetext_task_10_2(string path_file){
    ifstream input(path_file);

    if(!input.is_open())
        return - 1;


    string enlower[] {"a", "b", "v", "h", "g", "d", "e", "ie", "zh", "z", "y",
                      "i", "i", "i", "k", "l", "m", "n", "o", "p", "r", "s",
                      "t", "u", "f", "kh", "ts", "ch", "sh", "shch", "iu", "ia", ""};

    string enupper[] = {"a", "b", "v", "h", "g", "d", "e", "ye", "zh", "z", "y",
                      "i", "yi", "y", "k", "l", "m", "n", "o", "p", "r", "s",
                      "t", "u", "f", "kh", "ts", "ch", "sh", "shch", "yu", "ya", ""};

    char ukr[] {'a', 'б', 'в', 'г', 'ґ', 'д', 'е', 'є', 'ж', 'з', 'и',
                'і', 'ї', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с',
                'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ю', 'я', 'ь'};


    string all_text;
    string line;

    while(getline(input, line))
    {
        for(int i = 0; i < line.length(); i++)
        {
            for(int j = 0; j < 33; j++)
            {
                if(line[i] == ukr[j])
                {
                    line.replace(i, 1, enlower[j]);
                    break;
                }
                if(line[i] == ukr[j] - 32)
                {
                    line.replace(i, 1, enupper[j]);
                    break;
                }
            }
        }
        all_text += line + '\n';
    }
    input.close();

    fstream file_append(path_file, ios::app);

    file_append << all_text << endl;

    char cur_time[128];
    time_t t = time(null);
    struct tm* ptm = localtime(&t);

    strftime(cur_time, 128, "%y-%m-%d %h:%m:%s", ptm);

    file_append << cur_time << endl;
    file_append.close();

    return 0;
}

int binarynumber_task_10_3(float x, float y, float z, int b, string path_file){
    fstream output(path_file, ios::app);

    if(!output.is_open())
        return -1;

    output << s_calculation(x, y ,z) << endl;
    bitset<32> b_number(b);
    output << b_number << endl;

    output.close();
    return 0;
}
