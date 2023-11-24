//#include<iostream>
//using namespace std;
//
//void createboard(char arr[][3]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			arr[i][j] = ' ';
//		}
//	}
//}
//
//void displayboard(char arr[][3],int w1,int w2) {
//	cout << "\t  1-   2-    3-\n\n";
//	cout << "1-\t  " << arr[0][0] << "  | " << arr[0][1] << "  | " << arr[0][2] << "   " << endl;
//	cout << "\t_____|____|_____" << endl;
//	cout << "2-\t  " << arr[1][0] << "  | " << arr[1][1] << "  | " << arr[1][2] << "   " << endl;
//	cout << "\t_____|____|_____" << endl;
//	cout << "3-\t  " << arr[2][0] << "  | " << arr[2][1] << "  | " << arr[2][2] << "   " << endl;
//	cout << "\t     |    |     " << endl;
//	cout << "\n\nPlayer 1 Wins : " << w1 << "\tPlayer 2 Wins : " << w2 << endl << endl;
//}
//
//bool checkforwin(char arr[][3]) {
//
//
//	for (int i = 0; i < 3; i++) {
//
//		//Vertical Checks
//		if (arr[i][0] != ' ') {
//			char temp = arr[i][0];
//			if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])return 1;
//		}
//
//		//Horizontal Checks
//		if (arr[0][i] == ' ')continue;
//		char temp = arr[0][i];
//		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])return 1;
//	}
//
//	//Diagonal Checks
//	if (arr[0][0] != ' ' && arr[1][1] == arr[0][0] && arr[2][2] == arr[0][0])return 1;
//	if (arr[0][2] != ' ' && arr[1][1] == arr[0][2] && arr[2][0] == arr[0][2])return 1;
//
//	return 0;
//}
//
//void switchplayers(char &a, char &b) {
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}
//
//void checkinputs(int &r, int &c,char arr[][3]) {
//	while (c < 0 || r < 0 || c>2 || r>2|| arr[r][c] != ' ') {
//		if(c < 0 || r < 0 || c>2 || r>2)cout << "Invalid inputs (1-3)\n";
//		else cout << "Already Occupied\n";
//		cout << "Enter row: ";
//		cin >> r;
//		r--;
//		cout << "Enter column: ";
//		cin >> c;
//		c--;
//	}
//	
//}
//
//int main() {
//	char board[3][3];
//	char player1='X', player2 = 'O';
//	int r, c;
//	int w1 = 0, w2 = 0;
//	int play = 1;
//	while (play) {
//
//		createboard(board);
//		int turn = 0;
//		char p;
//		bool win = 0;
//		system("cls");
//		cout << "Tic Tac Toe\n-----------\nPress 1 to use character X for first turn\nPress 2 to use character 0 for first turn\n";
//		cin >> turn;
//		if (turn != 1 && turn != 2) {
//			cout << "Enter 1 or 2\n";
//			cin >> turn;
//		}
//		if (turn == 2)switchplayers(player1,player2);
//
//		turn = 0;
//		displayboard(board,w1,w2);
//		while (turn < 9&&!win) {
//			p = turn % 2 ? player2 : player1;
//			cout << "Enter row: ";
//			cin >> r;
//			r--; //0-2
//			cout << "Enter column: ";
//			cin >> c;
//			c--; //0-2
//			checkinputs(r,c,board);
//
//			board[r][c] = p;
//			system("cls");
//			displayboard(board,w1,w2);
//			win = checkforwin(board);
//			turn++;
//		}
//		if (win) {
//			cout << ((turn - 1) % 2 ? "Player 2" : "Player 1") << " Won!!" << endl;
//			(turn - 1) % 2 ? w2++: w1++; //Adding win counter
//		}
//		else cout << "Draw!!\n";
//		cout << "\n\nTo Play Again Press 1\nTo Exit Press 0\n";
//		cin >> play;
//	}
//	cout << "Exiting...\n";
//
//}