////////////////////////////////////////////////////////////////////////////////
// 
// File: program2.java
// Description: Used to accept a nuber from user and display below pattern.
// Input: 5
// Output: 5 # 4  # 3  # 2 # 1 #
// Author: Parimal Kelkar
// Date: 25/05/2025
// 
////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class program2
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
    // Description: Accepts a number and displays the mentioned pattern.
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

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt + "\t#\t");
        }
    }
}