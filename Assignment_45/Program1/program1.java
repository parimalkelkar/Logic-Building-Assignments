////////////////////////////////////////////////////////////////////////////////
// 
// File: program1.java
// Description: Used to accept a matrix from user and display the transpose of that matrix.
// Author: Parimal Kelkar
// Date: 02/08/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{
    ////////////////////////////////////////////////////////////////////////////
    //
    // Method: Transpose()
    // Description: Accepts a matrix and returns the addition of diagonal elements.
    // Input: int[][], int, int
    // Output: void
    // Author: Parimal Kelkar
    // Date: 02/08/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    void Transpose(int Arr[][], int iRow, int iCol)
    {
        // Updators
        if(iRow < 0)
        {
            iRow = -iRow;
        }

        if(iCol < 0)
        {
            iCol = -iCol;
        }

        int i = 0, j = 0;

        int Trr[][] = new int [iCol][iRow];

        for(i=0; i < iRow; i++)
        {
            for(j=0; j<iCol; j++)
            {
                Trr[j][i] = Arr[i][j];
            }
        }

        System.out.println("\nThe transpose matrix is:");
        for(i = 0; i < Trr.length; i++)
        {
            for(j = 0; j < Trr[i].length; j++)
            {
                System.out.print(Trr[i][j] + "\t");
            }

            System.out.println("\n");
        }
    }

    public void Display(int Arr[][])
    {
        int i = 0, j = 0;

        System.out.println("\nThe matrix is:");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }

            System.out.println("\n");
        }
    }
}

class program1
{
    public static void main(String args[])
    {
        Scanner sObj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows: ");
        iValue1 = sObj.nextInt();

        System.out.println("Enter number of columns: ");
        iValue2 = sObj.nextInt();

        int Arr[][] = new int[iValue1][iValue2];

        System.out.println("Enter " + iValue1 + " X " + iValue2 + " elements:");

        int no = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j< Arr[i].length; j++)
            {
                System.out.print("Enter element [" + i + "][" + j + "]: ");
                Arr[i][j] = sObj.nextInt();
            }
        }

        Matrix mObj = new Matrix();

        mObj.Display(Arr);

        mObj.Transpose(Arr, iValue1, iValue2);
    }
}