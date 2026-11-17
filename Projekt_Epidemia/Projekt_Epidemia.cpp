// Projekt_Epidemia.cpp

#include <iostream>
using namespace std;

// prototypy funkcji:
// prototyp funkcji showPopulation wyświetlającej stan populacji
void showPopulation(int day, int susceptible, int infected, int recovered, int total) {
		cout << "Day: " << day << endl;
		cout << "Susceptible: " << susceptible << endl;
		cout << "Infected: " << infected << endl;
		cout << "Recovered: " << recovered << endl;
		cout << "Total: " << total << endl;
}

int main() { // początek funkcji main()

	// zmienne wyjściowe
	int susceptible = 80; // podatni - mogą być zarażeni
	int infected = 10; // zarażeni - mogą być uleczeni
	int recovered = 10; // uleczeni - odporni, nie mogą być zarażeni
	int total = susceptible + infected + recovered; // populacja licząca 100 osób
	int day = 0; // licznik dni

	// współczynniki zarażeń i uleczeń
	double infectionRate = 0.20; // zarażenia: 20% z zarażonych
	double recoveryRate = 0.10; // uzdrowienia: 10% z zarażonych

	// zmienne reprezentujące zmiany
	int newlyInfected = infectionRate * infected; // warunek(ni <= s) - liczba nowo zakażonych osób na początku dnia
	int newlyRecovered = recoveryRate * infected; // liczba nowo uleczonych osób na początku dnia

	int susceptible2 = susceptible - newlyInfected; // całkowita liczba podatnych
	int infected2 = infected + newlyInfected - newlyRecovered; // całkowita liczba zakażonych
	int recovered2 = recovered + newlyRecovered; // całkowita liczba uleczonych
	int total2 = susceptible2 + infected2 + recovered2; // populacja liczy 100 osób

	// wywołanie funkcji showPopulation
	
	// output - test
	cout << "Wywolanie danych bezposrednio ze zmiennych:\n" << susceptible2 << "\n" << infected2 << "\n" << recovered2 << "\n" << total2 << "\n";

} // koniec funkcji main()

