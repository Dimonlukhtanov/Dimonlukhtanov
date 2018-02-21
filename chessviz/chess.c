#include <stdio.h>
int main() {
  int i, j;
    printf (" A  B  C  D  E  F  G  H \n");
    printf (" _  _  _  _  _  _  _  _ \n");
    for (i=0; i<=7; i++){ //* izmenenie stolbcov
    for (j=0; j<=7; j++) { //* izmenenie strok
      if(i%2==1) 
        if (j%2==1) printf("|_|");
        else printf("|_|");
      else 
        if (j%2==1) printf("|_|");
        else printf("|_|");
	;
    }printf ("%d",i+1);
  printf("\n");
  }
}
