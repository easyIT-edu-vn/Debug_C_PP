// nap cac thu vien 
#include <iostream>
#include <conio.h>
using namespace std;
//


// hàm main
int main(){
	cout << "\n DAY LA CHUONG TRINH MAY TINH DON GIAN";
	double A_Value;
	cout << "\n Nhap vao so thu nhat: ";
	cin >> A_Value;
	char k;
	cout << "\n Nhao vao phep tinh: ";
	cout << "\n Bao gom cac phep tinh +  ,  -   ,   x,   /";
	cin >> k;
	double B_Value;
	cout << "\n Nhap vaoo thu hai: ";
	cin >> B_Value;
  	switch (k)
		{
		case '+':
			cout << "\n Ket qua: ";
			cout << A_Value << " + " << B_Value << " = " << A_Value + B_Value;
			break;
		case'-':
			cout << "\n Ket qua: ";
			cout << A_Value << " - " << B_Value << " = " << A_Value - B_Value;
			break;
		case'x':
			cout << "\n Ket qua: ";
			cout << A_Value << " x " << B_Value << " = " << A_Value * B_Value;
			break;
		case '/':
			cout << "\n Ket qua: ";
			cout << A_Value << " / " << B_Value << " = " << A_Value / B_Value;
			break;

		}
	
	_getch();
}