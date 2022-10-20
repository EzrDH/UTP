#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	int pilih;
	double a, b;
	char n, menu;
	
	while(menu!='t'){
	system("cls");
	cout<<"				********Kalkulator Sederhana********			"<<endl;
	cout<<endl;
    cout<<"1. Operasi_1 (+, -, *, /, ^)"<<endl;
    cout<<"2. Operasi_2 (Trigonometri)"<<endl;
    cout<<"Pilih	: ";
    cin>>pilih;
    cout<<endl;
    if(pilih==1){
		cout<<"Hitung	: ";
		cin>>a>>n>>b;
		char operas_1[n]={'+', '-','*', '/','^'};
	
			if(n == '+'){
				cout<<"Hasil	= "<<a+b<<endl;
			}
			else if(n=='-'){
				cout<<"Hasil	= "<<a-b<<endl;
			}
			else if(n=='*'){
				cout<<"Hasil	= "<<a*b<<endl;
			}
			else if(n=='/'){
				cout<<"Hasil	= "<<a/b<<endl;
			}
			else if(n=='^'){
				cout<<"Hasil	= "<<pow(a,b)<<endl;
			}
			else{
				cout<<"!!!ERROR!!!"<<endl;
			}
		cout<<endl;	
		cout<<"Kembali ke menu? (Tekan sembarang jika ya/t jika tidak): ";
		cin>>menu;
		}
	else if(pilih==2){
		cout<<"Hint: Input 's' for sin, 'c' for cos, 't' for tan"<<endl;
		cout<<"Hitung	: ";
		cin>>n>>a;
		char operasi_2[n]={'s', 'c', 't'};
			
			if(n == 's'){
				cout<<"Hasil	= "<<sin(a)<<endl;
			}
			else if(n=='c'){
				cout<<"Hasil	= "<<cos(a)<<endl;
			}
			else if(n=='t'){
				cout<<"Hasil	= "<<tan(a)<<endl;
			}
			else{
				cout<<"!!!ERROR!!!"<<endl;
			}
		cout<<endl;	
		cout<<"Kembali ke menu? (Tekan sembarang jika ya/t jika tidak): ";
		cin>>menu;
		}
	else{
		cout<<"Pilihan Salah"<<endl;
		
		cout<<"Kembali ke menu? (Tekan sembarang jika ya/t jika tidak): ";
		cin>>menu;
	}	
	cout<<endl;
	cout<<"				   *******Program Selesai********"<<endl;
}
	return 0;
}
