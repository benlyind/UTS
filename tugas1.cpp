#include <iostream>
using namespace std;

int main()
{
     int jam,jumlah, gaji, lembur ;
     char golongan ; 

    cout << " Masukan Golongan A / B / C / D : " ;
    cin >> golongan ;
    cout << " Masukan Jumah Jam Kerja : " ;
    cin >> jam ;    


    //switch case

    switch (golongan)
    {
    case 'A':
        gaji = 55000*48;
        cout << " Gajih ada adalah : " << gaji << endl;
        break;
    case 'B':
        gaji = 45000*48;
        cout << " Gajih ada adalah : " << gaji << endl;
        break;
    case 'C':
        gaji = 35000*48;
        cout << " Gajih ada adalah : " << gaji << endl;
        break;
    case 'D':
        gaji = 25000*48;
        cout << " Gajih ada adalah : " << gaji << endl;
        break;
    
    default:
        cout << " ANDA TIDAK MASUK GOLONGAN !!!"  << endl;
        break;
    }

    // if

    if ( golongan == 'A')
    {

        lembur =  jam * 35000;
        cout << " upah hasil Lembur adalah : " << lembur << endl;
        jumlah = lembur + gaji;
        cout << " gajih Total adalah :" << jumlah << endl ;
    }else if ( golongan == 'B') {

        lembur =  jam * 35000;
        cout << " upah hasil Lembur adalah : " << lembur << endl;
        jumlah = lembur + gaji;
        cout << " Gajih Total adalah :  " << jumlah << endl ;
    
    }else if ( golongan == 'C') {

        lembur =  jam * 35000;
        cout << " upah hasil Lembur adalah : " << lembur << endl;
        jumlah = lembur + gaji;
        cout << " Gajih Total adalah :  " << jumlah << endl ;
    
    }else if ( golongan == 'D') {

        lembur =  jam * 35000;
        cout << " upah hasil Lembur adalah : " << lembur << endl;
        jumlah = lembur + gaji;
        cout << " Gajih Total adalah :  " << jumlah << endl ;
    
    }else{
        cout << " PROGRAM SELESAI " << endl ; 
    }

    return 0;
}
