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
    int N, hold = 0;
    int arr[ 100 ];

    printf( "Input N:\n" ) ;
    scanf( "%d", &N ) ;

    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Element[%d]:\n", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }

    for ( int i = 0 ; i < N ; i++ ) {
        for ( int j = i + 1 ; j < N ; j++ ) {
            if ( arr[ i ] > arr[ j ] ) {
                hold = arr[ j ] ;
                arr[ j ] = arr[ i ] ;
                arr[ i ] = hold ;
            }
        }
    }

    for ( int i = 0 ; i < N ; i++ ) {
        int same = 1;
        while (i < N - 1 && arr[i] == arr[i + 1]) {
            same++ ;
            i++ ;
        }
        if ( same > 1 ) {
            printf( "%d -> %d values.\n", arr[i], same ) ;
        } else {
            printf( "%d -> %d value.\n", arr[i], same ) ;
        }
    }

    return 0;
}