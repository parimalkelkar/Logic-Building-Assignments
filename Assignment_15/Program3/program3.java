////////////////////////////////////////////////////////////////////////////////
// 
// File: program3.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: iRow = 5, iCol = 5
// Output: $ * * * *
//         * $ * * *
//         * * $ * *
//         * * * $ *
//         * * * * $
// Author: Parimal Kelkar
// Date: 27/05/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

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
    // iRow = 5, iCol = 5
    //  $ * * * *
    //  * $ * * *
    //  * * $ * *
    //  * * * $ *
    //  * * * * $
    // Input: int, int
    // Output: void
    // Author: Parimal Kelkar
    // Date: 27/05/2025
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
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }

            System.out.println();
        }
    }
}