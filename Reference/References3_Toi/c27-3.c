/*
 ============================================================================
 Name        : c27-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 ----------------------------------------------------- */
void PutBin(short int data);
unsigned short int RightRotate(unsigned short int data, int bit);
/* エントリポイント ----------------------------------------------------- */
int main(void) {
unsigned short int data = 0xABCD;
unsigned short int ans;
// 右回転シフト(4 ビット)
ans = RightRotate(data, 4);
// 結果を出力
printf("データ(符号なし) :");
PutBin(data);
putchar('\n');
printf("右回転シフト(4 ビット):");
PutBin(ans);
putchar('\n');
return 0; }
/* ---------------------------------------------------------------------- */
/* 関数名:PutBin */
/* 機 能:引数で受け取ったデータを 2 進数出力する */
/* 戻り値:なし */
/* 引 数:short int data :処理対象のデータ */
/* ---------------------------------------------------------------------- */
void PutBin(short int data) {
int bit; short int flg;
// short int 型のサイズ分処理を行う
for ( bit = sizeof(short int) * 8 - 1 ; bit >= 0 ; bit-- ) {
flg = data & (0x1 << bit); // 対象ビットを取り出す
printf("%d", flg ? 1 : 0); // 対象ビットを出力
// 見やすくするために,4 ビットごとに空白を出力
if ( bit % 4 == 0 ) {
printf(" "); } } }
/* ---------------------------------------------------------------------- */
/* 関数名:RightRotate */
/* 機 能:引数で受け取ったデータを右回転シフトする */
/* 戻り値:右回転シフト後のデータ(unsigned short int 型) */
/* 引 数:unsigned short int data :処理対象のデータ */
/* int bit :右回転シフトするビット数 */
/* ---------------------------------------------------------------------- */
unsigned short int RightRotate(unsigned short int data, int bit) {
int i;
unsigned short int flg;
for ( i = 0 ; i < bit ; i++ ) {
flg = data & 0x1; data >>= 1; if ( flg ) {
data |= (0x1 << sizeof(unsigned short int) * 8 - 1);
}
}
return data;
}

