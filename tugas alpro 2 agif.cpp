#include <iostream>
#include <string>
using namespace std;

int main () {
    int nomer;
    char answer;

    do {
    string desk = "pilih rumus yang ingin digunakan : \n"
    "1. persegi\n"
    "2. persegi panjang\n"
    "3. segitiga\n"
    "4. trapesium\n"
    "5. jajar genjang\n"
    "6. belah ketupat\n"
    "7. layang-layang\n"
    "8. lingkaran\n" ;
    cout << desk;


    cout << "masukan pilihan rumus dalam angka; ";
    cin >> nomer;

    switch (nomer){
case 1:
        int sisi, luas;
        cout << "input panjang sisi persegi : ";
        cin >> sisi;
        luas = sisi * sisi;
        cout << "luas persegi : " << luas << endl;
    break;
    case 2:
        int panjang, lebar;
        cout << "input panjang persegi panjang : ";
        cin >> panjang;
        cout << "input lebar persegi panjang: ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "luas prsegi panjang : " << luas << endl;
    break;
    case 3:
        int alas, tinggi;
        cout << "input alas segitiga : ";
        cin >> alas;
        cout << "input tinggi segitiga: ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "luas segitiga : " << luas << endl;
    break;
    case 4:
     int alas1, alas2;
        cout << "input alas1 trapesium : ";
        cin >> alas1;
        cout << "input alas2 trapesium: ";
        cin >> alas2;
        cout << "input tinggi trapesium: ";
        cin >> tinggi;
        luas = 0.5 * (alas1+alas2) * tinggi;
        cout << "luas trapesium : " << luas << endl;
    break;
    case 5:
        cout << "input alas jajar genjang : ";
        cin >> alas;
        cout << "input tinggi jajar genjang : ";
        cin >> tinggi;
        luas = alas * tinggi;
        cout << "luas jajar genjang : " << luas << endl;
    break;
    case 6:
        cout << "input alas jajar genjang : ";
        cin >> alas;
        cout << "input tinggi jajar genjang : ";
        cin >> tinggi;
        luas = alas * tinggi;
        cout << "luas jajar genjang : " << luas <<endl;
    break;
    case 7:
        int diagonal1, diagonal2;
        cout << "input diagonal layang-layang : ";
        cin >> diagonal1;
        cout << "input diagonal layang-layang : ";
        cin >> diagonal2;
        luas = 0.5 * diagonal1 * diagonal2;
        cout << "luas layang-layang : " << luas << endl;
    break;
    case 8:
        int jari_jari;
        cout << "input jari _jari lingkaran : ";
        cin >> jari_jari;
        luas = 3.14 * jari_jari * jari_jari;
        cout << "luas lingkaran : " << luas << endl;
    break;
    default:
        cout << "pilih angka yang ada di list" << endl;
    break;

    }
    cout << endl;
    cout << "ingin memilih rumus lain (y/t)?";
    cin >> answer;
    cout << endl;


    }while (answer !='t');
    cout << "terima kasih";

    return 0;

}
