/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:36:48 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 13:32:04 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isalpha(void)
{
	int		i;
	int		j;
	int		b;
	char	k;

	b = 97;
	k = 'a';
	i = ft_isalpha(b);
	j = isalpha(b);
	printf("\n");
	printf("<<<<<<<<<<<<<<<<<START TEST>>>>>>>>>>>>>>>>>\n\n");
	printf("\n");
	printf("===========TESTING FT_ISALPHA==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_isdigit(void)
{
	int		i;
	int		j;
	int		k;
	char	c;
	char	d;

	k = 48;
	c = 'a';
	d = '0';
	i = ft_isdigit(k);
	j = isdigit(k);
	printf("\n");
	printf("===========TESTING FT_ISDIGIT==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_isalnum(void)
{
	int		i;
	int		j;
	int		k;
	char	c;
	char	d;

	k = 48;
	c = 'a';
	d = '0';
	i = ft_isalnum(k);
	j = isalnum(k);
	printf("\n");
	printf("===========TESTING FT_ISALNUM==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_isascii(void)
{
	int		i;
	int		j;
	int		k;
	char	c;
	char	d;

	k = 48;
	c = 'a';
	d = '0';
	i = ft_isascii(k);
	j = isascii(k);
	printf("\n");
	printf("===========TESTING FT_ISASCII==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_isprint(void)
{
	int		i;
	int		j;
	int		k;
	char	c;
	char	d;

	k = 48;
	c = 'a';
	d = '0';
	i = ft_isprint(k);
	j = isprint(k);
	printf("\n");
	printf("===========TESTING FT_ISPRINT==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_strlen(void)
{
	int	i;
	int	j;

	printf("\n");
	printf("===========TESTING FT_STRLEN==========\n");
	i = ft_strlen("Hello");
	j = strlen("Hello");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_memset(void)
{
	char	ptr[50];
	char	str[50];

	ft_memset(ptr, 'H', 20);
	memset(str, 'H', 20);
	printf("\n");
	printf("===========TESTING FT_MEMSET==========\n");
	printf("My function: %s[%zu]\n", ptr, ft_strlen(ptr));
	printf("Original function: %s[%zu]\n", str, ft_strlen(str));
}

void	test_ft_bzero(void)
{
	char str[10] = "Hello";
	char ptr[10] = "Hello";

	ft_bzero(str, ft_strlen(str));
	bzero(ptr, ft_strlen(ptr));
	printf("\n");
	printf("===========TESTING FT_BZERO==========\n");
	printf("My function: %s[%zu]\n", str, ft_strlen(str));
	printf("Original function: %s[%zu]\n", ptr, ft_strlen(ptr));
}

void	test_ft_memcpy(void)
{
	char src[25] = "12345678910111213";
	char testsrc[25] = "12345678910111213";

	ft_memcpy(src + 3, src, strlen(src) + 1);
	memcpy(testsrc + 3, testsrc, strlen(testsrc) + 1);
	printf("\n");
	printf("===========TESTING FT_MEMCPY==========\n");
	printf("My function: %s\n", src);
	printf("Original function: %s\n", testsrc);
}

void	test_ft_memmove(void)
{
	char src[25] = "12345678910111213";
	char testsrc[25] = "12345678910111213";

	ft_memmove(src + 3, src, strlen(src) + 1);
	memmove(testsrc + 3, testsrc, strlen(testsrc) + 1);
	printf("\n");
	printf("===========TESTING FT_MEMMOVE==========\n");
	printf("My function: %s\n", src);
	printf("Original function: %s\n", testsrc);
}

void	test_ft_strlcpy(void)
{
	const char *src = "Hello";
	const char *srctest = "Hello";
	char *dest = malloc(strlen(src) + 1);
	char *desttest = malloc(strlen(srctest) + 1);
	size_t size;
	size_t sizetest;
	int	result;
	int	resulttest;

	if (dest == NULL)
		free(dest);
	if (desttest == NULL)
		free(desttest);
	size = 3;
	sizetest = 3;
	result = ft_strlcpy(dest, src, size);
	resulttest = strlcpy(desttest, srctest, sizetest);
	printf("\n");
	printf("===========TESTING FT_STRLCPY==========\n");
	printf("My function: %d\n", result);
	printf("Original function: %d\n", resulttest);
	free(dest);
	free(desttest);
}

void	test_ft_strlcat(void)
{
	const char *src = "World";
	const char *srctest = "World";
	char dest[30] = "Hello, ";
	char desttest[30] = "Hello, ";
	size_t size;
	size_t sizetest;
	int	result;
	int	resulttest;

	size = 7;
	sizetest = 7;
	result = ft_strlcat(dest, src, size);
	resulttest = strlcat(desttest, srctest, sizetest);
	printf("\n");
	printf("===========TESTING FT_STRLCAT==========\n");
	printf("My function:\n");
	printf("Initial dest: %s\n", dest);
	printf("Initial src: %s\n", src);
	printf("Result: %d (Length)\n", result);
	printf("\n");
	printf("Original function:\n");
	printf("Initial dest: %s\n", desttest);
	printf("Initial src: %s\n", srctest);
	printf("Result: %d (Length)\n", resulttest);
}

void	test_ft_toupper(void)
{
	int	c;
	int	d;

	printf("\n");
	printf("===========TESTING FT_TOUPPER==========\n");
	printf("My function: %c\n", c = ft_toupper('a'));
	printf("Original function: %c\n", d = toupper('a'));
}

void	test_ft_tolower(void)
{
	int	c;
	int	d;

	printf("\n");
	printf("===========TESTING FT_TOLOWER==========\n");
	printf("My function: %c\n", c = ft_tolower('A'));
	printf("Original function: %c\n", d = tolower('A'));
}

void	test_ft_strchr(void)
{
	const char *str = "Helle";
	const char *teststr = "Helle";
	
	str = ft_strchr(str, 't' + 256);
	teststr = strchr(teststr, 't' + 256);
	printf("\n");
	printf("===========TESTING FT_STRCHR==========\n");
	printf("My function: %s\n", str);
	printf("Original function: %s\n", teststr);
}

void	test_ft_strrchr(void)
{
	const char *str = "Helle";
	const char *teststr = "Helle";
	str = ft_strrchr(str, 'e');
	teststr = strrchr(teststr, 'e');
	printf("\n");
	printf("===========TESTING FT_STRRCHR==========\n");
	printf("My function: %s\n", str);
	printf("Original function: %s\n", teststr);
}

void	test_ft_strncmp(void)
{
	int	i;
	int	j;
	printf("\n");
	printf("===========TESTING FT_STRNCMP==========\n");
	i = ft_strncmp("test\200", "test\0", 5);
	j = strncmp("test\200", "test\0", 5);
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_memchr(void)
{
	char	*ptr;
	char	*ptrtest;
	ptr = ft_memchr("Hello", 'e', 5);
	ptrtest = memchr("Hello", 'e', 5);
	printf("\n");
	printf("===========TESTING FT_MEMCHR==========\n");
	printf("My function: %s\n", ptr);
	printf("Original function: %s\n", ptrtest);
}

void	test_ft_memcmp(void)
{
	int	i;
	int	j;

	i = ft_memcmp("Hpllo", "Hello", 2);
	j = memcmp("Hpllo", "Hello", 2);
	printf("\n");
	printf("===========TESTING FT_MEMCMP==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_strnstr(void)
{
	const char	*big = "aaabcabcd";
	const char	*little = "abcd";
	const char	*testbig = "aaabcabcd";
	const char	*testlittle = "abcd";
	char	*result;
	char	*testresult;
	result = ft_strnstr(big, little, 9);
	testresult = strnstr(testbig, testlittle, 9);
	printf("\n");
	printf("===========TESTING FT_STRNSTR==========\n");
	printf("My function: %s\n", result);
	printf("Original function: %s\n", testresult);
}

void	test_ft_atoi(void)
{
	int	i;
	int	j;

	i = ft_atoi("-2147483649");
	j = atoi("-2147483649");
	printf("\n");
	printf("===========TESTING FT_ATOI==========\n");
	printf("My function: %d\n", i);
	printf("Original function: %d\n", j);
}

void	test_ft_calloc(void)
{
		unsigned char	*arr;
	unsigned char	*arrtest;
	size_t			i;
	size_t			nmemb;
	size_t			size;

	i = 0;
	nmemb = 20;
	size = 20;
	printf("\n");
	printf("===========TESTING FT_CALLOC==========\n");
	arr = ((unsigned char *)ft_calloc(nmemb, size));
	arrtest = ((unsigned char *)calloc(nmemb, size));
	if (arr == NULL)
		printf("My function: Memory allocation error\n");
	if (arrtest == NULL)
		printf("Original function: Memory allocation error\n");
	if (arr != NULL && nmemb == 0 && size == 0)
	{
		printf("My function: Size and nmemb are both 0, a unique pointer is returned\n");
		free(arr);
	}
	if (arrtest != NULL && nmemb == 0 && size == 0)
	{
		printf("Original function: Size and nmemb are both 0, a unique pointer is returned\n");
		free(arrtest);
	}
	printf("My function:\n");
	while (i < (nmemb * size))
	{
		printf("%hhu", arr[i]);
		i++;
	}
	printf("\n");
	printf("AMOUNT OF ZEROS [%zu]\n\n", i);
	i = 0;
	printf("Original function:\n");
	while (i < (nmemb * size))
	{
		printf("%hhu", arrtest[i]);
		i++;
	}
	printf("\n");
	printf("AMOUNT OF ZEROS [%zu]\n", i);
	free(arr);
	free(arrtest);
}

void	test_ft_strdup(void)
{
	char 		*dup;
	char		*testdup;
	char		*errorcheck;

	dup = ft_strdup("Hello");
	testdup = strdup("Hello");
	errorcheck = strerror(errno);
	printf("\n");
	printf("===========TESTING FT_STRDUP==========\n");
	printf("Error status from my function: %s\n", errorcheck);
	printf("My function: %s\n", dup);
	printf("Original function: %s\n", testdup);
	free(dup);
	free(testdup);
}

void	test_ft_substr(void)
{
	char const	*s = "0123456789";
	char		*sub;

	sub = ft_substr(s, 9, 10);
	printf("\n");
	printf("===========TESTING FT_STRDUP==========\n");
	printf("Original string: %s\n", s);
	printf("My substring: %s\n", sub);
	free(sub);
}

void	test_ft_strjoin(void)
{
	char const	*s1 = "Hello, ";
	char const	*s2 = "world!";
	char		*result;

	result = ft_strjoin(s1, s2);
	printf("\n");
	printf("===========TESTING FT_STRJOIN==========\n");
	printf("Original string 1: %s\n", s1);
	printf("Original string 2: %s\n", s2);
	printf("Result: %s\n", result);
	free(result);
}

void	test_ft_strtrim(void)
{
	char const	*s1 = "aaaabbaaabbaaa";
	char const	*set = "aa";
	char		*result;

	result = ft_strtrim(s1, set);
	printf("\n");
	printf("===========TESTING FT_STRTRIM==========\n");
	printf("String before trimming: %s\n", s1);
	printf("What should be trimmed: %s\n", set);
	printf("String after trimming: %s\n", result);
	free(result);
}

void	test_ft_split(void)
{
	char const	*s;
	char		c;
	char		**array;
	int			i;
	int			arraysize;

	s = "lorem,ipsum,,,,dolor,sit,amet, consectetur,adipiscing,,elit.,";
	c = ',';
	array = ft_split(s, c);
	arraysize = 0;
	while (array[arraysize] != NULL)
		arraysize++;
	i = 0;
	printf("\n");
	printf("===========TESTING FT_SPLIT==========\n");
	printf("Original string: %s\n", s);
	printf("Delimiter: [%c]\n", c);
	printf("Result: ");
	if (arraysize > 0)
	{
		while (i < arraysize)
		{
			printf("[%s]", array[i]);
			free(array[i]);
			i++;
		}
		printf("\n");
	}
	free(array);
}

void	test_ft_itoa(void)
{
	char	*nptr;

	nptr = ft_itoa(-2147483648);
	printf("\n");
	printf("===========TESTING FT_ITOA==========\n");
	printf("Result: %s\n", nptr);
	free(nptr);
}

static char	f(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z') 
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	else
		c = '0';
	return (c);
}

void	test_ft_strmapi(void)
{
	char		*result;
	const char	*str = "Hello";

	result = ft_strmapi(str, &f);
	printf("\n");
	printf("===========TESTING FT_STRMAPI==========\n");
	printf("Result: %s\n", result);
	free(result);
}

static void	f2(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z') 
		s[i] -= 32;
	else if (s[i] >= 'A' && s[i] <= 'Z')
		s[i] += 32;
	else
		s[i] = '0';
}

void	test_ft_striteri(void)
{
	char	s[6] = "Hello";

	ft_striteri(s, &f2);
	printf("\n");
	printf("===========TESTING FT_STRITERI==========\n");
	printf("Result: %s\n", s);
}

void	test_ft_putchar_fd(void)
{
	int	fd;

	fd = open("test_putchr.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);
	printf("\n");
	printf("===========TESTING FT_PUTCHAR_FD==========\n");
	printf("A file with name test_putchr.txt has been created\n");
	ft_putchar_fd('e', fd);
	close(fd);
}

void	test_ft_putstr_fd(void)
{
	char	*s = "Hello";
	int		fd;

	printf("\n");
	printf("===========TESTING FT_PUTSTR_FD==========\n");
	printf("A file with name test_putstr.txt has been created\n");
	fd = open("test_putstr.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);
	ft_putstr_fd(s, fd);
	close(fd);
}

void	test_ft_putendl_fd(void)
{
	char	*s = "Hello, world!";
	int		fd;

	fd = open("test_putendl.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);
	printf("\n");
	printf("===========TESTING FT_PUTENDL_FD==========\n");
	printf("A file with name test_putendl.txt has been created\n");
	ft_putendl_fd(s, fd);
	close(fd);
}

void	test_ft_putnbr_fd(void)
{
	int	n;
	int	fd;

	n = 214748364;
	fd = open("test_putnbr.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);
	printf("\n");
	printf("===========TESTING FT_PUTNBR_FD==========\n");
	printf("A file with name test_putnbr.txt has been created\n");
	printf("\n\n");
	printf("<<<<<<<<<<<<<<<<<END TEST>>>>>>>>>>>>>>>>>\n\n");
	ft_putnbr_fd(n, fd);
	close(fd);
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
 	test_ft_strjoin();
 	test_ft_strtrim();
 	test_ft_split();
 	test_ft_itoa();
 	test_ft_strmapi();
 	test_ft_striteri();
 	test_ft_putchar_fd();
 	test_ft_putstr_fd();
 	test_ft_putendl_fd();
 	test_ft_putnbr_fd();
}

