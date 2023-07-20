#include<iostream>
#include <cstdlib>
using namespace std;

//firebase通信を行う関数のテストを作成する
int main(){
    const char* python_command = "python testpy_from_cpp.py";

    // Pythonスクリプトを実行
    int result = std::system(python_command);

    return result;
}