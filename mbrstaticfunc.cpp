#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
     static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNIM(int pNim) { nim = pNim; }
    static int getNim() { return nim; }
    
}