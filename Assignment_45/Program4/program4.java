////////////////////////////////////////////////////////////////////////////////
// 
// File: program4.java
// Description: Used to accept a matrix from user and check whether it is an identity matrix or not.
// Author: Parimal Kelkar
// Date: 02/08/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{
    ////////////////////////////////////////////////////////////////////////////
    //
    // Method: ChkIdentity()
    // Description: Accepts a matrix and checks whether it is an identity matrix or not.
    // Input: int[][], int, int
    // Output: boolean
    // Author: Parimal Kelkar
    // Date: 02/08/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    boolean ChkIdentity(int Arr[][], int iRow, int iCol)
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
            return false;
        }

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] != 1)
                    {
                        break;
                    }
                }
                else
                {
                    if(Arr[i][j] != 0)
                    {
                        break;
                    }
                }
            }
        }

        return ((i == Arr.length) && (j == Arr.length));

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

class program4
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

        boolean bRet = false;

        bRet = mObj.ChkIdentity(Arr, iValue1, iValue2);

        if(true == bRet)
        {
            System.out.println("It is an identity matrix.");
        }
        else
        {
            System.out.println("It is not an identity matrix.");            
        }
    }
}