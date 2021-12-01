#include <stdio.h>

#define TYPE 4
#define SIZE 200

void SortPoker(int aPokerNumber[TYPE][SIZE])
{
	int iIndex1, iIndex2, iIndex3, iTempNumber;

	for (iIndex1 = 0; iIndex1 < TYPE; iIndex1++)
	{
		for (iIndex2 = 1; iIndex2 < aPokerNumber[iIndex1][0]; iIndex2++)
		{
			for (iIndex3 = iIndex2 + 1; iIndex3 <= aPokerNumber[iIndex1][0]; iIndex3++)
			{
				if (aPokerNumber[iIndex1][iIndex2] < aPokerNumber[iIndex1][iIndex3])
				{
					iTempNumber = aPokerNumber[iIndex1][iIndex2];
					aPokerNumber[iIndex1][iIndex2] = aPokerNumber[iIndex1][iIndex3];
					aPokerNumber[iIndex1][iIndex3] = iTempNumber;
				}
			}
		}
	}
}

void PrintPoker(int aPokerNumber[TYPE][SIZE])
{
	int iIndex1, iIndex2;
	char cType;

	for (iIndex1 = 0; iIndex1 < TYPE; iIndex1++)
	{
		switch(iIndex1)
		{
			case 0:
				cType = 'S';
			break;

			case 1:
				cType = 'H';
			break;

			case 2:
				cType = 'D';
			break;

			default:
				cType = 'C';
			break;
		}

		for (iIndex2 = 1; iIndex2 <= aPokerNumber[iIndex1][0]; iIndex2++)
		{
			printf("%c%d ", cType, aPokerNumber[iIndex1][iIndex2]);
		}
	}
}

int main()
{
	int iIndex1, iIndex2, iInput = 0, iTempNumber = 0;
	char aInput[SIZE] = {'\0'};

	scanf("%d", &iInput);

	for (iIndex1 = 0; iIndex1 < iInput; iIndex1++)
	{
		int iPokerType = 0, aPokerNumber[TYPE][SIZE] = {0};

		scanf(" %[^\n]", aInput);

		for (iIndex2 = 0; '\0' != aInput[iIndex2]; iIndex2++)
		{
			switch (aInput[iIndex2])
			{
				case 'C':
					iPokerType += 1;
				case 'D':
					iPokerType += 1;
				case 'H':
					iPokerType += 1;
				case 'S':
					aPokerNumber[iPokerType][0]++;
				break;

				case ' ':
					iPokerType = 0;
				break;

				default:
					if ('0' <= aInput[iIndex2] && '9' >= aInput[iIndex2])
					{
						iTempNumber = aInput[iIndex2] - '0';
						if (0 < aPokerNumber[iPokerType][aPokerNumber[iPokerType][0]])
						{
							aPokerNumber[iPokerType][aPokerNumber[iPokerType][0]] = aPokerNumber[iPokerType][aPokerNumber[iPokerType][0]] * 10;
						}

						aPokerNumber[iPokerType][aPokerNumber[iPokerType][0]] += iTempNumber;
					}
				break;
			}
		}

		SortPoker(aPokerNumber);
		PrintPoker(aPokerNumber);

		printf("\n");
	}

	return 0;
}