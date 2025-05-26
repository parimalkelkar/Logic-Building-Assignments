////////////////////////////////////////////////////////////////////////////////
// 
// File: program1.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: 5
// Output: A B C D E
// Author: Parimal Kelkar
// Date: 25/05/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class program1
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
    // Description: Accepts a number and displays a pattern A B C D E... upto that number.
    // Input: int
    // Output: void
    // Author: Parimal Kelkar
    // Date: 25/05/2025
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

        for(iCnt = 1, ch ='A'; iCnt <= iNo; iCnt++, ch++)
        {
            System.out.print(ch + "\t");
        }
    }
}