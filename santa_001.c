/*
to compile use

gcc -std=gnu99 santa_001.c -o santa.exe

to execute use

santa < names.txt
*/
#include <stdio.h>
#include <string.h>

#define total 7

int main (int argc, void **argv)
//int main (void)
{

FILE *ifp, *ofp;
char *mode = "r";
char outputFilename[] = "out.list";

ifp = fopen("names.txt", mode);


int namenumber [total] = {0,0,0,0,0,0,0};
int namenumberentry [total] = {0,0,0,0,0,0,0};
int ordered_list [total];
int ordered_index = 0;

char forname [total][50] ;
char surname [total][50] ;


int seed = 0 ;
namenumber[0] = seed;
	for (int i=0; i< total; i++) {
		scanf ("%s %s", &forname[i],&surname[i]);
		for (int j=0; j <i; j++) {
		   
		   if (i > 0 ) {
		   		if (! strncmp(surname[j], surname[i], 20)) {
		   		namenumber[i] = namenumber[j];
				namenumberentry[j] ++;
		   		}
			else
				{ seed ++ ;
				namenumber[i] = seed;
				}
			}
		}
	}

	for (int i=total; i >-1; i--) {
		for (int j =0 ; j < total ; j ++) {
			if (namenumberentry[j] == i) {
				 ordered_list[ordered_index ++] = j;
			}
		}
	}

	printf ("%s %s gives to %s %s \n", forname[ordered_list[0]],surname[ordered_list[0]],
								     forname[ordered_list[total-1]],surname[ordered_list[total-1]]);

 	for (int i=1; i<total; i++) {
   		printf ("%s %s gives to %s %s \n", forname[ordered_list[i]],surname[ordered_list[i]],
   										 forname[ordered_list[i-1]],surname[ordered_list[i-1]]);
	}


return 0;
}
