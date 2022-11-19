#include <iostream> 
using namespace std;

int main() {
  int jml,total = 0, kolom, baris;
  
  cout << "Masukkan Jumlah baris : "; cin >> baris;
  cout << "Masukkan Jumlah kolom : "; cin >> kolom;

  int bil[baris][kolom];

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << "Masukkan nilai bil array ke-" << i+1 << " : "; cin >> bil[i][j];
    }
  }

  for(int i = 0; i < baris; i++ )
    for(int j = 0; j < kolom; j++ )
      total += bil[i][j];

  cout << "Hasil penjumlahan 2 array tsb adalah = " << total << endl;

  return 0;
}