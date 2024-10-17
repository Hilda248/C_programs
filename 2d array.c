#include <stdio.h>
int main () {
	int score [2][2][3]={{{20,30,60},{20,80,90}},{{20,60,50},{50,80,70}}};
	int k,j,l;
	for(k=0;k<2;k++){
		for(j=0;j<2;j++){
			for(l=0;l<3;l++){
			
			printf("score[%d][%d][%d]=%d\n",k,j,l,score[k][j][l]);
   	}
	   }
	}
      	return 0;
}