#include <stdio.h>
#include <unistd.h>
void ft_print_comb(void){
	char a='0';
	char b='1';
	char c='2';

	while (a<='7'){
		b=a+1;
		while (b<='8'){
			c=b+1;
			while(c<='9'){
				if(a!=b && b!=c && a!=c){
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					if (!(a=='7' && b=='8' && c=='9')){
						write (1, ", ", 2);
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	write (1, "\n", 1);
}

int main(){
	ft_print_comb();
	return 0;
}
