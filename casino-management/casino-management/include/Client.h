//
//  Client.h
//  casino-management
//
//  Created by Diana Ghinea on 22/05/16.
//  Copyright © 2016 Diana Ghinea. All rights reserved.
//

#ifndef Client_h
#define Client_h

#include <iostream>
#include <sstream>
#include <cstring>

#include "Budget.h"
#include "Bill.h"
#include "Drinks.h"
#include "Game.h"
#include "ruleta.h"

class Client {
private:
    static int current_client_id;
    int id;
    std :: string name;

    Bill bill;
    
    vector <Drink_Product> drinks;
    
public:
    Client(std :: string given_name) {
        id = Client :: current_client_id++;
        name = given_name;
        bill.set_name(name);
        std :: cout << '\n';
        std :: cout << "Clientul " << name << " (" << id << ") a fost adaugat!";
        std :: cout << '\n';
    }

    std :: string get_name() const;
    void set_name(std :: string given_name);

    void play_game(Game *g);
    void play_game(std :: string game_name);


    int get_id() const;

    void pay_bill();
    void get_drink(Drink_Product drink);
    vector <Drink_Product> get_drinks() const;
    
    Bill get_bill() const;

    friend std :: ostream& operator<<(std :: ostream& os, const Client& client);
};


#endif /* Client_h */
