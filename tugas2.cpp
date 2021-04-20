#include <iostream>
using namespace std;
int main (){
int z,p,L,r,a,t, tinggi,pilih; // p=panjang, L=lebar, r = jari-jari, a=alas,
 t = tinggi;
const  double phi = 3.14; //nilai phi ditetapkan 3.14
float Luas;
cout<<"Program Menghitung Luas Bangun" <<endl;
cout<<"Pilih 1 untuk menghitung Luas Persegi (p*L) "<<endl;
cout<<"Pilih 2 untuk menghitung Luas Lingkaran (phi*r*r) "<<endl;
cout<<"Pilih 3 untuk menghitung Luas Segitiga (0.5*a*t) "<<endl;
cout<<"masukkan pilihan : " ;
cin>>pilih;
switch(pilih){
case 1:
cout<<"masukkan panjang = " ;
cin>>p;
cout<<"masukkan lebar = " ;
cin>>L;
Luas=p*L;
cout<<"Luas Persegi adalah = " << Luas << endl;
break;
case 2:
cout<<"masukkan jari-jari = " ;
cin>>r;
Luas=phi*r*r;
cout<<"Luas Lingkaran adalah = " <<Luas<<endl;
break;
case 3:
cout<<"masukkan alas = " ;
cin >> a;
cout<<"masukkan tinggi = " ;
cin>>t;
Luas=0.5*a*t;
cout<<"Luas Segitiga adalah = " <<Luas<<endl;
default:
cout<<"Pilihan yang Anda masukkan tidak terdaftar!";
}
return 0;
}