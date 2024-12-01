#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret;

     for (auto it = people.begin(); it != people.end(); ++it) {
        it->birthday(); 
     }

     
     for (auto it = people.rbegin(); it != people.rend(); ++it) {
         if (it->isMonster() == true) {
             ret.push_back('n');
         }
         else {
             ret.push_back('y');
         }
     }

  

    return ret;



}
