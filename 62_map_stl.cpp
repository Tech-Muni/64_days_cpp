#include <iostream>
#include <map>
#include <string>
using namespace std;
// To store key value paire like dictionary.
int main()
{
    map<string, int> marksMap;
    marksMap["Saswat"] = 90;
    marksMap["Vipin"] = 94;
    marksMap["Ayush"] = 30;
    map<string, int>::iterator iter;
    // To insert in map
    marksMap.insert({{"Krishna", 1}, {"tataninimore", 2}});
    // To take output of map
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    return 0;
}
