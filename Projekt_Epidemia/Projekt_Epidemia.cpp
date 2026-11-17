// Projekt_Epidemia.cpp

#include <iostream>
using namespace std;

// prototypy funkcji:
// prototyp funkcji showPopulation wyświetlającej stan populacji
void showPopulation(int day, int susceptible, int infected, int recovered) {
	cout << "Day: " << day << endl;
	cout << "Susceptible: " << susceptible << endl;
	cout << "Infected: " << infected << endl;
	cout << "Recovered: " << recovered << endl;
	cout << "Total: " << susceptible + infected + recovered << endl;
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

	// funkcja wyświetla stan populacji
	//showPopulation(day, susceptible, infected, recovered);

	// menue design
	int choice;
	cout << "=== Epidemic Simulator ===" << endl;
	cout << "1. Simulate next day" << endl;
	cout << "2. Change model parameters" << endl;
	cout << "3. Exit" << endl;
	cout << "Your choice: ";
	cin >> choice;





	// pętla sterująca programem: while (warunek) {...}

} // koniec funkcji main()

