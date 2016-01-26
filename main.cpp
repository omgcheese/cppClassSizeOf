//
//  main.cpp
//  cppSizeOf
//
//  Created by Jinwook Lee on 2016-01-26.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
using namespace std;

class Exmaple {
private:
    //int integer;
public:
    Exmaple(){
        
    }
    
//    virtual ~Exmaple(){
//        
//    }
    
//    ~Exmaple(){
//        
//    }
};

int main() {
    
    Exmaple example;
    
    cout << "size of this object is... " << sizeof(example) << endl;
    //Explanation: When an empty class is created, it will be sizeof 1 because you won't be able to access data with 0 size
    
    //When you add int intger, sizeof this class will be 4 because integer takes 4 bytes
    
    //when you add constructor and destructor, sizeof this class will be 1. It does not add any size
    
    //When you add virtual constructor, sizeof this class will vary depending on the machine
    //Because virtual constructor adds a pointer to the table in each instance, in 32 bits architecture, size will be 4 bytes and in 64 bits architecture size will be 8 bytes
    
    return 0;
}
