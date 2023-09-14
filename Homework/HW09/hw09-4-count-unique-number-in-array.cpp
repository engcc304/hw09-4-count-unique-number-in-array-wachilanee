/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/
#include <stdio.h>
int main() {
    
    int N, i, j ;

    printf( "Input N :" );
    scanf( "%d", &N );

    int num[ N ] ;
    int unique[ N ] ;
    int count[ N ] ;
    int un_c = 0 ;
    int b_num = 1 ;

    for ( i = 0 ; i < N ; i++){
        printf( "Element[%d] :\n", i ) ;
        scanf( "%d", &num[ i ] );
    }

    for ( i = 0 ; i < N ; i++) {
        count[ i ] = 0 ;
    }

    for ( i = 0 ; i < N ; i++) {
        int bool_num = 1 ;
        for ( j = 0 ; j < un_c ; j++) {
            if ( num[ i ] == unique[ j ] ) {
                count[ j ]++ ;
                bool_num = 0 ;
                break;
            }
            
        }
        if ( bool_num ) {
            unique[ un_c ] = num[ i ] ;
            count[ un_c ] = 1 ;
            un_c++ ;
        }
    }

    for ( i = 0 ; i < un_c ; i++) {
        printf( "%d -> %d value%s.\n", unique[ i ], count[ i ], (count[ i ] == 1) ? "" : "s" );
    }
    
    
    
    return 0;
}
