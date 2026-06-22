/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:21:49 by marvin            #+#    #+#             */
/*   Updated: 2026/01/28 11:21:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"


static Base *generate(void)
{
    switch (rand() % 3)
    {
        case 0:
            return (new A);
            break ;
        case 1:
            return (new B);
            break ;
        case 2:
            return (new C);
            break ;
    }
    return (NULL);
}

static void identify(Base *Test)
{
    if (dynamic_cast<A*>(Test))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(Test))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(Test))
        std::cout << "C" << std::endl;
}


static void identify(Base &Test)
{
    try
    {
        (void)dynamic_cast<A&>(Test);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (const std::exception &){}
    try
    {
        (void)dynamic_cast<B&>(Test);             
        std::cout<< "B" << std::endl; 
        return ;
    }
    catch(const std::exception&){}
    try
    {
        (void)dynamic_cast<C&>(Test);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception&){}        
}

int main (void)
{
    srand(time(NULL));

    for(int i = 0; i < 8; i++)
    {
        Base *Test = generate();
        if(!Test)
            return(1);
        else
        {
            identify(Test);
            identify(*Test);
            delete (Test);

            std::cout << std::endl;
        }
    }
    return (1);
}