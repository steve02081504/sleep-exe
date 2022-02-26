#include <windows.h>
#include <stdlib.h>

int main(size_t,char**argv)
{
	const char* fk = argv[1];
	if(!fk)
		fk = "";
	Sleep(strtol(fk, 0, 10) * 1000);
}
