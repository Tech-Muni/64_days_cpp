#include <iostream>
using namespace std;

int main()
{
    // The full form of IOStream is Input Output Stream
    // The meaning of stream is the flow of data
    // if data flows from input device (keyboard, mouse) to main memory is known as input stream
    // if data flows from main memroy to Output device (monitor) is known as output stream
    int number1, number2;
    cout << "Enter the value of num1 \n";
    /*
        '<<' is pronunced as Insertion operator (to insert the output given by cpu)
        '>>' is pronunced as Extraction operator (to extract the input given by user)
    */
    cin >> number1;
    cout << "Enter the value of num2 \n";
    cin >> number2;
    cout << "The sum is " << number1 + number2 << endl;
    return 0;
}
