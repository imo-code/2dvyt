#include <windows.h>
#include <iostream> 
using namespace std;

public char get_last_key(); 

private char lastkey; 

int input_handler(){
	
	int alt = 0x8000;
	int altq = 113; 
	int altw = 119;
	
	HANDLE hIn;
	HANDLE hOut;
	COORD KeyWhere;
	bool continue = true;
	INPUT_RECORD InRec;
	
	hIn = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_INPUT_HANDLE);
	
	cout << "key event: " << endl;
	
	while (continue) {
		if (InRec.EventType == KEY_EVENT ) {
			lastkey = InRec.Event.KeyEvent.uChar.AsciiChar;
			cout << lastkey << endl; 
		}
	}
}

public char get_last_key() {
	return lastkey;
}



