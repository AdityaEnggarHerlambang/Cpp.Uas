#include <iostream>
using namespace std;

void bio(){

  cout <<"Nama     :Muhammad Aditya Enggar Herlambang  "<<endl;
  cout <<"Nim       2230511019                         " <<endl;
  cout <<"Kelas    :1A Teknik Informatika              "<<endl;
  cout <<"Dibuat   :Minggu, 23 januari 2023            "<<endl;
  cout <<"=================================================";
}

int main(){
  
 bio();
 string TOKO;
 cout<<""<<endl;
  cout << "Selamat Datang Di Toko Asep"<<TOKO <<endl;
  
  int pilih, totalPer, jumlah, hasil=0;// 4 variabel dengan tipe data integer
  char pilihanPer,yaTidak;//2 variabel dengan tipe data char
  int diskon = 10;//tipe data integer untuk menampung diskon
  int x=0; // untuk menampung array
  int totalAkhir[x];
    
        cout <<"1. Best Seller"<<endl;
    
    do{
	
        cout << "Masukan Yang Ingin Di Pilih :";
        cin >>pilih;
        
       
        switch(pilih){
          case 1: 
         cout << "A. Bola Volly      : Rp.100000  "<<endl;
         cout << "B. Bola Futsal     : Rp.110000  "<<endl;
         cout << "C. Bola Basket     : Rp.120000  "<<endl;
         cout << "D. Raket Badminton : Rp.80000   "<<endl;
         cout << "____________\n";
     
        cout<<"Masukan Peralatan Yang Di Pilih :";
        cin>>pilihanPer;  
              
       if (pilihanPer == 'A'  || pilihanPer == 'a'){
           totalPer=100000;
       } else if(pilihanPer == 'B' || pilihanPer == 'b'){
           totalPer=110000;
       } else if(pilihanPer == 'C' || pilihanPer == 'c'){
           totalPer=120000;
       } else if(pilihanPer == 'D' || pilihanPer == 'd'){
           totalPer=80000;  
       } else {
         cout <<"Pilihan Tidak Tersedia"<<endl<<endl;
       }
       cout<< "Berapa Jumlah Peralatan Yang Dibeli : ";
       cin>>jumlah;
       
       totalAkhir[x]=totalPer*jumlah;  
       
       cout<< "Apakah Anda Ingin Memesan Lagi (Y/T)? ";
       cin>> yaTidak;
       break;
       
       } x++;
      } while(yaTidak == 'Y' || yaTidak == 'y');
      cout<<""<<endl;
      cout<<"Pembayaran : "<<endl;
      
       for(int i=0; i<x; i++){
         hasil = hasil + totalAkhir[i];
       }
         cout<<"Total Pesanan   :"<<hasil<<endl;
         cout<<"Diskon Toko 10% :"<<hasil/diskon<<endl;
         cout<<"Total Bayar     :"<<hasil - (hasil/diskon)<<endl<<endl;
       
       cout<<"==============================\n";
       cout<< "Terima Kasih Sudah Berkunjung| "<<endl;
       cout<<"==============================\n";
       
}

