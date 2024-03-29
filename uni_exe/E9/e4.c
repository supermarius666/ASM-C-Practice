// Scrivere la soluzione qui

int len(const char *str)
{
	if (*str == 0)
		return 0;
	return 1 + len(str + 1);
}

int count_substrings(const char* s, const char* sub)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (sub[j] != '\0')
		{
			if(s[i + j] != sub[j])
				break;
			j++;
		}
		i++;
		if (j == len(sub))
			count++;
	}
	if (*sub == '\0' && *s == '\0')  //brutto, ma funziona!
		return (1);
	return (count);
}