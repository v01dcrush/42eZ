#include <stdio.h>
#include <unistd.h>
void ft_convert(void){

	int a=0;
	while (a<11){
		char b ="0"+"a";
		write (1, &b, 2);
		a++;
	}
	write (1, '\n', 1);
}

int main(){
	
	ft_convert();
	return 0;
}
