//Standard Library C++
#include <iostream>

//Standard Library C++
using namespace std;

//Prosedur atau Fungsi untuk menampilkan tampilan awal program
void tampilan_awal()
{
    cout<<"========================================================="<<endl;
	cout<<"      Program Penghitungan Kombinasi dan Permutasi       "<<endl;
    cout<<"========================================================="<<endl;
}

//Prosedur atau Fungsi untuk menghitung dan menampilkan hasil sesuai yang diinputkan oleh user
//Di dalam sini juga terdapat kondisi berupa pilihan menu
void hitungan()
{ 
    //Pendeklarasian
    //n : jumlah kejadian yang terjadi, r : jumlah variasi yang terjadi
    //i : variabel baru untuk memfaktorialkan n, j : variabel baru untuk memfaktorialkan r
    //k : variabel baru untuk memfaktorialkan hasil dari n - r 
    int n, r, i, j, k;
    //hasil_n : hasil akhir dari faktorial n, hasil_r : hasil akhir faktorial 
    //hasil_kurang : hasil akhir dari faktorial n - r, kurang : hasil dari n - r
    int hasil_n, hasil_r, hasil_kurang, kurang;
    //pilih : variabel untuk menginputkan proses penghitungan
    //kombinasi : hasil penghitungan secara kombinasi
    //permutasi : hasil penghitungan secara permutasi
    int pilih, kombinasi, permutasi;
    
    //Penginputan n
    cout<<"Masukkan jumlah kejadian yang terjadi    : ";
    cin>>n;

    //Proses hitung faktorial n dengan perulangan for
    hasil_n = 1;
    for(i = 1; i <= n; i++) 
    {
        hasil_n = hasil_n * i;
    }

    //Penginputan r
    cout<<"Masukkan jumlah variasi yang terjadi     : ";
    cin>>r;

    //Proses hitung faktorial r dengan perulangan for
    hasil_r = 1;
    for(j = 1; j <= r; j++) 
    {
        hasil_r = hasil_r * j;
    }

    //Proses hitung faktorial n - r dengan perulangan for
    kurang = n - r;
    hasil_kurang = 1;
    for(k = 1; k <= kurang; k++)
    {
        hasil_kurang = hasil_kurang * k;
    }

    //Menu pilihan proses penghitungan
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Silahkan Pilih Proses Penghitungan !"<<endl;
    cout<<"1. Kombinasi"<<endl;
    cout<<"2. Permutasi"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Masukkan Pilihan Proses Penghitungan [1 / 2] : ";
    cin>>pilih;

    //Kondisi dari proses penghitungan yang dipilih 
    if (pilih == 1)
    //Secara Kombinasi
    {
        //Rumus penghitungan secara kombinasi
        kombinasi = hasil_n / (hasil_kurang * hasil_r);
        cout<<"Hasil dari penghitungan secara kombinasi didapat sebanyak "<<kombinasi<<" cara";
    }
    else if (pilih == 2)
    //Secara Permutasi
    {
        //Rumus penghitungan secara permutasi
        permutasi = hasil_n / hasil_kurang;
        cout<<"Hasil dari penghitungan secara permutasi didapat sebanyak "<<permutasi<<" cara";
    }
    else
    //Jika user tidak menginputkan sesuai kondisi yang sudah disediakan
    {
        cout<<"Mohon Maaf Proses Penghitungan Tidak Tersedia";
    }
}

int main()
{
    //Pendeklarasian untuk perulangan
    char ulang = 'y';

    //Pemanggilan Fungsi atau Prosedur void tampilan_awal
    tampilan_awal();

    //Perulangan menggunakan while
    while (ulang == 'y')
    {
        //Pemanggilan Fungsi atau Prosedur void_hitungan
        hitungan();
        cout<<"\n========================================================="<<endl;
        cout<<"Ingin Menghitung Kembali [y/t] ? ";
        cin>>ulang;
        cout<<"========================================================="<<endl;
    }
    cout<<"                      Terima Kasih                       "<<endl;
    cout<<"=========================================================";
}