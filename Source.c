#include <stdio.h>
#include <stdlib.h>

#define PROB 7

#define PROB1 1 
#define PROB2 2 
#define PROB3 3 
#define PROB4 4 
#define PROB5 5

#define PROB7 7
#define PROB8 8
#define PROB9 9


#if(PROB == PROB1)
#define PARAM1 9
void conv(unsigned long var);
#endif /* (PROB == PROB1) */

#if(PROB == PROB2)
#define setBit(var, pozitie) var|=(1<<pozitie)
#define clearBit(var, pozitie) var&=~(1<<pozitie)
#define getBit(var, pozitie) var&(1<<pozitite)
#endif /* (PROB == PROB2) */

#if(PROB == PROB3)
#define PARAM3 15
int getBit(unsigned long val,char poz);
unsigned long setBit(unsigned long param, char poz);
unsigned long clearBit(unsigned long param, char poz);
void invBits(unsigned long param);
#endif /* (PROB == PROB3) */

#if(PROB == PROB4)
#define LUNGIME_TABLOU	7
#define ValViteza 50
int afisareInterval(unsigned long val, unsigned long tabInervale[]);
unsigned long	tablouIntervale[LUNGIME_TABLOU] = { 5, 20, 50, 90, 100, 130, 139 };
#endif /* (PROB == PROB4) */

#if(PROB == PROB5)
#include"tablou.h"
int prim(int x);
int splitNr(int tab[]);
#endif /* (PROB == PROB5) */

#if(PROB == PROB7)
#include<string.h>
#include <wchar.h>
#define LUNG_TAB_ASCII 15
#define PARAM7 7542
void asciiTab(unsigned long param);
#endif /* (PROB == PROB7) */

#if(PROB == PROB8)
#include<math.h>
long nthFibTerm(int elem);
#endif /* (PROB == PROB8) */

#if(PROB == PROB9)
#define SearchMethod 10

#define FastSearch 10
#define SlowSearch 1

#define LENGTH 10
#define valCautata 121
int vector[LENGTH] = { 145,122, 121, 91, 83, 81, 78, 70, 51, 22};
int binSearch(int val, int vec[]);
int search(int val, int vec[]);
#endif /* (PROB == PROB9) */

int main()
{
	printf("\tHello\n\n");

#if(PROB == PROB1)
	unsigned long param = PARAM1;
	conv(param);
#endif /* (PROB == PROB1) */

#if(PROB == PROB3)
	unsigned long param = PARAM3;
	invBits(param);
#endif /* (PROB == PROB3) */

#if(PROB == PROB4)
	afisareInterval(ValViteza, tablouIntervale);
#endif /* (PROB == PROB4) */

#if(PROB == PROB5)
	printf("%i",splitNr(tab_numere));
#endif /* (PROB == PROB5) */

#if(PROB == PROB7)
	asciiTab(PARAM7);
#endif /* (PROB == PROB7) */

#if(PROB == PROB8)
	printf("\n%d\n",nthFibTerm(25));
#endif /* (PROB == PROB8) */

#if(PROB == PROB9)
#if (SearchMethod == SlowSearch)
	printf("\n%d\n",search(valCautata,vector));
#elif (SearchMethod == FastSearch)
	printf("\n%d\n",binSearch(valCautata,vector));
#endif /* SearchMethod */
#endif /* (PROB == PROB9) */
	printf("\n");
	return 0;
}


#if(PROB == PROB1) 
void conv(unsigned long var)
{
	int reminder, v[sizeof(var) * 8], nr_1 = 0, nr_0 = 0, k = 0;
	while (var != 0)
	{
		reminder = var % 2; var = var / 2;

		if (reminder)
		{
			nr_1++;
		}
		else
		{
			nr_0++;
		}
		v[k] = reminder;
		k++;
	}
	for (int i = k - 1; i >= 0; i--)
	{
		printf("%d ", v[i]);
	}
}
#endif /* (PROB == PROB1) */


#if(PROB == PROB3)

int getBit(unsigned long val,char poz)
{
	return (val&(1 << poz) ? 1:0);
}

unsigned long setBit(unsigned long param, char poz)
{
	return param |= 1 << poz;
}

unsigned long clearBit(unsigned long param, char poz)
{
	return param &= ~(1 << poz);
}

void invBits(unsigned long param)
{
	int i,length,status;
	length = sizeof(param) * 8 - 1;
	printf("\n%8.x\n",param);
	for (i = 0; i <= length/2; i++)
	{
		/* get msb */
		status = getBit(param, length - i);
		/* set msb */
		if (getBit(param, i))
		{
			param |= 1 << (length - i);
		}
		else
		{
			param &= ~(1 << (length - i));
		}
		/* set lsb */
		if (status)
		{
			param |= 1 << i;
		}
		else
		{
			param &= ~(1 << i);
		}
	}
	printf("\n%x\n", param);
}
#endif /* (PROB == PROB3) */

#if(PROB == PROB4)
int afisareInterval(unsigned long val, unsigned long tabIntervale[])
{
	int i;
	if (val < tabIntervale[0])
	{
		printf(" %d\n", i);
	}
	for (i = 0; i < LUNGIME_TABLOU; i++)
	{
		if (val >= tabIntervale[i] && val < tabIntervale[i + 1])
		{
			printf(" %d\n",i+1);
		}
	}
	if (val > tabIntervale[LUNGIME_TABLOU-1])
	{
		printf(" %d\n", LUNGIME_TABLOU);
	}
	return 0;
}
#endif /* (PROB == PROB4) */

#if(PROB == PROB5)
int prim(int x)
{
	int i;
	for (i = 2; i <= x; i++)
		if (i % 2 > 0 && x % i == 0)
			return 1;
	return 0;
}
int splitNr(int tab[])
{
	int i,ip=0,ipp=0,in=0;
	for (i = 0; i < LUNGIME_N; i++)
	{
		if (ipp == LUNGIME_PP || ip == LUNGIME_NPP || in == LUNGIME_NN)
		{
			return -143;
		}
		else
		{
			if (tab[i] >= 0)
			{
				if (prim(tab[i]))
				{
					//nr prim+
					tab_nrPrimePozitive[ipp] = tab[i];
					ipp++;
				}
				else if (!prim(tab[i]))
				{
					//nr +
					tab_nrNonPrimePozitive[ip] = tab[i];
					ip++;
				}
			}
			else
			{
				//nr -
				tab_nrNegative[in] = tab[i];
				in++;
			}
		}
	}
	return 0;
}
#endif /* (PROB == PROB5) */

#if(PROB == PROB7)
void asciiTab(unsigned long param)
{
	int i = 0;
	char tab[LUNG_TAB_ASCII][10];
	char cif;
	while (param != 0)
	{
		cif = param % 10; printf("%d\t",cif);
		sprintf(&tab[i], "0x3%d", cif);
		param /= 10;
		i++;
	}
	printf("\n");
	int j;
	for (j = 0; j < i; j++)
	{
		puts(tab[j]);
	}

}
#endif /* (PROB == PROB7) */

#if(PROB == PROB8)
long nthFibTerm(int elem)
{
	return (pow((1 + sqrt(5)) / 2, (elem)) - pow((1 - sqrt(5)) / 2, (elem)) )/sqrt(5);
}
#endif /* (PROB == PROB8) */

#if(PROB == PROB9)
#if (SearchMethod == SlowSearch)
int search(int val, int vec[])
{
	int i;
	for (int i = 0; i < LENGTH; i++)
	{
		if (vec[i] == val)
			return (i + 1);
	}
	return -22;
}
#elif (SearchMethod == FastSearch)
int binSearch(int val, int vec[])
{
	int first = 0, last = LENGTH - 1, middle;
	middle = (first + last) / 2;
	while (first <= last)
	{
		if (vec[middle] > val)
		{
			first = middle + 1;
		}
		else if (vec[middle] == val)
		{
			return (middle + 1);
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	return -21;
}
#endif /* SearchMethod */
#endif /* (PROB == PROB9) */