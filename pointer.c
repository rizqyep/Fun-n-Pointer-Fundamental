#include <stdio.h>

int main(){

    int x;

    x = 10;
    
    // tipedata *nama_pointer;
    int *ptr_x;
    
    // Cara membuat reference : nama_pointer = &nama_variabel_yang_dituju
    ptr_x = &x;


    printf("Lokasi x di memori : %x \n", &x);
    printf("Isi dari pointer x : %x\n", ptr_x);



    printf("Nilai dari x : %d\n", x);

    //Dereferencing Pointer
    printf("Nilai dari x , via ptr_x adalah : %d\n", *ptr_x);

    //Change value via dereferencing :
    *ptr_x = 15;

    printf("Nilai dari x : %d", x);

}