#include <stdio.h>

void menu();
void tebak_angka();
void genap_ganjil();

void menu(){

    int pilihan;
    printf("Selamat datang di program !\n");

    printf("1. Tebak Angka \n");
    printf("2. Genap Ganjil\n");

    printf("Masukkan pilihan : ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1 :
            tebak_angka();
            break;
        case 2 :
            genap_ganjil();
            break;
        default :
            printf("Inputan tidak valid");
            menu();
    }
}


void tebak_angka(){
    int jawaban = 9;
    int tebakan;


    do{
        printf("Tebakan kamu : ");
        scanf("%d", &tebakan);

        if(tebakan < jawaban){
            printf("Terlalu rendah\n");
        }
        else if (tebakan > jawaban) {
            printf("Terlalu tinggi!\n");
        }
    } while (tebakan != jawaban);

    printf("Tebakan benar !\n\n");

    fflush(stdin);
    char kembali;

    printf("Ingin kembali ke menu? Y / n : ");
    scanf("%c", &kembali);
    if(kembali == 'y' || kembali == 'Y'){
        menu();
    }
    else{
       printf("Terima kasih!");
    }
}


void genap_ganjil(){
    
    int angka;

    printf("Angka : ");
    scanf("%d", &angka);

    if(angka % 2 == 0){
        printf("Genap !\n");
    }
    else{
        printf("Ganjil!\n");
    }

        fflush(stdin);
    char kembali;

 
    printf("Ingin kembali ke menu? Y / n : ");
    scanf("%c", &kembali);
    if(kembali == 'y' || kembali == 'Y'){
        menu();
    }
    else{
       printf("Terima kasih!");
    }
}



int main(){

    menu();



    /*
    int sisi;

    printf("Sisi persegi : ");
    scanf("%d", &sisi);
    printf("Luas persegi adalah : %d", luas_persegi(sisi));
    */

    return 0;
}


