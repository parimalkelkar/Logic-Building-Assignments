////////////////////////////////////////////////////////////////////////////////
// 
// File: program4.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: iRow = 6, iCol = 6
// Output: * * * * * *
//         * # # # * *
//         * # # * $ *
//         * # * $ $ *
//         * * $ $ $ *
//         * * * * * *
// Author: Parimal Kelkar
// Date: 29/05/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

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

        Pattern pObj = new Pattern();
        pObj.Display(iValue1, iValue2);
        
    }
}

class Pattern
{
    ////////////////////////////////////////////////////////////////////////////
    //
    // Method: Display()
    // Description: Accepts a number and displays a pattern as follows:
    // iRow = 6, iCol = 6
    //  * * * * * *
    //  *       * *
    //  *     *   *
    //  *   *     *
    //  * *       *
    //  * * * * * *
    // Input: int, int
    // Output: void
    // Author: Parimal Kelkar
    // Date: 29/05/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

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
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                if((i == 1) || (i == iRow) || (j == iCol) || (j == 1) || (i == j))
                {
                    System.out.print("*\t");
                }
                else if( i < j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("$\t");
                }
            }

            System.out.println();
        }
    }
}