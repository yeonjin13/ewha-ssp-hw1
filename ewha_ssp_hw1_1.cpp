/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by YeonJin Jin
 * Mar 20, 2015
 *
 */

// Add #define pre-processor below


#include "Lab1_1.h"

int FRONT_LED = 10;
int REAR_LED = 9;
 
void setup() {
  //Add your code of Lab Assignment #1
  pinMode(FRONT_LED, OUTPUT);
  pinMode(REAR_LED, OUTPUT);
}

void loop() {
  //Add your code of Lab Assignment #1  
  digitalWrite(FRONT_LED, HIGH);
  digitalWrite(REAR_LED, LOW);
  delay(1000);

  digitalWrite(FRONT_LED, LOW);
  digitalWrite(REAR_LED, HIGH);
  delay(1000);
}
