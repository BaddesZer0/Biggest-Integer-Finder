#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2, sayi3;

	cout << "Birinci sayiyi giriniz:";
	cin >> sayi1;

	cout << "Ikinci sayyi giriniz:";
	cin >> sayi2;

	cout << "Ucuncu sayiyi giriniz:";
	cin >> sayi3;

	cout << "En buyuk sayi:";

		if ((sayi1 > sayi2) && (sayi1 > sayi3))
			cout << sayi1;

		if ((sayi2 > sayi1) && (sayi2 > sayi3))
			cout << sayi2;
			
		else
			cout << sayi3;
		
return 0;
}