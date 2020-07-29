//doi d/m/y -> d 
int thisIsMagic(int year, int month, int day) {
	if (month < 3) {
		year--;
		month += 12;
	}
	return 365 * year + year / 4 - year / 100 + year / 400 + (153 * month - 457) / 5 + day - 306;
}
//color
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
std::cout << "xanh duong\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
std::cout << "do\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
std::cout << "xanh la\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
std::cout << "tim\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
std::cout << "duong nhat\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
std::cout << "vang nhat\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
std::cout << "trang\n";
//