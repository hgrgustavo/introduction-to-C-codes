// libraries
#include <stdio.h>
#include <stdlib.h>

int main() {
	// calendar struct
	struct calendar {
		int day;
		int month;
		int year;
	}; struct calendar now, * later;		// declaring our pointer later 
	later = &now;		// later pointer will point to now address

	// atributing values to later struct members (pointed to now)
	later->day = 28;
	later->month = 9;
	later->year = 2018;
	// prints calendar
	printf("%i%i%i\n\n", later->day, later->month, later->year);
	system("pause");
	return 0;
}