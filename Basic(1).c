#include <stdio.h>
#include <stdlib.h>

/*******************Hamza Dectionery************************
 ***-----------------------------------------------------***
 *********      The Function ==> Printf();      ************
 ***********************************************************
 *********      printf means print format       ************
 ********* it's Job is to put data out (output) ************
 ***********************************************************
 ***------------------- Meaning ---------------------------*
 ** %i means Integer | %d means Decimal | %f means Float   *
 ** %c means Character | %s means String |                 *
 ***------------------- ----- -----------------------------*/
int main()
{
    printf("++Printf Methodes : \n\n");
    /** it's all right if we write it like this **/
    printf("Hello"),printf(", "), printf("World"), printf("!");
    printf("\n");    /** Means ==> New Line  **/

    /** or like this  **/
    printf("Hello, World");
    printf("\n");

    /** or like this **/
    printf("H");
    printf("e");
    printf("l");
    printf("l");
    printf("o");
    printf(",");
    printf(" ");
    printf("W");
    printf("o");
    printf("r");
    printf("l");
    printf("d");
    printf("!");
    /** or like this **/
    printf("\n");
    printf("Hello, "); printf("World!");
    /** or like this **/
    printf("\n");
    printf("Hello, ");
    printf("World");
    printf("!");
    /** or like This **/
    printf("\n");
    printf("Hello, \
           World!");
    /****NOT to DO****
    printf("Hello,
           World!);
    ******************/
    /** Numbers **/
    printf("\n\n++Numbers :\n\n");
    printf("This is Integer EX : %i , %i , %i\n", 7, 99, 3 + 7);
    printf("This is Decimal EX : %d , %d , %d \n", 8, 102, 12 + 3);
    printf("This is Float EX : %f , %.4f , %.3f \n",1.23 ,3.4032, 15.2 + 0.233);
    printf("This is Character EX : %c , %c ,%c , %c\n",'B', 'K', '*', '@');
    printf("This is String EX : %s, %s , %s \n","Hamza@hotmail.com"," ", "Romoz : ~!@#$%^&*( )_+-*)");
    return 0;
}
