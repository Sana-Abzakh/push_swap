#include <stdio.h>


double  disorder(size_t  *a)
{
    size_t  mis;
    size_t  pairs;
    size_t  size_a;
    int i;
    int j;

    mis = 0;
    pairs = 0;
    size_a = ft_strlen(a);
    i = 0;
    while(i < (size_a - 1))
    {
        j = i + 1;
        while( j < (size_a - 1))
        {
            pairs += 1;
            if (a[i] > a[j])
            {
                mis += 1;
                i++;
            }
            i++;
            j++; 
        }
    }
    return(mis / pairs);
}


int	main(void)
{
	size_t	arr[] = {1, -2, 3, 0, 5,INT_MIN, 6};
    printf("arr size is : %zu\n", ft_strlen(arr));
	//printf("disorder : %f\n", disorder(five));
	

	return (0);
}