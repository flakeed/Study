#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string tmp, word;
    word ="c++";
    setlocale(LC_ALL, "ru");
    string f = "surname.rtf";
    ofstream fout;

    fout.open(f);
    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else {
        fout << "Have you ever read comp.lang.c++?\n";
        fout << "   No, i never read it.\n";
        fout << " This is the best place to see how many c++ users are looking for a better language.\n";
    }
    fout.close();
    ifstream reader("surname.rtf");
    if (reader.good())
    {
        
        while (!reader.eof())
        {
            getline(reader, tmp);
            if (tmp.find(word) != string::npos) cout << tmp << endl;
        }
    }
    else cout << "Some error occured" << endl;
    reader.close();
       
    return 0;
}