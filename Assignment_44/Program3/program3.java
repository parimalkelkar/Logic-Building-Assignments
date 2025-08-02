////////////////////////////////////////////////////////////////////////////////
// 
// File: program3.java
// Description: Used to accept a matrix from user and return the largest number from both of the diagonal elements.
// Author: Parimal Kelkar
// Date: 02/08/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{
    ////////////////////////////////////////////////////////////////////////////
    //
    // Method: MaxDiagonal()
    // Description: Accepts a matrix and returns the largest number from both of the diagonal elements.
    // Input: int[][], int, int
    // Output: int
    // Author: Parimal Kelkar
    // Date: 02/08/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    int MaxDiagonal(int Arr[][], int iRow, int iCol)
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

        // Filter
        if(iRow != iCol)
        {
            System.out.println("Invalid input.");
            return -1;
        }

        int i = 0, j = 0;

        int Brr[] = new int[iRow];
        int Crr[] = new int[iRow];        

        for(i = 0; i < Arr.length; i++)
        {
            Brr[i] = Arr[i][i];
        }

        for(i = 0, j = (Arr.length - 1); i < Arr.length; i++, j--)
        {
            Crr[i] = Arr[i][j];
        }

        int iMax1 = Brr[0];
        int iMax2 = Crr[0];

        for(i = 1; i < Brr.length; i++)
        {
            if(iMax1 < Brr[i])
            {
                iMax1 = Brr[i];
            }

            if(iMax2 < Crr[i])
            {
                iMax2 = Crr[i];
            }
        }

        if(iMax1 > iMax2)
        {
            return iMax1;
        }
        else
        {
            return iMax2;
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

class program3
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

        int iRet = 0;
        iRet = mObj.MaxDiagonal(Arr, iValue1, iValue2);

        System.out.println("Largest of both diagonal elements is: " + iRet);
        
    }
}