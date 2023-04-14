#include <iostream>
#include <Windows.h>
using namespace std;


int main() {


	ShellExecute(GetActiveWindow(), L"OPEN", L"cmd", L"notepad ", NULL, 0L);
}