#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("53_file_1.txt");
    out << "This is me\n";
    out << "This is me1\n";
    out << "This is me2\n";
    out << "This is me3\n";
    out.close();
    ifstream in;
    string st;
    in.open("53_file_1.txt");
    // in >> st;    //It is not the way to print all content.
    // cout << st;  //Same for this too.
    while (in.eof() == 0) //best way.
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}