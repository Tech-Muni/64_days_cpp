#include <iostream>
#include <fstream>
using namespace std;
/*
    File is a pattern.
    every word is represented in binary at machine code.
    We need fstream for file handaling.
    Some use full classes are 
        1. fstreambase
        2. ifstrem  --> derived from fstreambase
        3. ofstream --> derived from fstreambase
    In order to work with files in c++, you will have to open it.
        There are 2 ways to open a file:-
            a. Using the Constructor.
            b. Using the member function Open() of the class.
*/
int main()
{
    // Opening files using constructor and writing it.
    string st = "text through program.";
    ofstream out("51_sample_file.txt"); //helps in writing operations.
    out << st;                          //gonna wrtite the string in the file.

    // Opening files using constructor and writing it.
    string st2;
    ifstream in("51_file_1.txt");
    // in >> st2; //Takes single word not much usefull.
    getline(in, st2); //Takes single line.
    cout << st2 << endl;
    return 0;
}