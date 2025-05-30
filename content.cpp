#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line;
    ifstream file ("example.text");
    if (file.is_open()) {
        while (getline(file,line)) {
            cout << line << endl;
        }
        file.close();
    }else{
        cout << "enter is open file:" << endl;
        return 0;
    }
}