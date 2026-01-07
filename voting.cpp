#include <iostream>
using namespace std;

int main () {
    int jumlahMurid, userSuka = 0, userTidak = 0, pilihan;

    cout << "Jumlah murid: ";
    cin >> jumlahMurid;

    for (int i = 0; i < jumlahMurid; i++) {
        cout << "Murid " << i+1 << " (1-Suka, 0-Tidak): ";
        cin >> pilihan;

        if (pilihan == 1) userSuka++;
        else userTidak++;
    }
    cout << "==Hasil Voting==\n";
    cout << "Suka : " << userSuka << "\n";
    cout << "Tidak suka : " << userTidak << "\n";

    if (userSuka > userTidak) cout << "Disetujui\n";
    else if (userTidak > userSuka) cout << "Tidak Disetujui\n";
    else cout << "Keputusan seri\n";

    return 0;
}