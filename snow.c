/*
 雪が降るように見えるアニメーション
*/

#include <stdio.h>
#include <stdlib.h>
#include <eggx.h>

int main() {
  int win, seed,i;
  float x[5], y[5], w;

  printf("random seed = ");
  scanf("%d",&seed);
  srand(seed); 

  win=gopen(400,400);  /* 描画ウィンドウを開く */
  winname(win, "sample 1"); /* 名前をつける */
  newpen(win, 1); /* 色は白に固定 */
  for(i=0;i<5;i++)
    {
      x[i]=(float)(rand() % 400);   /* x 座標位置はランダム */
      y[i]=(float)(rand() % 400)+400.0; /* y 座標位置は画面上端 */
    }
      w=4.0;                     /* 雪の粒の大きさを決める */
    

  while(1) {
    gclr(win);                 /* 画面を消去 */
    for(i=0;i<5;i++)
      {
	fillrect(win, x[i], y[i], w, w); /* 四角を描く */
	y[i]-= w / 2.0;               /* 雪粒の大きさずつ下に移動 */
    
	if( y[i] < 0.0 ) 
	  { 
	    
	    x[i]=(float)(rand() % 400); /* x 座標位置を再設定 */
	    y[i]=(float)(rand() % 400)+400.0;  /* y 座標位置は再び上端へ */
	  }
      }
    msleep(20);                /* 少し待つ */
  }
}

””雪の粒の大きさはどう変えたらいいと思う？""
