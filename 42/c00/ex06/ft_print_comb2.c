#include <stdio.h>
#include <unistd.h>
void ft_print_comb2(void){
	int a=0;
	int b=0;

	while (a<=10){
		b=a+1;
		while (b<=11){
			write(1, &a, 1);
			write(1, &b, 1);
			write (1, ", ", 2);
			b++;
		}
		a++;
	}
	write (1, "\n", 1);
}

int main(){
	ft_print_comb2();
	return 0;
}
