/**
 * demo
 * 
 * @brief 
 * @author fmeng fmeng123@gmail.com
 * @version 1.0
 * @date 2024/07/29
 * @copyright 奶爸DIY Copyright (c) 2024
 */
#include "UserManager.h"

User::User(String name, unsigned int age) {
    this->name = name;
    this->age = age;
}

User::User() : name(DEFAULT_NAME), age(DEFAULT_AGE) {
}

String User::getName() const {
    return this->name;
}

unsigned int User::getAge() const {
    return this->age;
}

