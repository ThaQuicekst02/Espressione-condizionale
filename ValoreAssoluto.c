 #include <stdio.h>
 int main(){
    int n, abs;
        printf("Inserisci un numero intero\n");
        scanf("%d", &n);
        abs = (n>=0? n:-n); //il modulo di n è: n se n>=0 oppure -n se n<0
        printf("%d\n", abs);
 }