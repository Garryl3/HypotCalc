#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b; 

	cout << "Hitung sisi miring" << endl;
	cout << "  |\\" << endl;
	cout << "  |" << setw(2) << "\\" << endl;
	cout << "  |" << setw(3) << "\\" << endl;
	cout << "a |" << setw(4) << "\\" << " c" << endl;
	cout << "  |" << setw(5) << "\\" << endl;
	cout << "  |" << setw(6) << "\\" << endl;
	cout << "  |" << setw(7) << "\\" << endl;
	cout << "  ---------" << endl;
	cout << setw(6) << "b /n" << endl;
	cout << "Masukan nilai a :";
	cin >> a;
	cout << "Masukan nilai b :";
	cin >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Sisi miring   c :" << c << endl;

	system("pause");
	return 0;

}