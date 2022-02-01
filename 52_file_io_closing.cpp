#include <iostream>
#include <fstream>
using namespace std;
// fstream base, ifstream, ofstrem all 3 came from fstream.
int main()
{
    string name;
    ofstream hout("52_file_1.txt");
    cout << "Enter your name" << endl;
    cin >> name;
    hout << "My name is " << name;
    hout.close();
    ifstream hin("52_file_1.txt");
    string content;
    hin >> content;
    cout << "The content of the file is:- " << content << endl;
    hin.close();
    return 0;
}