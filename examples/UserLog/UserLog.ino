/**
 * demo
 *
 * @brief
 * @author fmeng fmeng123@gmail.com
 * @version 1.0
 * @date 2024/07/29
 * @copyright 奶爸DIY Copyright (c) 2024
 */
#include <UserManager.h>

User user1;
User user2("fmeng", 1);

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void printUserInfo() {
    Serial.print("user1, name: ");
    Serial.print(user1.getName());
    Serial.print(" , age: ");
    Serial.print(user1.getAge());
    Serial.println();

    Serial.print("user2, name: ");
    Serial.print(user2.getName());
    Serial.print(" , age: ");
    Serial.print(user2.getAge());
    Serial.println();
}

void loop() {
    printUserInfo();
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    delay(1000);
}