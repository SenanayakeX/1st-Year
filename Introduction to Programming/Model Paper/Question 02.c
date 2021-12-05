#include <stdio.h>
int main(void) {

  float usages[4][7] = {1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0, 1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2, 2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6,
2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0
};

  int r,c;
  float max = 0;
  float min = usages[0][0];
  float tot = 0;

  for(r = 0; r < 4; r++){
    for(c = 0; c < 7; c++){      
      printf("%.1f    ",usages[r][c]);

      tot = tot + usages[r][c];
      if(usages[r][c] > max){
        max = usages[r][c];
      }

      if(usages[r][c] < min){
        min = usages[r][c];
      }
    }
    printf("\n");
  }

puts("");
puts("===================================================");
printf("Minimum : %.1f\n",min);
printf("Maximum : %.1f\n",max);
puts("===================================================");
puts("");

  for(r = 0; r < 4; r++){

    for(c = 0; c < 7; c++){
      int date =  (r * 7) + c + 1;
      if(usages[r][c] ==  max){
        printf("%d is a date with maximum usage \n", date);
      }
      if(usages[r][c] ==  min){
        printf("%d is a date with minimum usage \n", date);
      }
    }
  
  }

  printf("Total : %.1f\n",tot);
  printf("Average : %.1f\n",tot/28.0);
}