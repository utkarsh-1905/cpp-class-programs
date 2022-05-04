#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    string line;
    fin.open("file.txt");
    while (fin)
    {
        getline(fin, line);
        if (line == "-1")
            break;
        cout << line << endl;
    }
    fin.close();
}
