//
//  Budget.h
//  casino-management
//
//  Created by Diana Ghinea on 20/05/16.
//  Copyright © 2016 Diana Ghinea. All rights reserved.
//

#ifndef Budget_h
#define Budget_h

#include <stdio.h>
#include <vector>

#include "Bill.h"


class Budget {
private:
    int value;
    
    std :: vector <Bill> bills;
    
    static Budget *s_instance;
    
    Budget(int val = 0) {
        value = val;
    }
    
    
    Budget(const Budget &);
    void operator = (Budget const &);
    
public:
    static Budget *instance() {
        if (!s_instance)
            s_instance = new Budget;
        return s_instance;
    }
    
    void modify_value(int val);
    int get_value() const;
    
    void add_bill(Bill bill);
    
    void show_history();
    
    int games_count(std :: string game_name) const;
    int game_wins_count(std :: string game_name) const;
};



#endif /* Budget_h */