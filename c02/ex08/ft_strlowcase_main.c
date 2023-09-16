/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:33:13 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 23:34:11 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    i++;
    }
    return (str);
}

#include<stdio.h>
int main()
{
    char str [] = "ASDLKFJEWIOVMXCZ";
    printf(ft_strlowcase(str));
}