
#include "Header.h"

int main() 
{
	int verif = 0, verif1 = 0, verif2 = 0;
	cr array;
	char z;
	printf(" test count of rows %d\n", rows);
	printf(" test count of cols %d\n", cols);


	while (verif == 0) 
	{
		printf("'a' - create array, 'b' - enter the values in array, 'c' - print array, 'd' - delete array.\n  ");
		scanf_s(" %c", &z);

		switch (z)
		{
			case ('a'):
				array = create_Arr();
				if (array.array == NULL) {
					printf("Error with creating\n");
					break;
				}
				z = 0;
				verif1 = 1;
				break;

			case ('b'):
				if (verif1 == 1) {
				values(array);
				verif2 = 1;

				}
				else {
					system("cls");
				}
				z = 0;
				break;

			case ('c'):
				if ((verif1 == 1) && (verif2 == 1)) {
					printArray(array);

				}
				else {
					system("cls");
				}
				z = 0;
				break;
			case ('d'):
				if ((verif1 == 1) && (verif2 == 1))
				{
					system("cls");
					freeArr(array);
					verif1 = 0;
					verif2 = 0;
				}
				else {
					system("cls");
					printf("Wrong input. Try again\n");
				}
				z = 0;
				break;


		default:
			system("cls");
			printf("Wrong input\n");
			z = 0;
			break;
		}
	}


	return 0;
}
