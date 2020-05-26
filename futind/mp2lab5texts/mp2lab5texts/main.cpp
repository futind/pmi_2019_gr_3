#include <iostream>
#include "Navigator.h"


int main() {
	Node *P333 = new Node(273, "-Paragraph333-");
	Node *P332 = new Node(272, "-Paragraph332-", NULL, P333);
	Node *P331 = new Node(271, "-Paragraph331-", NULL, P332);
	Node *P323 = new Node(263, "-Paragraph323-");
	Node *P322 = new Node(262, "-Paragraph322-", NULL, P323);
	Node *P321 = new Node(261, "-Paragraph321-", NULL, P322);
	Node *P313 = new Node(253, "-Paragraph313-");
	Node *P312 = new Node(252, "-Paragraph312-", NULL, P313);
	Node *P311 = new Node(251, "-Paragraph311-", NULL, P312);
	Node *P222 = new Node(162, "-Paragraph222-");
	Node *P221 = new Node(161, "-Paragraph221-", NULL, P222);
	Node *P212 = new Node(152, "-Paragraph212-");
	Node *P211 = new Node(151, "-Paragraph211-", NULL, P212);
	Node *P111 = new Node(51, "-Paragraph111-");

	Node *SC33 = new Node(270, "-SubChapter33", P331);
	Node *SC32 = new Node(260, "-SubChapter32", P321, SC33);
	Node *SC31 = new Node(250, "-SubChapter31", P311, SC32);
	Node *SC22 = new Node(160, "-SubChapter22", P221);
	Node *SC21 = new Node(150, "-SubChapter21", P211, SC22);
	Node *SC11 = new Node(50, "-SubChapter11", P111);

	Node *C3 = new Node(300, "-Chapter3-",SC31);
	Node *C2 = new Node(200, "-Chapter2-",SC21,C3);
	Node *C1 = new Node(100, "-Chapter1-",SC11,C2);

	Navigator N(C1);

	cout << "SCHEME IS CHAPTER - SUBCHAPTER - PARAGRAPH" << endl;
	cout << "PRINT 1 TO OPEN NEXT" << endl;
	cout << "PRINT 2 TO OPEN LEAST" << endl;
	cout << "PRINT 3 TO GO DOWN" << endl;
	cout << "PRINT 4 TO GO UP" << endl;
	cout << "PRINT 0 TO EXIT" << endl;


	char ch = ' ';
	while (ch != '0') {
		cin >> ch;
		switch (ch) {
		case '1':
			if (N.right()) cout << "\n" << N.sout() << endl;
			break;
		case '2':
			if (N.left()) cout << "\n" << N.sout() << endl;
			break;
		case '3':
			if (N.lvldown()) cout << "\n" << N.sout() << endl;
			break;
		case '4':
			if (N.lvlup()) cout << "\n" << N.sout() << endl;
			break;
		case '0':
			return 0;
			break;
		default:
			break;
		}
	}


	return 0;
}