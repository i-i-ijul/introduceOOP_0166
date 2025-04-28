#include <iostream>
using namespace std;

class Hewan
{
private:
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "masukkan jenis kelamin = " << endl;
        cin >> jenisKelamin;
        cout << "masukkan tipe = " << endl;
        cin >> tipe;
        cout << "masukkan umur = " << endl;
        cin >> umur;
    }

    void tampilHewan()
    {
        cout << "jenis kelaminnya adalah " << jenisKelamin << endl;
    }
};

int main()
{
    Hewan ambon;
    ambon.inputData();
    cout << "umurnya adalah " << ambon.umur << endl;
    cout << "tipenya adalah " << ambon.tipe << endl;
    ambon.tampilHewan();
}