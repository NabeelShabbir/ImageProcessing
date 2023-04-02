#ifndef TASK3_H
#define TASK3_H


float Dice_Coefficient(float** ptr_GT, float** ptr_OI, int rows, int cols)
{
	float FP = 0, TP = 0, FN = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (ptr_GT[i][j] != 0 && ptr_OI[i][j] != 0)
			{
				TP++;
			}
			if (ptr_GT[i][j] == 0 && ptr_OI[i][j] != 0)
			{
				FP++;
			}
			if (ptr_GT[i][j] != 0 && ptr_OI[i][j] == 0)
			{
				FN++;
			}

		}
	}

	cout << endl << "True positive: " << TP << endl;
	cout << endl << "False positive: " << FP << endl;
	cout << endl << "False Negatives: " << FN << endl;

	float DC = (2 * TP) / (FN + (2.0 * TP) + FP);

	return DC;
}








#endif