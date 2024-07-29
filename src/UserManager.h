/**
 * demo
 * 
 * @brief 
 * @author fmeng fmeng123@gmail.com
 * @version 1.0
 * @date 2024/07/29
 * @copyright 奶爸DIY Copyright (c) 2024
 */
#ifndef ARDUINOPLATFORMIOLIBRARY_USER_H
#define ARDUINOPLATFORMIOLIBRARY_USER_H
#include <Arduino.h>

#define DEFAULT_NAME "default_user"
#define DEFAULT_AGE 18

class User {
private:
    String name;
protected:
    unsigned int age;
public:
    User();
    User(String name, unsigned int age);
    String getName() const;
    unsigned getAge() const;
};


#endif
