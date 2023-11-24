#include<iostream>
#include<cstdlib>
#define BOLD  "\033[1m"
#define STOP_BOLD "\033[0m"

using namespace std;

int main() {
	srand(time(NULL));
	int n=0,guess;
	int count = 0;
	while (n != -1) {
		system("cls");
		count = 1;
		n = rand() % 1000;
		cout << "Guess a number from 0 to 999\n";
		cout << "You have 10 tries\n";
		cout << BOLD << count << "-\t" << STOP_BOLD << "Guess: ";
		cin >> guess;

		while (guess != n && count != 10) {
			count++;
			if (guess < n && n - guess <= 10) {
				cout << BOLD << count << "-\t" << STOP_BOLD << "Guess again (near but low) :";
			}
			else if (guess < n && n - guess <= 50) {
				cout << BOLD << count << "-\t" << STOP_BOLD << "Guess again (low) :";
			}
			else if (guess < n) {
				cout << BOLD << count << "-\t" << STOP_BOLD << "Guess again (very low) :";
			}
			else if (guess > n && guess - n <= 10) {
				cout << BOLD << count << "-\t" << STOP_BOLD << "Guess again (near but high) :";
			}
			else if (guess > n && guess - n <= 50) {
				cout << BOLD << count << "-\t" << STOP_BOLD << "Guess again (high) :";
			}
			else {
				cout << BOLD << count << "-\t" << STOP_BOLD << "Guess again (very high) :";
			}
			cin >> guess;
		}

		if (guess == n) {
			cout << BOLD << "You found the number!!\n" << STOP_BOLD;
		}
		else cout << "You have used all tries!\n";
		cout << "\n\nEnter -1 to exit\nEnter any other number to play again\n";
		cin >> n;
	}
}