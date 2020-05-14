#include <iostream>

using namespace std;

int main()
{
    awal:
    cout << "*Program Hukum Gas Ideal*" << endl;
    cout << endl;
    cout<<"\n ==========================";
    cout<<"\n Nama : Muhammad Reihaan Aziiz Setiawan     ";
    cout<<"\n NIM  : 119230046        ";
    cout<<"\n Kelas: TPB 23       ";
    cout<<"\n =========================="; 
    cout << "\n Pilih salah satu : " << endl;
    cout << "1. Menghitung V" << endl;
    cout << "2. Menghitung P" << endl;
    int a;
    char ulang;
    cin >>a;
    cout << endl;
do {
    int p[1], n[1], r[1], t[1], v[1];
    int b;
    int c;
    char ulangi = 'y';
    int counter = 0;

    if(a<=1){
        cout << a << ". Menghitung V" << endl;
        cout << "Input nilai p " << endl;
        cin >> p[1] ;
        cout << "Input nilai n " << endl;
        cin >> n[1] ;
        cout << "Input nilai r " << endl;
        cin >> r[1] ;
        cout << "Input nilai t " << endl;
        cin >> t[1] ;

        b=n[1]*r[1]*t[1]/p[1];

        cout << "Hasilnya adalah " << b << endl;

    }
    else if(a=2){
        cout << a << ". Menghitung P" << endl;
        cout << "Input nilai v " << endl;
        cin >> v[1] ;
        cout << "Input nilai n " << endl;
        cin >> n[1] ;
        cout << "Input nilai r " << endl;
        cin >> r[1] ;
        cout << "Input nilai t " << endl;
        cin >> t[1] ;

        c=n[1]*r[1]*t[1]/v[1];

        cout << "Hasilnya adalah " << c << endl;
    }
    cout<<endl<<"-------------------------------------"<<endl;
		cout<< "Apakah Anda Ingin Mengulang Ya (Y/y) atau Tidak (T/t) : ";
		cin>>ulang;

        }

	while (ulang=='y' || ulang=='Y');
	cout<<endl<<"=== Terima Kasih Telah Menggunakan Program Kami ===";
	return 0;

}
