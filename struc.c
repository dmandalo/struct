/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:10:06 by dmandalo          #+#    #+#             */
/*   Updated: 2019/10/12 20:26:18 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct human
{
    int age;
    char *sex;
    char *name;
    char *last_name;
    struct human *next;
}           human2; 


void    print_human_data(human2 hum)
{
    printf("%d, %s, %s\n", hum.age, hum.sex, hum.name); 
}

int main()
{
    human2 *first;

    first = (human2 *)malloc(sizeof(human2));
    first->age = 18;
    first->sex = "man";
    first->name = "Klay";
    first->last_name = "McKlay"; 

    human2 *second;

    second = (human2 *)malloc(sizeof(human2));

    (*second).age = 5;
    second->age = 15;
    second->name = "Derek";
    second->sex = "man";
    first->next = second;
    second->next = NULL;

    human2 *tmp;

    tmp = first;
    while (first != NULL)
    {
        print_human_data(*tmp);
        first = first->next;
    }
}
