// Projekt_Epidemia.cpp

#include <iostream>
using namespace std;

int main() { // początek funkcji main()

	// zmienne wyjściowe
	int s = 80; // podatni - mogą być zarażeni
	int i = 10; // zarażeni - mogą być uleczeni
	int r = 10; // uleczeni - odporni, nie mogą być zarażeni

	// współczynniki zarażeń i uleczeń
	double infectionRate = 0.20; // zarażenia: 20% z zarażonych
	double recoveryRate = 0.10; // uzdrowienia: 10% z zarażonych

	// zmienne reprezentujące zmiany
	int ni = infectionRate * i; // warunek(ni <= s) - liczba nowo zakażonych osób na początku dnia
	int nr = recoveryRate * i; // liczba nowo uleczonych osób na początku dnia

	int s2 = s - ni; // całkowita liczba podatnych
	int i2 = i + ni - nr; // całkowita liczba zakażonych
	int r2 = r + nr; // całkowita liczba uleczonych
	int total = s2 + i2 + r2; // populacja liczy 100 osób

	// output - test
	cout << s2 << "\n" << i2 << "\n" << r2 << "\n" << total << "\n";

} // koniec funkcji main()