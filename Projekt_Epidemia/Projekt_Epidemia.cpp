// Projekt_Epidemia.cpp

#include <iostream>
using namespace std;

int main() { // the beginning of main()

	// initial variables
	int s = 80; // susceptible - can be infected
	int i = 10; // infected
	int r = 10; // recovered - immune - can't be infected

	// coefficients
	double infectionRate = 0.20; // 20% * i(nfected)
	double recoveryRate = 0.10; // 10% * i(nfected)

	// variables representing changes
	int ni = infectionRate * i; // condition(ni <= s) - the newly infected at the beginning of the day
	int nr = recoveryRate * i; // the newly recovered at the beginning of the day

	int s2 = s - ni; // new susceptible count
	int i2 = i + ni - nr; // new infected count
	int r2 = r + nr; // new recovred count
	int total = s2 + i2 + r2; // 100 individuals

	// output - test
	cout << s2 << "\n" << i2 << "\n" << r2 << "\n" << total << "\n";

} // the end of main()