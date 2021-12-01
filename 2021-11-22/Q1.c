#include <stdio.h>

#define SIZE 20

void SwapNumber(float *iNumber1, float *iNumber2);
void BubbleSort(float *aNumber, int iInput);

int main()
{
	int iInput, iIndex;
	float aNumber[SIZE];

	scanf("%d", &iInput);
	for (iIndex = 0; iIndex < iInput; iIndex++)
	{
		scanf(" %f", &aNumber[iIndex]);
	}

	BubbleSort(aNumber, iInput);

	for (iIndex = 0; iIndex < iInput; iIndex++)
	{
		printf("%g ", aNumber[iIndex]);
	}


	return 0;
}

void SwapNumber(float *iNumber1, float *iNumber2)
{
	float iTmp = *iNumber1;
	*iNumber1 = *iNumber2;
	*iNumber2 = iTmp;
}

void BubbleSort(float *aNumber, int iInput)
{
	int iIndex1, iIndex2;

	for (iIndex1 = 0; iIndex1 < iInput - 1; iIndex1++)
	{
		for (iIndex2 = iIndex1 + 1; iIndex2 < iInput; iIndex2++)
		{
			if (aNumber[iIndex1] > aNumber[iIndex2])
			{
				SwapNumber(&aNumber[iIndex1], &aNumber[iIndex2]);
			}
		}
	}
}
