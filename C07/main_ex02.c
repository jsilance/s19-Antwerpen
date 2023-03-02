int main()
{
	int *ptr = 0;
	int a = ft_ultimate_range(&ptr, -10, 8);
	a -= 2;
	a += 2;
	
	free(ptr);
	return (0);
}
