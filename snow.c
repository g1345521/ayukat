/*
 �㤬�ߤ�褦�˸����륢�˥᡼�����
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

  win=gopen(400,400);  /* ���襦����ɥ��򳫤� */
  winname(win, "sample 1"); /* ̾����Ĥ��� */
  newpen(win, 1); /* ������˸��� */
  for(i=0;i<5;i++)
    {
      x[i]=(float)(rand() % 400);   /* x ��ɸ���֤ϥ����� */
      y[i]=(float)(rand() % 400)+400.0; /* y ��ɸ���֤ϲ��̾�ü */
    }
      w=4.0;                     /* ���γ���礭������� */
    

  while(1) {
    gclr(win);                 /* ���̤�õ� */
    for(i=0;i<5;i++)
      {
	fillrect(win, x[i], y[i], w, w); /* �ͳѤ����� */
	y[i]-= w / 2.0;               /* ��γ���礭�����Ĳ��˰�ư */
    
	if( y[i] < 0.0 ) 
	  { 
	    
	    x[i]=(float)(rand() % 400); /* x ��ɸ���֤������ */
	    y[i]=(float)(rand() % 400)+400.0;  /* y ��ɸ���֤ϺƤӾ�ü�� */
	  }
      }
    msleep(20);                /* �����Ԥ� */
  }
  
  /* ���Υץ����Ͻ�λ���ʤ��Τ� return 0; �ʤɤ�̵�� */
  
}

