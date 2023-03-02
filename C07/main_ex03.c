int main()
{
	char str[4][5];
	
	str[0] = "yolo\0";
	str[1] = "poil\0";
	str[2] = "glou\0";
	str[3] = "chih\0";
	char *a = ft_strjoin(4, str, "+-+");
}
