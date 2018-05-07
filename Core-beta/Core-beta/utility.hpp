//
//  utility.hpp
//  Core-beta
//
//  Created by Photon Cat on 2018/5/6.
//  Copyright © 2018 Must Studio. All rights reserved.
//

#ifndef utility_hpp
#define utility_hpp

#include <string>

namespace INVIGILATION_CORE {
    namespace UTILITY{
        std::string& replaceAll(std::string &input, const std::string &pattern, const std::string &replacement);
        std::string& trimEnd(std::string &input, char toRemove);
    }
}

#endif /* utility_hpp */
