
#include <stdio.h>

/**
 * Petar Ivanov's work
 */
int main()
{
	char directory[7][50] = {"Skywalker", "Skywalker", "Portokalos", "Portocalos", "Wayne", "Brigman", "Brigman"};

	char fName [7][50];
	char lName [7][50];

	int giver [7] = {-1, -1, -1, -1, -1, -1, -1};
	int hasReceived [7] = {-1, -1, -1, -1, -1, -1, -1};

	int i, j;
	for (i = 0; i < 7; i++)
	{
		for (j = 6; j >= 0; j--)
		{
			if (i != j && hasReceived[j] == -1 && strcmp(directory[i], directory[j]) != 0)
			{
				giver[i] = j;
				hasReceived[j] = 1;
				break;
			}
		}
	}

	for (i = 0; i < 7; i++)
	{
		printf("%d\n", giver[i]);
	}
}