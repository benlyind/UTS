#include <iostream>
using namespace std;



int main()
 {  
     int harga,tiket,tujuan,kelas, hasil;
     string nama;
     char status;

     cout << "Name : " ;
     cin >> nama;

     cout << "Jumlah Tiket  : " ;
     cin >> tiket;
     cout << " \n";

     
     cout << " 1. Jogja - Prowokerto  \n" ;
     cout << " 2. jogja - Jakarta \n" ;
     cout << " 3. Jogja - Bandung \n ";
     cout << "Tujuan anda : " ;
     cin >>  tujuan ;
     cout << " \n";   

     
     cout << " 1. Ekonomi  \n" ;
     cout << " 2. Bisnis \n" ;
     cout << " 3. Exsekutif \n";
     cout << " Kelas Yang Tersedia : " ;
     cin >>  kelas;
     cout << " \n";
     
    cout << "====================================== \n" ;
    cout << "|| Detail Tiket \n";
    cout << "|| Nama : " << nama << endl;
    if (tujuan == 1){ 
    cout << "|| Tujuan : Jogja - Prowokerto \n ";
        
        if (kelas == 1)
        {
           hasil = tiket * 30000;
        }else if (kelas == 2){
            hasil = tiket * 45000;
        
        }else if (kelas == 3)
        {
            hasil = tiket * 70000;
        }else{
            cout << "Kelas anda Tidak Tersedia";
        }
        
    }else if(tujuan == 2){
    
        cout << "|| Tujuan : Jogja - Jakarta \n ";
        
        if (kelas == 1)
        {
           hasil = tiket * 50000;
        }else if (kelas == 2){
            hasil = tiket * 80000;
        
        }else if (kelas == 3)
        {
            hasil = tiket * 150000;
        }else{
            cout << "Kelas anda Tidak Tersedia";
        }
    }else if (tujuan == 3){
        cout << "|| Tujuan : Jogja - Bandung \n ";
        
        if (kelas == 1)
        {
           hasil = tiket * 40000;
        }else if (kelas == 2){
            hasil = tiket * 70000;
        
        }else if (kelas == 3)
        {
            hasil = tiket * 130000;
        }else{
            cout << "Kelas anda Tidak Tersedia";
        }
    } else {
        
        cout << " TUJUAN ANDA TIDAK TERSEDIA !!! \n";
    }

    cout << "| Jumalah Tiket : " << tiket << endl;
    cout << "|| Harga : Rp. " << hasil << endl;
    cout << "====================================== \n" ;
      
     return 0;
 }
 
