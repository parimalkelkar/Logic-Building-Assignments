////////////////////////////////////////////////////////////////////////////////
// 
// File: program4.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: 5
// Output: # 1 * # 2 * # 3 * # 4 * # 5 *
// Author: Parimal Kelkar
// Date: 26/05/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class program4
{
    public static void main(String args[])
    {
        Scanner sObj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number: ");
        iValue = sObj.nextInt();

        Pattern pObj = new Pattern();
        pObj.Display(iValue);
        
    }
}

class Pattern
{
    ////////////////////////////////////////////////////////////////////////////
    //
    // Method: Display()
    // Description: Accepts a number and displays the pattern # 1 * # 2 * # 3 * # 4 * # 5 * if input number is 5.
    // Input: int
    // Output: void
    // Author: Parimal Kelkar
    // Date: 26/05/2025
    //
    ////////////////////////////////////////////////////////////////////////////
    void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        // Updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("#\t" + iCnt + "\t*\t");
        }
    }
}