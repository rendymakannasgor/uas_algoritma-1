#include <iostream>
using namespace std;

int main() {
    string b[10];
    bool d[10] = {false};
    int n = 0, p = 0, x;

    while (p != 5) {
        cout << "==MENU==\n";
        cout << "1.Tambah\n";
        cout << "2.Lihat\n";
        cout << "3.Pinjam\n";
        cout << "4.Kembalikan\n";
        cout << "5.Keluar\n";
        cin >> p;

        if (p == 1) {
            if (n < 10) {
                cout << "Judul :";
                cin.ignore();
                getline(cin, b[n]);
                d[n] = false;
                n++;
            } else {
                cout << "Rak penuh\n";
            }
        }
        else if (p == 2) {
            if (n == 0) {
                cout << "Kosong\n";
            } else {
                for (int i = 0; i < n; i++)
                cout << i+1 << ". " << b[i] << (d[i]? " [Dipinjam]\n : " : " [Tersedia]\n");
            }
        }
        else if (p == 3) {
            cout << "Nomor : \n";
            cin >> x;
            if (x > 0 && x <=n) {
                if (!d[x-1]) {
                    d[x-1] = true;
                    cout << "Berhasil Dipinjam\n";
                } else {
                    cout << "Sudah dipinjam\n";
                }
            } else {
                cout << "Tidak valid\n";
            }
        }
                else if (p == 4) {
            cout << "Nomor : \n";
            cin >> x;
            if (x > 0 && x <=n) {
                if (d[x-1]) {
                    d[x-1] = false;
                    cout << "Berhasil Dikembalikan\n";
                } else {
                    cout << "Tidak dipinjam\n";
                }
            } else {
                cout << "Tidak valid\n";
            }
        }
        else if (p == 5) {
            cout << "Selesai\n";
        }
        else {
            cout << "Salah pilih\n";
        }
    }
    return 0;
}