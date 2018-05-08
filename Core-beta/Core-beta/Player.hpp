//
//  Player.hpp
//  Core-beta
//
//  Created by Photon Cat on 2018/4/29.
//  Copyright © 2018 Must Studio. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <vector>
#include <string>
#include "Stringable.hpp"

namespace INVIGILATION_CORE {
    class Card;
    
    class Player : public Stringable {
    public:
        Player();
        virtual ~Player();
    protected:
        std::vector<unique_ptr<Card>> hand;
        std::vector<unique_ptr<Card>> deck;
    public:
        void takeCardIntoHand(unique_ptr<Card> card);
        virtual std::string toString();

    };
}

#endif /* Player_hpp */
