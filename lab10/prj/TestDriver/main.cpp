#include "ModulesHorbachov.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    string path_exp_input_1 = "TextFilesToTestDriver\\InputFile\\input_1.txt";
    string path_exp_input_2 = "TextFilesToTestDriver\\InputFile\\input_2.txt";
    string path_exp_input_3 = "TextFilesToTestDriver\\InputFile\\input_3.txt";

    string path_exp_test_10_1_1 = "TextFilesToTestDriver\\ResultTest_10_1\\expected_result_test_10_1_1.txt";
    string path_exp_test_10_1_2 = "TextFilesToTestDriver\\ResultTest_10_1\\expected_result_test_10_1_2.txt";
    string path_exp_test_10_1_3 = "TextFilesToTestDriver\\ResultTest_10_1\\expected_result_test_10_1_3.txt";

    string path_exp_test_10_2_1 = "TextFilesToTestDriver\\ResultTest_10_2\\expected_result_test_10_2_1.txt";
    string path_exp_test_10_2_2 = "TextFilesToTestDriver\\ResultTest_10_2\\expected_result_test_10_2_2.txt";
    string path_exp_test_10_2_3 = "TextFilesToTestDriver\\ResultTest_10_2\\expected_result_test_10_2_3.txt";

    string path_exp_test_10_3_1 = "TextFilesToTestDriver\\ResultTest_10_3\\expected_result_test_10_3_1.txt";
    string path_exp_test_10_3_2 = "TextFilesToTestDriver\\ResultTest_10_3\\expected_result_test_10_3_2.txt";
    string path_exp_test_10_3_3 = "TextFilesToTestDriver\\ResultTest_10_3\\expected_result_test_10_3_3.txt";


    string path_input = "TextFile\\input.txt";
    string path_output = "TextFile\\output.txt";

    vector<string> input_db = Input(path_exp_input_1, path_exp_input_2, path_exp_input_3);

    vector<string> Test_10_1 = Input(path_exp_test_10_1_1, path_exp_test_10_1_2, path_exp_test_10_1_3);

    vector<string> Test_10_2 = ExpectedResultTest_10_2(path_exp_test_10_2_1, path_exp_test_10_2_2, path_exp_test_10_2_3);

    vector<string> Test_10_3 = Input(path_exp_test_10_3_1, path_exp_test_10_3_2, path_exp_test_10_3_3);


    ofstream auto_test("TextFile\\auto_test.txt");
    for(int i = 0; i < 3; i++){
        auto_test << "Test " << i + 1 << endl;
        cout << "Test " << i + 1 << endl;

        ofstream file_input (path_input);
        file_input << input_db[i] << endl;
        file_input.close();

        //test task_10_1
        task_10_1(path_output, path_input);

        string read;
        read = ReadFile(path_output);

        if(read == Test_10_1[i]){
            auto_test << "Task 10.1 - passed" << endl;
            cout << "Task 10.1 - passed" << endl;
        }
        else{
            auto_test << "Task 10.1 - failed" << endl;
            cout << "Task 10.1 - failed" << endl;
        }

        //test task_10_2

        task_10_2(path_input);

        read = ReadFile(path_input);

        if(read == Test_10_2[i]){
            auto_test << "Task 10.2 - passed" << endl;
            cout << "Task 10.2 - passed" << endl;
        }
        else{
            auto_test << "Task 10.2 - failed" << endl;
            cout << "Task 10.2 - failed" << endl;
        }

        //test task_10_3
        task_10_3(10.5, 4.3, 5, 10, path_output);

        read = ReadFile(path_output);

        if(read == Test_10_3[i]){
            auto_test << "Task 10.3 - passed" << endl;
            cout << "Task 10.3 - passed" << endl;
        }
        else{
            auto_test << "Task 10.3 - failed" << endl;
            cout << "Task 10.3 - failed" << endl;
        }
    }
    auto_test.close();

    getchar();
    return 0;

    return 0;
}
