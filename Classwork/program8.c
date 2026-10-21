/*
    Step1 : Understand the problem statement
    Step2 : Write the algorithm
    Step3 : Decide the programming Language
    Step4 : Write the program
    Step5 : Test the program
 /*     

 ////////////////////////////////////////////////////////////
 //      
 // Step1 : Understand the problem statement
 //         User is going to enter any 2 integers
 //         And we have to perform addition
 //
 ///////////////////////////////////////////////////////////

 ///////////////////////////////////////////////////////////
 // Step2 : Write the algorithm
 /*
    START
        Accept first number as No1
        Accept first number as No2
        Create the variable as Ans to store the result 
        Perfrom the addition and store into Ans
        Display the result from Ans
    END
*/
 //////////////////////////////////////////////////////////

 //////////////////////////////////////////////////////////
 //
 // Step3 : Decide the programming Language
 //         We select C programming
 //////////////////////////////////////////////////////////

 //////////////////////////////////////////////////////////
 //
 // Step4 : Write the program
 //
 //////////////////////////////////////////////////////////

 #include<stdio.h>
 
 //////////////////////////////////////////////////////////
 //
 //   Fuction Name : Addition
 //   Input        : Integer, Integer
 //   Output       : Integer
 //   Description  : Performs addition
 //   Date         : 04/10/2026
 //   Author       : Abhishek Rameshwar Khose3
 //
 //////////////////////////////////////////////////////////
 
 
 int Addition(int iNo1, int iNo2)
 {
    int iAns = 0;

    iAns = iNo1 + iNo2;                // Business Logic

    return iAns;
 }

 //////////////////////////////////////////////////////////
 //
 //   Entery point the application
 //
 //////////////////////////////////////////////////////////
 
 int main()
 {
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);
    
    printf("Addition is : %d\n",iResult);

    return 0;
 }

 ///////////////////////////////////////////////////////////
 //   Step5 : Test the program
 //
 //   Tested test cases
 //---------------------------------------------------------   
 //   Input       Input    output
 //---------------------------------------------------------
 //    10           11        21
 //    11           0         11
 //    0            11        11
 //    20          -9         11  
 //   -9           20         11
 //   -20         -11        -31
 //---------------------------------------------------------
 ///////////////////////////////////////////////////////////