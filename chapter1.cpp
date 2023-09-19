// File i/o in c++ : reading and writing files
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Writing
    // string st = "Ridhi Goyal";
    // ofstream out("sample1.txt");
    // out << st;

    // Reading
    string st2;
    ifstream in("sample1b.txt");
    // in >> st2;
    getline(in, st2);
    cout << st2;
    return 0;
}