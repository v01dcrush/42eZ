#include <stdio.h>
#include <unistd.h>
#include <ft_putchar.c>

int main(){
	int a;//rows
	int b;//columns
	int i=1;
	int j=1;

	printf("%s", "Input A:");
	scanf("%d", &a);
	printf("%s", "Input B:");
        scanf("%d", &b);
	if(a<=0 || b<=0){
		printf("%s", "you cannot do this to me...");
		return 0;
	}
	else{
		while(i<=a){
			while(j<=b){
				if(i==1){
					if(j==1 || j==b){
						ft_putchar('A');
					}
					else{
						ft_putchar('B');
					}	
				}
				else if (i==a){
					if(j==1 || j==b){
                                                ft_putchar('C');
                                        }
                                        else{
                                                ft_putchar('B');
                                                j++;
                                        }
				}
				else{
					if(j==1 || j==b){
						ft_putchar('B');
					}
					else{
						ft_putchar(' ');
					}
				}
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
