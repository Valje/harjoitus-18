/*
// Valtteri Ahonen
// Harjoitus 18 a  --  alempana b-kohta
// 5.11.2013

#include <iostream>
using namespace std;
const int MAX_COMP = 5; // Maksimissaan vertaillaan 5 asiaa

struct HAUKKU {
char nimi[15];
int ika;
};

int main ()
{
HAUKKU koira[5];

for (int ind = 0; ind < 5; ind++) 
{
cout << "Anna koiran nimi ja ika (nimi ika): ";
cin >> koira[ind].nimi
>> ws
>> koira[ind].ika;
}
// vaihtolajittelu:
for (int i = 0; i < (MAX_COMP-1); i++) // Vertailu alkaa nollasta, joten 0-4, eli MAX_COMP-1
{
for (int j = i+1; j < MAX_COMP; j++) 
{
//cout << "i: " << i << " ";
//cout << "j: " << j << endl;

if (koira[i].ika > koira[j].ika) {
HAUKKU apukoira = koira[j];
koira[j] = koira[i];
koira[i] = apukoira;
}
}
}

for (int ind = 0; ind < MAX_COMP; ind++) 
{
cout << koira[ind].nimi << " " << koira[ind].ika << endl;
}
cout << endl;
}
*/

// Valtteri Ahonen
// Harjoitus 18 b
// 5.11.2013

#include <iostream>
#include <string.h>
using namespace std;
const int MAX_COMP = 5;
const int NAME_LENGHT = 15;

struct HAUKKU {
	char nimi[NAME_LENGHT];
	int ika;
};

int main ()
{
	HAUKKU koira[5];

	for (int ind = 0; ind < 5; ind++) 
	{
		cout << "Anna koiran nimi ja ika (nimi ika): ";
		cin >> koira[ind].nimi
			>> ws
			>> koira[ind].ika;
	}
	// vaihtolajittelu:
	for (int i = 0; i < (MAX_COMP-1); i++) 
	{
		for (int j = i+1; j < MAX_COMP; j++) 
		{
			int k = 0;
			do
			{
				if (koira[i].nimi[k] > koira[j].nimi[k])
				{
					HAUKKU apukoira = koira[j];
					koira[j] = koira[i];
					koira[i] = apukoira;
				}
				k++;
			} while (koira[i].nimi[k] == koira[j].nimi[k] && k < 15);
		}
	}

	for (int ind = 0; ind < MAX_COMP; ind++) 
	{
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	cout << endl;
}
