#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <strings.h>
#include <time.h>

#define  SIZE  200


struct account
{

    int account_no;
    char account_name[20];
    int account_balance;
};

int main()
{
    setlocale(LC_ALL, "Turkish");
    printf("                                                            ***Ho�geldiniz!\n\n");
    menu();


    return 0;
}

void slp()
{
    //---------------------------------------------------
    sleep(1);
}

void menu()
{
    setlocale(LC_ALL, "Turkish");
    int choice;
    system("COLOR 0D");
    printf("                                            BANKA Y�NET�M S�STEM�\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                              ########## Ana Men�ye Ho�geldiniz ##########\n");
    printf("\n");
    printf("\n");
    slp();
    printf("                         [1] Yeni Hesap A�\n");
    slp();
    printf("                         [2] Hesap Bilgilerini G�ncelle\n");
    slp();
    printf("                         [3] ��lemler\n");
    slp();
    printf("                         [4] Yeni Hesap A�\n");
    slp();
    printf("                         [5] Hesap �ptal Et\n");
    slp();
    printf("                         [6] M��teri Listelerini G�r�nt�le\n");
    slp();
    printf("                         [7] ATM Bilgileri\n");
    slp();
    printf("                         [8] ��k��\n");
    slp();
    printf("\n");
    printf("\n");
    printf("\n");

    //BURADADADADASDADADASDDASASDADASD
    printf("Se�iminizi giriniz:");
    scanf("%d",choice);

    if (choice == 1)
        {
            printf("cout");
            create_account();
        }

}

void create_account()
{
    FILE *file;

    file = fopen("kullanici.txt","w");
    if (file == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        exit(1);
    }
    struct account input1 = {123, "ibo", 500};
    struct account input2 = {123, "res", 400};

    fwrite(&input1, sizeof(struct account), 1,file);
    fwrite(&input2, sizeof(struct account), 2,file);

    if(fwrite != 0 )
        {
          printf("scsf");
        }
    else
        {
          printf("error");
        }
    fclose(file);
    printf("zumm");

}

void delay(int number_of_sec)
{
    char load[SIZE] = "                                      Y�KLEN�YOR...\n";
    int mil_sec = 1000 * number_of_sec;

    clock_t start_clock = clock();

    printf("%s", load);

    while (clock() < start_clock + mil_sec);
    system("cls");

}
