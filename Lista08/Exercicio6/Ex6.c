    #include <stdio.h>
	
	int main() {
		FILE *file = fopen("matriz.txt", "w");
		
		rand(time(NULL));
  		int i, j;
  		int matriz[10][10];

 		 for (i = 0; i < 10; i++) {
   			 for (j = 0; j < 10; j++) {
      			matriz[i][j] = rand() % (99 - 11) + 10;
      			fprintf(file, "%d ", matriz[i][j]);
    		}
    		    fprintf(file, "\n");
 		 }
  			return 0;
			fclose(file);	
	}

