/*
    Step1 :     Understand the problem statement
    Step2 :     Write the algorithm
    Step3 :     Decide the programming Language
    Step4 :     Write the program
    Step5 :     Test the program
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

 int main()
 {
    int iValue1 = 10, iValue2 = 11, iResult = 0;

    iResult = iValue1 + iValue2;      // Business Logic
    
    printf("%d\n",iResult);

    return 0;
 }