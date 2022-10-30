#include<iostream>
using namespace std;//по книжке_стр.331-332

class vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
	vehicle(int p, int f, int m);
	int range();
};//объ€вление класса

	vehicle::vehicle(int p, int f, int m){
		passengers = p;
		fuelcap = f;
		mpg = m;
	}//конструктор класса
	int vehicle::range() {
		return mpg * fuelcap;
	}//реализаци€ конструктора

	int main() {
		vehicle minivan(7, 16, 21);
		vehicle sportscar(2, 14, 12);
		int range1, range2;
		range1 = minivan.range();
		range2 = sportscar.range();
		cout << "cargo may affort passengers - " << minivan.passengers << ", distance " << range1 << "\n";
		cout << "sportscar may affort passengers - " << sportscar.passengers << ", distance " << range2 << "\n";


	}//реализаци€ кода в мэйне