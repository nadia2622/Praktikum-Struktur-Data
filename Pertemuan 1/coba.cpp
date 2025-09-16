#include <iostream> // Library standar untuk input/output (cout, cin, dll)
#include <conio.h> // Library lama, dipakai untuk fungsi getch()

using namespace std; // Supaya kita bisa pakai cout tanpa harus nulis std::cout

int main()
{
    int x,y; // Deklarasi variabel biasa, tipe integer
    int *px; // Deklarasi pointer ke integer (px bisa menyimpan alamat variabel int)
    x = 87; // Isi variabel x dengan nilai 87
    px = &x; // Isi pointer px dengan alamat dari x (px menunjuk ke x)
    y = *px; // Ambil nilai dari alamat yang ditunjuk px (y = isi dari x = 87)
    
    cout<<"Alamat x = "<< &x << endl;
    cout<<"Isi px = "<< px << endl;
    cout<<"Isi x = "<< x << endl;
    cout<<"Nilai *px = "<< *px << endl;
    cout<<"Nilai y = "<< y << endl;

    getch(); // Tunggu user menekan tombol apa saja sebelum program berhenti
    return 0; // Program selesai dengan status "berhasil"
}
