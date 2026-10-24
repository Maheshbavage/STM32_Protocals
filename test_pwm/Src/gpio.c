/*
 * gpio.c
 *
 *  Created on: 22-Jul-2026
 *      Author: Lenovo
 */

#include "gpio.h"

void GPIO_Init(void)
{

// FOR D7(PA8) PWM - TIM1_CH1
    RCC->AHB1ENR |= (1 << 0);
    GPIOA->MODER &= ~(3 << 16);
    GPIOA->MODER |=  (2 << 16);
    GPIOA->OTYPER &= ~(1 << 8);
    GPIOA->OSPEEDR |= (3 << 16);
    GPIOA->PUPDR &= ~(3 << 16);

// AF FOR TIMER1 PWM
    GPIOA->AFR[1] &= ~(0xF << 0);
    GPIOA->AFR[1] |=  (1 << 0);

// PA9 PWM - TIM1_CH2 (OCC)
    RCC->AHB1ENR |= (1<<0);
    GPIOA->MODER &= ~(3<<18);
    GPIOA->MODER |=(2<<18);
    GPIOA->OTYPER &=~(1<<9);
    GPIOA->OSPEEDR |=(3<<18);
    GPIOA->PUPDR &= ~(3<<18);

// AF FOR TIM1_CH2 PWM
    GPIOA->AFR[1]&=~(0xF <<4);
    GPIOA->AFR[1]|=(1<<4);

// PB0 - 3.3 HIGH GPIO O/P
    RCC->AHB1ENR |=(1<<1);
    GPIOB->MODER &=~(3<<0);
    GPIOB->MODER |=(1<<0);
    GPIOB->OTYPER &=~(1<<0);
    GPIOB->OSPEEDR |=(3<<0);
//    GPIOB->PUPDR &=~(3<<0);
//    GPIOB->BSRR =(1<<0);

// PB1-3.3 HIGH GPIO O/P
    RCC->AHB1ENR |=(1<<1);
    GPIOB->MODER &=~(3<<2);
    GPIOB->MODER |=(1<<2);
    GPIOB->OTYPER &=~(1<<1);
    GPIOB->OSPEEDR |=(3<<2);
//    GPIOB->PUPDR &=~(3<<2);
//    GPIOB->BSRR =(1<<1);

// PB2
//    RCC->AHB1ENR |=(1<<1);
//    GPIOB->MODER &=~(3<<4);
//    GPIOB->MODER |=(2<<4);
//    GPIOB->OTYPER &=~(1<<2);
//    GPIOB->OSPEEDR |=(3<<4);
//    GPIOB->PUPDR &=~(3<<4);
//    GPIOB->BSRR =(1<<2);

    RCC->AHB1ENR |= (1 << 0); //Enable GPIOA clock
    GPIOA->MODER &= ~(3 << 8);
    GPIOA->MODER |=  (1 << 8);     // PA4 output

    GPIOA->MODER &= ~(3 << 10);
    GPIOA->MODER |=  (1 << 10);    // PA5 output

    GPIOA->MODER &= ~(3 << 12);
    GPIOA->MODER |=  (1 << 12);    // PA6 output

    GPIOA->ODR |=  (1 << 4);       // PA4 = 1
    GPIOA->ODR &= ~(1 << 5);       // PA5 = 0
    GPIOA->ODR &= ~(1 << 6);       // PA6 = 0

}




//// FOR D12 (PA6) CONTINOUSLY HIGH GPIO OUTPUT
//
//    GPIOA->MODER &= ~(3 << 12);
//    GPIOA->MODER |=  (1 << 12);
//
//    GPIOA->OTYPER &= ~(1 << 6);
//
//    GPIOA->OSPEEDR |= (3 << 12);
//
//    GPIOA->PUPDR &= ~(3 << 12);
//
//    GPIOA->BSRR = (1 << 6);
//
//// PA5 GPIO INPUT FOR OCTOCOUPLER READING high or low
//
//    GPIOA->MODER &= ~(3 << 10);
//    GPIOA->MODER |=  (1 << 10);
//
//    GPIOA->OSPEEDR |= (3 << 10);
//
//    GPIOA->PUPDR &= ~(3 << 10);






