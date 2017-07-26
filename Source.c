#include <stdio.h>
#include <stdlib.h>
#include "cdef.h"

#define PROB 667

#define PROB1 1 
#define PROB2 2 
#define PROB3 3 
#define PROB4 4 
#define PROB5 5

#define PROB7 7
#define PROB8 8
#define PROB9 9

#define PROB3_1 11
#define PROB3_2 12
#define PROB3_3 13
#define PROB3_4 14
#define PROB3_5 15
#define PROB3_6 16

#define PROB4_1 21

#define PROB666 666
#define PROB667 667

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

#if(PROB == PROB3_1)
void printBytes(unsigned long *p);
#endif /* (PROB == PROB3_1) */

#if(PROB == PROB3_2)
#define FLASH_BIUCR 432
void flashRegSet(unsigned short *p, char APC13_15, char WWSC11_12, char RWSC8_10, char DPFEN6_7, char IPFEN4_5, char PFLIM1_3, char BFEN0);
void flashRegPrint(unsigned short *p);
#endif /* (PROB == PROB3_2) */

#if(PROB == PROB3_3)
#define LEN 6
void calcul(char *ptablou, long *min, long *max, long *sum);
#endif /* (PROB == PROB3_3) */

#if(PROB == PROB3_4)
void strncpy(char *destinatie, char *sursa, unsigned int n);
#endif /* (PROB == PROB3_4) */

#if(PROB == PROB3_6)
#define N 4
#define M 4
void matSort(unsigned int mat[N][M]);
void swap(unsigned int *a, unsigned int *b);
#endif /* (PROB == PROB3_4) */

#if(PROB == PROB4_1)
void setReg(unsigned char *p);
void printReg(unsigned char p);
#endif /* (PROB == PROB4_1) */

#if(PROB == PROB666)
void retNrOf1Bits(unsigned char *p, unsigned long *count);
#endif /* (PROB == PROB666) */

void PROB_vCopyBits(uint16 u16Input, uint16 *u16Output, uint8 u8NrofBitsToCopy, uint8 u8StartBit)
{
	uint16 u16Mask;
	u16Mask = (1 << u8NrofBitsToCopy) - 1;
	//*u16Output &= (CDEF_nu32Max - (u16Mask << u8StartBit));
	*u16Output &= (~(u16Mask << u8StartBit));
	u16Mask =((u16Mask<<u8StartBit)& u16Input);

	*u16Output |= u16Mask;
}

#define N 9
void PROB_vWriteLR(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Line, uint8 u8Start, uint8 u8Stop);
void PROB_vWriteRL(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Line, uint8 u8Start, uint8 u8Stop);
void PROB_vWriteTB(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Col, uint8 u8Start, uint8 u8Stop);
void PROB_vWriteBT(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Col, uint8 u8Start, uint8 u8Stop);
void PROB_vWriteSpiral(uint8 u8paMat[N][N], uint8 u8aTab[]);

uint8 j = 0;
char i;

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
	printf("\n%d\n",nthFibTerm(6));
#endif /* (PROB == PROB8) */

#if(PROB == PROB9)
#if (SearchMethod == SlowSearch)
	printf("\n%d\n",search(valCautata,vector));
#elif (SearchMethod == FastSearch)
	printf("\n%d\n",binSearch(valCautata,vector));
#endif /* SearchMethod */
#endif /* (PROB == PROB9) */

#if(PROB == PROB3_1)
	unsigned long param = 34683;
	printBytes(&param);
#endif /* (PROB == PROB3_1) */

#if(PROB == PROB3_2)
	unsigned short p = FLASH_BIUCR;
	flashRegSet(&p,7,3,7,3,3,7,1);
	flashRegPrint(&p);
#endif /* (PROB == PROB3_2) */

#if(PROB == PROB3_3)
	
	char ptablou[LEN+1] = {LEN,3,9,5,3,7,1};
	long min, max, sum;
	calcul( ptablou,  &min,  &max,  &sum);
	printf("\n min %ld\tmax %ld\tsum %ld\n",min,max,sum);
#endif /* (PROB == PROB3_3) */

#if(PROB == PROB3_4)
	char d[] = "destinatie", s[] = "sursa";
	int n = 3;
	strncpy(d,s,n);
	printf("\ndestinatie\t%s\nsursa\t\t%s",d,s);
#endif /* (PROB == PROB3_4) */

#if(PROB == PROB3_6)
	 int mat[N][M] = { 
		3, 1, 5, 2,
		2, 5, 2, 6,
		7, 2, 5, 2,
		9, 1, 3, 6 };
	matSort(mat);
#endif /* (PROB == PROB3_4) */

#if(PROB == PROB4_1)
	unsigned char reg;
	setReg(&reg);
	printReg(reg);
#endif /* (PROB == PROB4_1) */

#if(PROB == PROB666)
	unsigned char c = 10;
	unsigned long count = 0;
	retNrOf1Bits(&c, &count);
	printf("\n%x -> %ld\n",c,count);
#endif /* (PROB == PROB666) */

	uint16 u16Input=0xaaaa;
	uint16 u16Output=0xf0eb;
	uint8  u8NrOfBits=4;
	uint8  u8BitPos=12;

	/* Read from console*/
	//scanf("Input=%d\n Ouput=%d\n Nr Of Bits to Swap=%d\n Bit Start Position=%d\n", &u16Input, &u16Output, &u8NrOfBits, &u8BitPos);
	/* Do the magic */
	PROB_vCopyBits(u16Input, &u16Output, u8NrOfBits, u8BitPos);
	
	/* Write them to console; HEX*/
	printf("Input=%x\n Ouput=%x\n ", u16Input, u16Output);

	printf("\n\n\n");
	j = 0;
	uint8 u8paMat[N][N], u8aInput[N*N];
	for (i = 1; i <= N*N; i++)
	{
		u8aInput[i - 1] = i;
	}

	PROB_vWriteSpiral(u8paMat, u8aInput);

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
	}\
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

#if(PROB == PROB3_1)
void printBytes(unsigned long *p)
{
	int i;
	char *c;
	c = &p;
	for (i = 0; i < sizeof(*p); i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n%ld",*p);
}
#endif /* (PROB == PROB3_1) */

#if(PROB == PROB3_2)
void flashRegSet(unsigned short *p, char APC13_15, char WWSC11_12, char RWSC8_10, char DPFEN6_7, char IPFEN4_5, char PFLIM1_3, char BFEN0)
{
	/* init bits recieved as param*/
	*p = (APC13_15 << 13) + (WWSC11_12 << 11) + (RWSC8_10 << 8) + (DPFEN6_7 << 6) + (IPFEN4_5 << 4) + (PFLIM1_3 << 1) + BFEN0;
}

void flashRegPrint(unsigned short *p)
{
	printf("\n%x\n",*p);
}
#endif /* (PROB == PROB3_2) */

#if(PROB == PROB3_3)
void calcul(char *ptablou, long *min, long *max, long *sum)
{
	*min = *max = ptablou[1];
	*sum = 0;
	int i;
	for (i = 1; i <= ptablou[0]; i++)
	{
		if ((long)ptablou[i] < *min)
		{
			*min = ptablou[i];
		}
		if ((long)ptablou[i] > *max)
		{
			*max = ptablou[i];
		}
		*sum += ptablou[i];
	}
}
#endif /* (PROB == PROB3_3) */

#if(PROB == PROB3_4)
void strncpy(char *destinatie, char *sursa, unsigned int n)
{
	/* copiaza n caractere */
	while (n > 0)
	{
		*destinatie = *sursa;
		destinatie++;
		sursa++;
		n--;
	}
}
#endif /* (PROB == PROB3_4) */

#if(PROB == PROB3_6)
void matSort(unsigned int mat[N][M])
{
	int swapped, i,j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for (j = 0; j < N; j++)
	{
		do {
			swapped = 0;
			for (i = 1; i < M; i++)
			{
				if (mat[j][i - 1] > mat[j][i]) {
					swap(&mat[j][i-1],&mat[j][i]);
					swapped = 1;
				}
			}
		} while (swapped);
	}
	printf("\n\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
void swap(unsigned int *a,unsigned int *b)
{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
}
#endif /* (PROB == PROB3_6) */

#if(PROB == PROB4_1)
void setReg(unsigned char *p)
{
	union{
		unsigned char all_bits;
		struct{
			unsigned char WPS0 : 1;
			unsigned char WPE1 : 1;
			unsigned char : 1;
			unsigned char : 1;
			unsigned char HYS4 : 1;
			unsigned char ODE5 : 1;
			unsigned char DSC6_7 : 2;
			
		}bitfield;
	}SIU_PCR;
	SIU_PCR.all_bits = 14;
	SIU_PCR.bitfield.DSC6_7 = 2;
	*p = SIU_PCR.all_bits;
}
void printReg(unsigned char p)
{
	printf("\n%x\n",p);
}
#endif /* (PROB == PROB4_1) */

#if(PROB == PROB666)
void retNrOf1Bits(unsigned char *p,unsigned long *count)
{
	unsigned char local = *p;
	while (local)
	{
		if (local & 1)
		{
			(*count)++;
		}
		local = local >> 1;
	}
}
#endif /* (PROB == PROB666) */

#if(PROB == PROB667)
void PROB_vWriteLR(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Line, uint8 u8Start, uint8 u8Stop)
{
	//uint8 i;
	for (i = u8Start; i < u8Stop; i++)
	{
		u8paMat[u8Line][i] = u8aInput[j];
		j++;
	}
}

void PROB_vWriteRL(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Line, uint8 u8Start, uint8 u8Stop)
{
	//uint8 i;
	for (i = u8Start; i >= u8Stop; i--)
	{
		u8paMat[u8Line][i] = u8aInput[j];
		j++;
	}
}

void PROB_vWriteTB(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Col, uint8 u8Start, uint8 u8Stop)
{
	//uint8 i;
	for (i = u8Start; i < u8Stop; i++)
	{
		u8paMat[i][u8Col] = u8aInput[j];
		j++;
	}
}

void PROB_vWriteBT(uint8 u8paMat[N][N], uint8 u8aInput[], uint8 u8Col, uint8 u8Start, uint8 u8Stop)
{
	//uint8 i;
	for (i = u8Start; i >= u8Stop; i--)
	{
		u8paMat[i][u8Col] = u8aInput[j];
		j++;
	}
}

void PROB_vWriteSpiral(uint8 u8paMat[N][N], uint8 u8aTab[])
{
	uint8 u8Count = 0, i, j;
	/*
	PROB_vWriteLR(u8paMat, u8aTab, count, count, N - count);
	*/
	while (u8Count < N/2)
	{
		PROB_vWriteLR(u8paMat, u8aTab, u8Count, u8Count, N - u8Count);
		PROB_vWriteTB(u8paMat, u8aTab, N - (u8Count + 1), u8Count + 1, N - (u8Count + 1));
		PROB_vWriteRL(u8paMat, u8aTab, N - (u8Count + 1), N - (u8Count + 1), u8Count);
		PROB_vWriteBT(u8paMat, u8aTab, u8Count, N - (u8Count + 2), (u8Count + 1));
		u8Count++;
	}
	if (N % 2 != 0)
	{
		u8paMat[(N - 1) / 2][(N - 1) / 2] = u8aTab[N*N - 1];
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%2d\t",u8paMat[i][j]);
		}
		printf("\n\n\n");
	}
}

#endif /* (PROB == PROB667) */
