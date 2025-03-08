#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE

using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::istringstream;

int main()
{
	string temp;
	string vstupKod = "";
	string vystupKod = "";
	bool validita[11]{};
	int volba = 0;
	int soucet = 0;
	bool generace = false;

	int soucet1 = 0;
	int soucet2 = 0;
	int soucet3 = 0;
	int soucet4 = 0;
	
	char cast1[5] = {};
	char cast2[5] = {};
	char cast3[5] = {};
	char cast4[5] = {};


	cout << "Zadejte operaci kterou chcete provest.\n\n";

	cout << "1. Vygenerovani platneho kodu.\n";
	cout << "2. Kontrola platnosti kodu\n\n";

	while (volba != 1 && volba != 2) {

		

		cout << "Zadejte cislo 1 nebo 2.\n";
		cin >> volba;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}
	
	if (volba == 1) {
		

		generace = true;
	}

	if (volba == 2) {
		

		system("cls");

		if (generace  != true) {
			cout << "Zadejte kod ktery chcete nechat zkontrolovat (ve formatu XXXX-XXXX-XXXX-XXXX): ";
			getline(cin, vstupKod);

			istringstream stream(vstupKod);

			getline(stream, temp, '-');
			strncpy_s(cast1, sizeof(cast1), temp.c_str(), 4);
			cast1[4] = '\0';
			getline(stream, temp, '-');
			strncpy_s(cast2, sizeof(cast2), temp.c_str(), 4);
			cast2[4] = '\0';
			getline(stream, temp, '-');
			strncpy_s(cast3, sizeof(cast3), temp.c_str(), 4);
			cast3[4] = '\0';
			getline(stream, temp, '-');
			strncpy_s(cast4, sizeof(cast4), temp.c_str(), 4);
			cast4[4] = '\0';

			
			
			

		}
		
		

		for (int i = 0; i < 4; i++) {
			soucet1 += cast1[i];
			soucet2 += cast2[i];
			soucet3 += cast3[i];
			soucet4 += cast4[i];
		}
		
		if (soucet1 % 6 == 0 && soucet2 % 6 == 0 && soucet3 % 6 == 0 && soucet4 % 6 == 0) {
			validita[1] = true;
			cout << "\n1. Test probehl uspesne\n";
			system("pause");
			system("cls");
		}
		else {
			cout << "Tento kod je neplatny";
			return 1;
		}

	
		
			
		

		for (int i = 0; i < 4; i++)
		{
			if (cast1[i] <= 122 && cast1[i] >= 97) {

				validita[2] = true;
				cout << "2. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast2[i] <= 122 && cast2[i] >= 97) {

				validita[2] = true;
				cout << "2. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast3[i] <= 122 && cast3[i] >= 97) {

				validita[2] = true;
				cout << "2. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast4[i] <= 122 && cast4[i] >= 97) {

				validita[2] = true;
				cout << "2. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

		}

		if (validita[2] == false) {

			cout << "Tento kod je neplatny";
			return(2);

		}

		for (int i = 0; i < 4; i++)
		{
			if (cast1[i] <= 90 && cast1[i] >= 65) {

				validita[3] = true;
				cout << "3. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast2[i] <= 90 && cast2[i] >= 65) {

				validita[3] = true;
				cout << "3. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast3[i] <= 90 && cast3[i] >= 65) {

				validita[3] = true;
				cout << "3. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast4[i] <= 90 && cast4[i] >= 65) {

				validita[3] = true;
				cout << "3. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

		}

		if (validita[3] == false) {

			cout << "Tento kod je neplatny";
			return(3);

		}

		for (int i = 0; i < 4; i++)
		{
			if (cast1[i] <= 57 && cast1[i] >= 48) {

				validita[4] = true;
				cout << "4. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast2[i] <= 57 && cast2[i] >= 48) {

				validita[4] = true;
				cout << "4. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast3[i] <= 57 && cast3[i] >= 48) {

				validita[4] = true;
				cout << "4. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast4[i] <= 57 && cast4[i] >= 48) {

				validita[4] = true;
				cout << "4. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;

			}

		}

		if (validita[4] == false) {

			cout << "Tento kod je neplatny";
			return(4);

		}

		for (int i = 0; i < 4; i++)
		{
			if (cast1[i] <= 57 && cast1[i] >= 48) {

				soucet = soucet + (cast1[i] - 48);
			}

			if (cast2[i] <= 57 && cast2[i] >= 48) {

				soucet = soucet + (cast2[i] - 48);
			}

			if (cast3[i] <= 57 && cast3[i] >= 48) {

				soucet = soucet + (cast3[i] - 48);
			}

			if (cast4[i] <= 57 && cast4[i] >= 48) {

				soucet = soucet + (cast4[i] - 48);
			}

		}

		if (soucet >= 30 ) {

			validita[5] = false;
			cout << "Tento kod je neplatny";
			return(5);

		}
		
		validita[5] = true;
		cout << "5. Test probehl uspesne\n";
		system("pause");
		system("cls");

		for (int i = 0; i < 4; i++)
		{
			if (cast1[i] == 80 || cast1[i] == 112) {

				validita[6] = false;
				cout << "Tento kod je neplatny";
				return(6);
			}

			if (cast2[i] == 80 || cast2[i] == 112) {

				validita[6] = false;
				cout << "Tento kod je neplatny";
				return(6);
			}

			if (cast3[i] == 80 || cast3[i] == 112) {

				validita[6] = false;
				cout << "Tento kod je neplatny";
				return(6);
			}

			if (cast4[i] == 80 || cast4[i] == 112) {

				validita[6] = false;
				cout << "Tento kod je neplatny";
				return(6);
			}

		}
		 
		validita[6] = true;
		cout << "6. Test probehl uspesne\n";
		system("pause");
		system("cls");
		
	

		for (int i = 0; i < 4; i++) {
			if (cast1[i] == 83 || cast1[i] == 115) {

				validita[7] = true;
				cout << "7. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast2[i] == 83 || cast2[i] == 115) {

				validita[7] = true;
				cout << "7. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast3[i] == 83 || cast3[i] == 115) {

				validita[7] = true;
				cout << "7. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

			if (cast4[i] == 83 || cast4[i] == 115) {

				validita[7] = true;
				cout << "7. Test probehl uspesne\n";
				system("pause");
				system("cls");
				break;
			}

		}

			if (validita[7] != true) {

				cout << "Tento kod je neplatny";
				return(7);

			}



			if (cast1[0] == 83 || cast1[0] == 115) {

				validita[8] = false;
				cout << "Tento kod je neplatny";
				return(8);
			}

			if (cast2[0] == 83 || cast2[0] == 115) {

				validita[8] = false;
				cout << "Tento kod je neplatny";
				return(8);
			}

			if (cast3[0] == 83 || cast3[0] == 115) {

				validita[8] = false;
				cout << "Tento kod je neplatny";
				return(8);
			}

			if (cast4[0] == 83 || cast4[0] == 115) {

				validita[8] = false;
				cout << "Tento kod je neplatny";
				return(8);
			}

			cout << "8. Test probehl uspesne\n";
			system("pause");
			system("cls");

			if (cast4[3] == 52) {

				validita[9] = false;
				cout << "Tento kod je neplatny";
				return(9);
			}


				cout << "9. Test probehl uspesne\n";
				system("pause");
				system("cls");

			


			cout << "Kontrola skoncila.\n";
			cout << "Tento kod: " << cast1 << "-" << cast2 << "-" << cast3 << "-" << cast4 << " je platny";


	}



	return(0);
}

/*	Platnost kodu se odviji od 9 faktoru.
	
	1. Soucet kazde casti musi byt delitelny 6 (Pokud se vyskytuje v casti pismeno napr.: "A" bude do souctu zapocitana jeho hodnotav ASCI tabulce.)
	2. V celem kodu musi byt alespon jedno Male pismeno
	3. V celem kodu musi byt alespon jedno Velke pismeno
	4. V celem kodu musi byt alespon jedna Cislice
	5. Soucet vsech cislic v kodu nesmi presahnout hodnotu 30
	6. Kod nesmi obsahovat pismeno "P"
	7. Kod musi obsahovat alespon jedno pismeno "S"
	8. Kod nesmi zacinat pismenem
	9. Kod nesmi konci cislem 4.




	kod je rozdelen do 4 casti, kazda cast ma 4 znaky (cisla nebo pismena)
	
	forma kodu: 1234-1234-1234-1234, ABCD-ABCD-ABCD-ABCD , 1D7g-hT2y-i29N-Oq19
	Kod muze obsahovat: Cisla (0, 1, 2...), Pismena mala + velka (A, j, k, X...)

*/