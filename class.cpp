#include <iostream>
using namespace std;

class lingkaran
{
  public:
  double jarijari;
  double luasLingkaran;

  void inputData(){
    cout << "masukkan jarijari " << endl;
    cin >> jarijari;
  }

    double hitungLuas(){
        return 3.14*jarijari*jarijari;
    }
};
int main(){
    lingkaran bulet;
    bulet.inputData();
    cout << endl;
    cout << "luasnya adalah = " << bulet.hitungLuas() << endl;
    cout << endl;
}