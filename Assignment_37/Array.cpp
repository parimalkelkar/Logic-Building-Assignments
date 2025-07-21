////////////////////////////////////////////////////////////////////////////////
//
//  File name: Array.cpp
//  Description: Used to perform operations on Array elements.
//  Author: Parimal Kelkar
//  Date: 20/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int value = 10)
        {
            cout << "Inside constructor\n";

            this->size = value;
            this->Arr = new int[size];
        }

        Array(Array &ref)
        {
            cout << "Inside copy constructor\n";

            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i=0; i < size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            } 
        }

        ~Array()
        {
            cout << "Inside Destructor.\n";
            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array :: Accept()
{
    cout << "Please enter the values\n";

    for(int i = 0; i < this -> size; i++)
    {
        cin >> Arr[i];
    }
}

void Array :: Display()
{
    cout << "Elements are: \n";
    for(int i = 0; i < this-> size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: Frequency(int value)
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}


int ArrSearch :: SearchLast(int value)
{
    int i = 0;

    for(i = (size - 1); i >= 0; i--)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == -1)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch :: EvenCount()
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int ArrSearch :: OddCount()
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int ArrSearch :: SumAll()
{
    int iSum = 0;

    for(int i = 0; i < size; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
}

int main()
{
    cout << "Inside main\n";

    ArrSearch sObj1(5);

    sObj1.Accept();
    sObj1.Display();

    int iRet = sObj1.Frequency(11);

    cout << "frequency is " << iRet << "\n";

    iRet = sObj1.SearchFirst(11);

    cout << "First occurrance is: " << iRet << "\n";

    iRet = sObj1.SearchLast(11);

    cout << "Last occurrance is: " << iRet << "\n";

    iRet = sObj1.EvenCount();

    cout << "The count of even numbers in the array is: " << iRet << "\n";

    iRet = sObj1.OddCount();

    cout << "The count of odd numbers in the array is: " << iRet << "\n";

    iRet = sObj1.SumAll();

    cout << "Summation of numbers in the array is: " << iRet << "\n";

    return 0;
}