#include <conio.h>
#include <stdio.h>
int main()
{
	int viSalida = 0, x = 0, y = 0, primo = 0, viValor = 0, esprimo = 0, contador = 0;
	for (x = 1; x <= 50; x++)
	{
		while (true)
		{
			viValor++;
			primo = 0;
			for (y = 2; y <= viValor; y++)
			{
				esprimo = (viValor % y);
				if (esprimo == 0)
				{
					primo++;
				}
			}
			if (primo <= 1)
			{
				printf(" primo %i = %i \n ", x, viValor);
				viSalida++;
				break;
			}
		}
	}
}
