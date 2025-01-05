#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fin;
    ofstream fout;
    fin.open("a1.txt");
    fout.open("a2.txt");
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fout.close();
    fin.close();
    fin.open("a2.txt");
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
}
