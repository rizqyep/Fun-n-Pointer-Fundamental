#include <stdio.h>

void menu();
void luas_segitiga();
void luas_persegi();
void luas_persegi_panjang();
void konfirmasi_menu();

void menu(){
    int pilih;
    printf("Hitung Bangun Datar\n\n");

    printf("1. Segitiga\n");
    printf("2. Persegi\n");
    printf("3. Persegi Panjang\n");
    printf("0. Keluar\n\n");
    printf("Masukkan pilihan : ");
    scanf("%d", &pilih);

    switch(pilih){
        case 1 :
            luas_segitiga();
            break;
        case 2 :
            luas_persegi();
            break;
        case 3 :
            luas_persegi_panjang();
            break;
        case 0 :
            printf("Terima Kasih!");
            break;
        default :
            menu();
    }
}


void luas_segitiga(){
    int alas, tinggi;

    float luas;
    printf("Alas :");
    scanf("%d", &alas);

    printf("Tinggi : ");
    scanf("%d", &tinggi);

    luas = (float) alas * tinggi / 2;

    printf("Luasnya adalah : %.2f", luas);
    
    konfirmasi_menu();
}

void luas_persegi(){
    int sisi, luas;

    printf("Sisi : ");
    scanf("%d", &sisi);

    luas = sisi * sisi;

    printf("Luas Perseginya : %d", luas);
    
    konfirmasi_menu();
}

void luas_persegi_panjang(){
    int panjang,lebar, luas;

    printf("Panjang : ");
    scanf("%d", &panjang);

    printf("Lebar : ");
    scanf("%d", &lebar);

    luas = panjang * lebar;

    printf("Luas Persegi Panjangnya : %d", luas);
    
    konfirmasi_menu();
}

void konfirmasi_menu(){
    fflush(stdin);
    char kembali;
    printf("\n\nIngin kembali ke menu? Y / n : ");
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

    return 0;
}