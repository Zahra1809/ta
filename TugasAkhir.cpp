#include <iostream>
using namespace std;
int main(){
	int pm,pb,tha=0,thb=0,thc=0;
	char loop = 'y';
	string buku[10] = {"Bumi Manusia","Laskar Pelangi","Negeri 5 Menara", "Dikta dan Hukum", "Cantik Itu Luka", "Laut Bercerita", "Selamat Tinggal","Perahu Kertas", "Antologi Rasa", "Koala Kumal"};
	string penulis[10] = {"Pramoedya Ananta", "Andrea Hirata", "Ahmad Fuadi", "Dhia'an Farah", "Eka Kurniawan", "Leila S. Chudori", "Tere Liye", "Dee Lestari", "Ika Natassa", "Raditya Dika"};
	int harga[10] = {130000,90000,100000, 100000, 125000, 80000, 70000, 90000, 115000, 70000};
	int total[10],a[10],th[10],tb[10];
	menu_utama:
	cout<<"===========================================\n";
	cout<<"=   Selamat Datang Di Toko Buku Amikom    =\n";
	cout<<"===========================================\n";
	cout<<"=           Silahkan Pilih Menu           =\n";
	cout<<"= 1. Pembelian Buku                       =\n";
	cout<<"= 2. Pengisian Buku (admin)               =\n";
	cout<<"= 3. Exit/Keluar                          =\n";
	cout<<"===========================================\n";
	cout<<"  Masukan Pilihan : ";cin>>pm;
	system("cls");
	if (pm==1)
	{
		beli:
		cout<<"===========================================\n";
		cout<<"=             Pembelian Buku              =\n";
		cout<<"===========================================\n";
		cout<<" Daftar Buku               Penulis                Harga\n";
		for (int i=0;i<10;i++){
			cout<<" "<<i+1<<". "<<buku[i]<<"    	"<<penulis[i]<<"             "<<harga[i]<<endl;
		}
		cout<<"===========================================\n";
		cout<<"Masukan Pilihan Buku : ";cin>>pb;
		if (pb==1){
			cout<<buku[0]<<" oleh "<<penulis[0]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[0];
			cout<<"===========================================\n";
			th[0]=harga[0]*tb[0];
			int j=1;
			a[0]=j;
		}else if (pb==2){
			cout<<buku[1]<<" oleh "<<penulis[1]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[1];
			cout<<"===========================================\n";
			th[1]=harga[1]*tb[1];
			int j=1;
			a[1]=j;
		}else if (pb==3){
			cout<<buku[2]<<" oleh "<<penulis[2]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[2];
			cout<<"===========================================\n";
			th[2]=harga[2]*tb[2];
			int j=1;
			a[2]=j;
		}else if (pb==4){
			cout<<buku[3]<<" oleh "<<penulis[3]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[3];
			cout<<"===========================================\n";
			th[3]=harga[3]*tb[3];
			int j=1;
			a[3]=j;
		}else if (pb==5){
			cout<<buku[4]<<" oleh "<<penulis[4]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[4];
			cout<<"===========================================\n";
			th[4]=harga[4]*tb[4];
			int j=1;
			a[4]=j;
		}else if (pb==6){
			cout<<buku[5]<<" oleh "<<penulis[5]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[5];
			cout<<"===========================================\n";
			th[5]=harga[5]*tb[5];
			int j=1;
			a[5]=j;
		}else if (pb==7){
			cout<<buku[6]<<" oleh "<<penulis[6]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[6];
			cout<<"===========================================\n";
			th[6]=harga[6]*tb[6];
			int j=1;
			a[6]=j;
		}else if (pb==8){
			cout<<buku[7]<<" oleh "<<penulis[7]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[7];
			cout<<"===========================================\n";
			th[7]=harga[7]*tb[7];
			int j=1;
			a[7]=j;
		}else if (pb==9){
			cout<<buku[8]<<" oleh "<<penulis[8]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[8];
			cout<<"===========================================\n";
			th[8]=harga[8]*tb[8];
			int j=1;
			a[8]=j;
		}else if (pb==10){
			cout<<buku[9]<<" oleh "<<penulis[9]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[9];
			cout<<"===========================================\n";
			th[9]=harga[9]*tb[9];
			int j=1;
			a[9]=j;
		}else{
			cout<<"Pilihan Tidak ada\n";
			system("pause");
			system("cls");
			goto beli;
		}
	}
	else if (pm==2)
	{
		cout<<"Program \n";
	}
	else if (pm==3)
	{
		cout<<"Terimakasih! ^_^ \n";
		cin.ignore();
		return 0;
	}
	else
	{
		cout<<"Pilihan Salah, Silahkan Mengulang\n";
		system("pause");
		system("cls");
		goto menu_utama;
	}
	cout<<"Ingin Membeli Buku Lainnya? (y/t) : ";cin>>loop;
	if(loop == 'y'){
		system("cls");
		goto beli;
	}else{
		goto keranjang;
	}
	keranjang:
	system("cls");
	cout<<"===========================================\n";
	cout<<"= Daftar Buku  | Harga | Jumlah |  Total  =\n";
	cout<<"===========================================\n";
	for (int i=0;i<3;i++){
		if (a[i]==1){
			cout<<"= "<<buku[i]<<"\t "<<harga[i]<<"\t  "<<tb[i]<<"\t  "<<th[i]<<"  ="<<endl;
		}else{
			th[i]=0;
		}
	}
	cout<<"===========================================\n";
	cout<<"Total belanja : "<<th[0]+th[1]+th[2]<<endl;
	cout<<endl;
	system("pause");
	system("cls");
	goto menu_utama;
}
