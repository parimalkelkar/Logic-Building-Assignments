////////////////////////////////////////////////////////////////////////////////
// 
// File: program3.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: iRow = 3, iCol = 5
// Output: 5 4 3 2 1
//         5 4 3 2 1
//         5 4 3 2 1
//         5 4 3 2 1
// Author: Parimal Kelkar
// Date: 26/05/2025
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
    // iRow = 3, iCol = 5
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // Input: int, int
    // Output: void
    // Author: Parimal Kelkar
    // Date: 26/05/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;

        // Updators
        if(iRow < 0)
        {
            iRow = -iRow;
        }

        if(iCol < 0)
        {
            iCol = -iCol;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, iCnt = iCol; j <= iCol; j++, iCnt--)
            {
                System.out.print(iCnt + "\t");
            }

            System.out.println();
        }
    }
}