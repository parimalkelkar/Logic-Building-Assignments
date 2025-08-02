////////////////////////////////////////////////////////////////////////////////
// 
// File: program2.java
// Description: Used to accept a matrix and one number from user and return the frequency of that number.
// Author: Parimal Kelkar
// Date: 02/08/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{
    ////////////////////////////////////////////////////////////////////////////
    //
    // Method: Frequency()
    // Description: Accepts a matrix and one number and returns the frequency of that number.
    // Input: int[][], int, int, int
    // Output: int
    // Author: Parimal Kelkar
    // Date: 02/08/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    int Frequency(int Arr[][], int iRow, int iCol, int iNo)
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

        int i = 0, j = 0, iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
        }

       return iCount; 
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

class program2
{
    public static void main(String args[])
    {
        Scanner sObj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iNumber = 0;

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

        System.out.println("Enter a number to search: ");
        iNumber = sObj.nextInt();

        Matrix mObj = new Matrix();

        int iRet = 0;
        iRet = mObj.Frequency(Arr, iValue1, iValue2, iNumber);

        mObj.Display(Arr);

        if(iRet == 0)
        {
            System.out.println("The number " + iNumber + " is not there in the matrix.");
        }
        else
        {
            System.out.println("The frequency of the number " + iNumber + " in the matrix is: " + iRet);
        }
        
        
    }
}