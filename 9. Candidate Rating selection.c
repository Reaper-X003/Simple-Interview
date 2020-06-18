/* Candidate Rating and Selection */
#include<stdio.h>
main ()
{
// Data Type and Variables
    int confidence;
    int english;
    int local;
    int personality;
    int theory;
    int writting;
    int speaking;
    int java;
    int python;
    int php;
    int dot_net;
    int decesion;
// User input
   printf("****************************************\n");
   printf(" **********************************\n");
   printf("  *******************************\n");
   printf(   "Welcome to ReaPerX Production\n");
   printf(     "Designation-Instructor\n");
   printf(     "conntact@reaperxpro.com\n");
   printf("  ******************************\n");
   printf(" **********************************\n");
   printf("**************************************\n \n \n");

    printf("Confidence Level ?(1=good,0=bad):");
    scanf("%d",&confidence);
    printf("English Spoken ?(1=good,0=bad):");
    scanf("%d", &english);
    printf("Local Language ?(1=good,0=bad):");
    scanf("%d", &local);
    printf("Writting Skill ?(1=good,0=bad):");
    scanf("%d", &writting);
    printf("Speaking Skill ?(1=good,0=bad):");
    scanf("%d", &speaking);
    printf(" Does he/she know Java?(1=Yes, 0=NO):");
    scanf("%d", &java);
    printf(" Does he/she know Python?(1=Yes, 0=NO):");
    scanf("%d", &python);
    printf(" Does he/she know PHP?(1=Yes, 0=NO):");
    scanf("%d", &php);
    printf(" Does he/she know .net?(1=Yes, 0=NO):");
    scanf("%d", &dot_net);
    printf("Theory Knowledge (1=Yes, 0=No?");
    scanf("%d", &theory);
    printf("Personality? (1=good, 0=bad):");
    scanf("%d", &personality);
// Decision Rule
    printf("\n \n \n Note: 1=Selected, 0=Not selected");
    decesion= (confidence&&(english||local)&&(writting||speaking)&&(java||python)&&(php||dot_net)&&(theory||personality));
    printf("\n \n This Candidate got %d \n \n \n", decesion);

    




}