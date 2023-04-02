#ifndef TASK2_H
#define TASK2_H

float** k_means_clustering(float** ptr, int rows, int cols)
{
	int K1 = 100, K2 = 120;
	int s_K1 = 0, s_K2 = 0;
	int n_K1 = 0, n_K2 = 0;

	int Value = 0;
	int Value_K1 = 0;
	int Value_K2 = 0;
	
	int ValueP2_K1 = 0;
	int ValueP2_K2 = 0;

	bool flag = false;

	while (flag == false)
	{
		flag = true;
		s_K1 = 0;
		s_K2 = 0;
		n_K1 = 0;
		n_K2 = 0;

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				Value = ptr[i][j];
				Value_K1 = Value - K1;
				Value_K2 = Value - K2;

				if (Value_K1 < 0)
				{
					Value_K1 *= -1;
				}
				if (Value_K2 < 0)
				{
					Value_K2 *= -1;
				}


				if (Value_K1 < Value_K2)
				{
					s_K1 += ptr[i][j];
					n_K1++;
				}
				else
				{
					s_K2 += ptr[i][j];
					n_K2++;
				}
			}
		}

		if (K1 != s_K1 / n_K1 || K2 != s_K2 / n_K2)
		{
			K1 = s_K1 / n_K1;
			K2 = s_K2 / n_K2;
			flag = false;
		}
	}

	if (K1 < K2)
	{
		ValueP2_K1 = 255;
		ValueP2_K2 = 0;
	}
	else
	{
		ValueP2_K1 = 0;
		ValueP2_K2 = 255;
	}

	float** arrPass1 = new float* [rows];
	for (int i = 0; i < rows; i++)
	{
		arrPass1[i] = new float[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Value = ptr[i][j];
			Value_K1 = Value - K1;
			Value_K2 = Value - K2;

			if (Value_K1 < 0)
			{
				Value_K1 *= -1;
			}
			if (Value_K2 < 0)
			{
				Value_K2 *= -1;
			}


			if (Value_K1 < Value_K2)
			{
				arrPass1[i][j] = ValueP2_K1;
			}
			else
			{
				arrPass1[i][j] = ValueP2_K2;
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (j < cols * 0.05 || j > cols - (cols * 0.05))
			{
				arrPass1[i][j] = 0;
			}
			if (i < rows * 0.05 || i > rows - (rows * 0.05))
			{
				arrPass1[i][j] = 0;
			}
		}
	}

	return arrPass1;
}


#endif