#include <iostream>
using namespace std;

int main()
{
	char etu[20], suku[20], osoite[30];
	int kenka, posti;
	float matka;
	cout << "Anna kaikki etunimesi: ";
	cin.get(etu, 20);
	cin.ignore(200, '\n');
	cout << "Anna kengannumero: ";
	cin >> kenka;
	cin.ignore(200, '\n');
	cout << "Anna sukunimesi: ";
	cin.get(suku, 20);
	cin.ignore(200, '\n');
	cout << "Anna koulumatka: ";
	cin >> matka;
	cin.ignore(200, '\n');
	cout << "Anna osoitteesi: ";
	cin.get(osoite, 30);
	cin.ignore(200, '\n');
	cout << "Anna postinumero: ";
	cin >> posti;
	cin.ignore(200, '\n');

	cout << suku << " " << etu << endl;
	cout << osoite << endl << posti << endl;
	cout << kenka << " " << matka;

	return 0;
}