//
//  converter.hpp
//  Visual_search_app
//
//  Created by Lirone Samoun on 27/09/2016.
//  Copyright © 2016 Occipital. All rights reserved.
//

#ifndef converter_hpp
#define converter_hpp

#include <string>

class Converter
{
public:
    static bool pcd2obj(const std::string& inputFilename, const std::string& outputFilename = "output.obj");
    static bool obj2pcd(const std::string& inputFilename, const std::string& outputFilename = "output.pcd");
};

#endif /* converter_hpp */
