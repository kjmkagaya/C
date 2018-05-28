

/* ヘッダファイル------------------------------------------------------ */
#include <stdio.h>

/* プロトタイプ宣言---------------------------------------------------- */
char To_Lower(char ch);

/* エントリポイント　To_Lower関数の動作チェック----------------------- */
int main(void)
{
	char c1 = 'a', c2 = 'B', c3 = 'c';

	printf("変換前：%c%c%c\n", c1, c2, c3);

	c1 = To_Lower(c1);
	c2 = To_Lower(c2);
	c3 = To_Lower(c3);

	printf("変換後：%c%c%c\n", c1, c2, c3);

	return 0;
}

/* -------------------------------------------------------------------- */
/* 関数名：To_Lower							*/
/* 機　能：英大文字 → 英小文字						*/
/* 戻り値：変換された文字（char型）					*/
/* 	 　※引数が英大文字でない場合は，受け取ったそのままの文字	*/
/* 引　数：ch :　半角文字(char型)					*/
/* -------------------------------------------------------------------- */
char To_Lower(char ch)
{
	if ( 'A' <= ch && ch <= 'Z' )
		ch += 0x20;	/* 英大文字 → 英小文字 */

	return ch;
}
