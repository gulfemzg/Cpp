//C++ ile hesap makinesi

#include <iostream>
using namespace std;


class toplama {
public:
	int sayi1, sayi2;
	int toplam = 0;

	void topla() {
		this->toplam = this->sayi1 + this->sayi2;
		cout << "Toplam = " << this->toplam;
	}

};

class cikarma {
public:
	int sayi1, sayi2;
	int fark = 0;

	void cikarma_islemi() {
		this->fark = this->sayi1 - this->sayi2;
		cout << "Fark = " << this->fark;
	}

};

class carpma {
public:
	int sayi1, sayi2;
	int carpim = 0;

	void carpma_islemi() {
		this->carpim = this->sayi1 * this->sayi2;
		cout << "Carpim = " << this->carpim;
	}

};

class bolme {
public:
	int sayi1, sayi2;
	double bolum = 0;

	void bolme_islemi() {
		this->bolum = this->sayi1 / this->sayi2;
		cout << "Bolum = " << this->bolum;
	}

};

class mod {
public:
	int sayi1, sayi2;
	int mod;

	void mod_al() {
		this->mod = this->sayi1 % this->sayi2;
		cout << "Mod = " << this->mod;
	}

};

int main() {

	toplama toplama;
	cikarma cikarma;
	carpma carpma;
	bolme bolme;
	mod mod;

	int secim;

	cout << "Islem seciniz : ";
	cin >> secim;

	switch (secim)
	{
	case 1:
	{
		cout << "1. sayiyi giriniz : ";
		cin >> toplama.sayi1;
		cout << "2. sayiyi giriniz : ";
		cin >> toplama.sayi2;
		toplama.topla();
		break;
	}
	case 2:
	{
		cout << "1. sayiyi giriniz : ";
		cin >> cikarma.sayi1;
		cout << "1. sayiyi giriniz : ";
		cin >> cikarma.sayi2;
		cikarma.cikarma_islemi();
		break;
	}
	case 3:
	{
		cout << "1. sayiyi giriniz : ";
		cin >> carpma.sayi1;
		cout << "1. sayiyi giriniz : ";
		cin >> carpma.sayi2;
		carpma.carpma_islemi();
		break;
	}
	case 4:
	{
		cout << "1. sayiyi giriniz : ";
		cin >> bolme.sayi1;
		cout << "1. sayiyi giriniz : ";
		cin >> bolme.sayi2;
		bolme.bolme_islemi();
		break;
	}
	case 5:
	{
		cout << "1. sayiyi giriniz : ";
		cin >> mod.sayi1;
		cout << "1. sayiyi giriniz : ";
		cin >> mod.sayi2;
		mod.mod_al();
		break;
	}
	default:
		cout << "HATA!";
		break;
	}
}



