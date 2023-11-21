#include <Windows.h>
#include <iostream>
#include <vector>
#include <tlhelp32.h>

int main()
{
    DWORD pid = GetCurrentProcessId();
    //std::string testStr = "Hello";
	char testStr[] = "Hello";
	
	std::cout << testStr << std::endl;
	std::cout << pid << std::endl;
	int a;
	std::cin >> a;

	std::cout << "Resutl: " << testStr << std::endl;
	system("pause");
}