#include <stdio.h>
int main()
{
	char *str[6];
	
	str[0] = "./ex03/output";
	str[1] = "said";
	str[2] = "this";
	str[3] = "is";
	str[4] = "a";
	str[5] = "success";
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(6, str, "___"));
}
