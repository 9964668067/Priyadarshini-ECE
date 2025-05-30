#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file ("example.text");
    file << "hello, c++ file!";
    file.close();
    cout << "file written succesfully." << endl;
    return 0;
}