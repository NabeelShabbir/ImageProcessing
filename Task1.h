#ifndef TASK1_H
#define TASK1_H
#include <iostream>
using namespace std;

/*-----------------------------------------------------------TASK 1--------------------------------------------------------------*/

int SmallestNeighbour(int S_Left = 0, int S_Up = 0, int D_Left = 0, int D_Right = 0)
{
    int Min = 0;
    int arr[4] = { S_Left, S_Up, D_Left, D_Right };

    Min = arr[0];

    for (int i = 1; i < 4; i++)
    {
        if ((Min > arr[i] && arr[i] != 0) || Min == 0)
        {
            Min = arr[i];
        }
    }

    return Min;
}

void ELP(float** ptr, int rows, int cols, int a, int b)
{
    int Min = 0;

    if (a > b)
    {
        Min = b;
    }
    else
    {
        Min = a;
    }

    if (Min != 0 && a != b)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (ptr[i][j] == a || ptr[i][j] == b)
                {
                    ptr[i][j] = Min;
                }
            }
        }
    }

}

void MostRepeatedLabel(float** ptr, int rows, int cols)
{
    int max = ptr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < ptr[i][j])
            {
                max = ptr[i][j];
            }
        }
    }


    int* arr = new int[max + 1]{};
    for (int i = 0; i < max + 1; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[(int)ptr[i][j]]++;
        }
    }

    int MaxLabel = 1;
    for (int i = 1; i < max + 1; i++)
    {
        if (arr[i] > arr[MaxLabel])
        {
            MaxLabel = i;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (ptr[i][j] != MaxLabel)
            {
                ptr[i][j] = 0;
            }
            else
            {
                int f = ptr[i][j];
                ptr[i][j] = 255;
            }
        }
    }
}

float** Connected_Components_Labeling(float** ptr, int rows, int cols)
{
    int r = rows, c = cols;
    int S_Left = 0, S_Up = 0, D_Left = 0, D_Right = 0;
    int Label = 0, Label2 = 0;
    bool Loop = false;

    float** arrPass1 = new float* [rows];
    for (int i = 0; i < rows; i++)
    {
        arrPass1[i] = new float[cols];
    }

    float** arrPass2 = new float* [rows];
    for (int i = 0; i < rows; i++)
    {
        arrPass2[i] = new float[cols];
    }


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            S_Left = 0; S_Up = 0; D_Left = 0; D_Right = 0;

            if (ptr[i][j] != 0)
            {
                if (i == 0)
                {
                    if (j == 0)
                    {
                        Label++;
                        arrPass1[i][j] = Label;
                    }

                    if (j != 0)
                    {
                        S_Left = arrPass1[i][j - 1];

                        if (S_Left != 0)
                        {
                            arrPass1[i][j] = S_Left;
                        }
                        else
                        {
                            Label++;
                            arrPass1[i][j] = Label;
                        }
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        S_Up = arrPass1[i - 1][j];
                        D_Right = arrPass1[i - 1][j + 1];

                        Label2 = SmallestNeighbour(S_Left, S_Up, D_Left, D_Right);

                        if (Label2 != 0)
                        {
                            arrPass1[i][j] = Label2;
                        }
                        else
                        {
                            Label++;
                            arrPass1[i][j] = Label;
                        }
                    }
                    else if (j == cols - 1)
                    {
                        S_Up = arrPass1[i - 1][j];
                        S_Left = arrPass1[i][j - 1];
                        D_Left = arrPass1[i - 1][j - 1];

                        Label2 = SmallestNeighbour(S_Left, S_Up, D_Left, D_Right);

                        if (Label2 != 0)
                        {
                            arrPass1[i][j] = Label2;
                        }
                        else
                        {
                            Label++;
                            arrPass1[i][j] = Label;
                        }
                    }
                    else
                    {
                        S_Up = arrPass1[i - 1][j];
                        S_Left = arrPass1[i][j - 1];
                        D_Left = arrPass1[i - 1][j - 1];
                        D_Right = arrPass1[i - 1][j + 1];

                        Label2 = SmallestNeighbour(S_Left, S_Up, D_Left, D_Right);

                        if (Label2 != 0)
                        {
                            arrPass1[i][j] = Label2;
                        }
                        else
                        {
                            Label++;
                            arrPass1[i][j] = Label;
                        }

                    }
                }
            }
            else
            {
                arrPass1[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arrPass2[i][j] = arrPass1[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            ELP(arrPass2, rows, cols, arrPass2[i][j], arrPass2[i][j + 1]);
        }
    }

    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ELP(arrPass2, rows, cols, arrPass2[i][j], arrPass2[i + 1][j]);
        }
    }



    MostRepeatedLabel(arrPass2, rows, cols);



    return arrPass2;
}

#endif
