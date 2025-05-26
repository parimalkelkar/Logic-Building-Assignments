////////////////////////////////////////////////////////////////////////////////
// 
// File: program5.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: 8
// Output: 2 4 6 8 10 12 14 16
// Author: Parimal Kelkar
// Date: 26/05/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class program5
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
    // Description: Accepts a number and displays the pattern 2 4 6 8 10 12 14 16 if input number is 8.
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
            System.out.print((iCnt * 2) + "\t");
        }
    }
}