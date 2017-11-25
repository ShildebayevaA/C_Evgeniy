
#include <stdio.h>
#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
		
#pragma region task2 
	int raz = 380;
    int dva = 3*raz;
    int tri = raz+dva;
	//int total = chock + milk + rice;
	//cout << "»того \n";
	cout << "\t"<< raz << "\t" << dva << "\t"<< tri << "\n";
	//system("pause");
	#pragma endregion

#pragma region task3	// zada4a 3
	int Cashka = 6;
	int Lozhka = Cashka;
	int blutsa = Cashka;
	cout << "\t" << Cashka << "\t" << Lozhka << "\t" << blutsa << "\t" << "\n";
#pragma endregion

#pragma region task5	// zada4a 5
	int tek_god = 2017;
	int tek_mes = 11;
	int god_r = 1939;
	int mes_r = 8;
	int vozr_g = tek_god - god_r;
	int vozr_m = tek_mes - mes_r;
	cout << "\t" << "¬ам " << vozr_g << " лет и " << vozr_m << " мес€цев" << "\n";
#pragma endregion

#pragma region task6	// zada4a 6
	float raz_fl = 2.88;
	float dva_fl = 3.1398;
	float	summa = raz_fl + dva_fl;
	float	razn = raz_fl - dva_fl;
	float	proizv = raz_fl*dva_fl;
	printf("%f", raz_fl);
	cout << "\t";
		printf("%f", dva_fl);
		cout << "\n";
		printf("%f", summa);
		cout << "\t";
		printf("%f", razn);
		cout << "\t";
		printf("%f", proizv);
		cout << "\t";
		cout << "\n";
#pragma endregion

#pragma region task7   // zada4a 7 - действительные числа из задачи 6
		float srednee = summa / 2;
		cout << "\t";
		printf("%f", srednee);
		cout << "\n";
#pragma endregion


#pragma region task8	// zada4a 8
		float katet1;
		float katet2;
		float hyp_kvadr = pow(katet1, 2) + pow(katet2, 2);
		float Hyp = sqrt(hyp_kvadr);
		float S_tr = (katet1 + katet2) / 2;
#pragma endregion

#pragma region task9	// zada4a 9
			float R = 15;
		float r = 7;
		float Pi = 3.14;
		float S_ring = Pi*(pow(R, 2) - pow(r, 2));
			cout << "\t";
		printf("%f", S_ring);
		cout << "\n";
		#pragma region task9
			
		// zada4a 10



		// zada4a 11



		// zada4a 12


		// zada4a 13


		// zada4a 14


		// zada4a Ёни€
		int N, A, B;
		cout << "—колько пластин необходимо обработать?" << endl;
		cin >> N;
	    cout << "введите размеры платин длину и ширину:" << endl;
		cin >> A >> B;
			int Kolvo_ThS = 2 * N*A*B;
		cout << "\t" << "потребуетс€ " << Kolvo_ThS << " нанограмм сульфида тори€"  << "\n";

}