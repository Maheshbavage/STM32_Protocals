/*
 * stm32f446rexx.h
 *
 *  Created on: 01-Jun-2026
 *      Author: Lenovo
 */

/*
* stm32f446xx.h
*
*  Created on: Feb 9, 2026
*      Author: Insys
*/


#include<stdint.h>
#ifndef STM32F446RE_H_
#define STM32F446RE_H_


#define USART2_BASE_ADDR  (0x40004400U)
#define USART1_BASE_ADDR  (0x40011000U)
#define USART5_BASE_ADDR   (0x40005000U)
#define USART3_BASE_ADDR   (0x40004800U)
#define USART6_BASE_ADDR    (0x40011400)


typedef struct
{
	uint32_t SR;
	uint32_t DR;
	uint32_t BRR;
	uint32_t CR1;
	uint32_t CR2;
	uint32_t CR3;
	uint32_t GTPR;


}USART_TypeDef;

#define USART2     ((USART_TypeDef*)USART2_BASE_ADDR )
#define USART1       ((USART_TypeDef*)USART1_BASE_ADDR)
#define USART5        ((USART_TypeDef*)USART5_BASE_ADDR)
#define USART3         ((USART_TypeDef*)USART3_BASE_ADDR)
#define USART6         ((USART_TypeDef*)USART6_BASE_ADDR)

#define PERIPH_BASE            (0x40000000UL)
#define APB1_PERIPH_BASE       (PERIPH_BASE)
#define APB2_PERIPH_BASE       (PERIPH_BASE + 0x00010000UL)
#define AHB1_PERIPH_BASE       (PERIPH_BASE + 0x00020000UL)
#define AHB2_PERIPH_BASE       (PERIPH_BASE + 0x10000000UL)

#define GPIOA_BASE             (AHB1_PERIPH_BASE + 0x0000UL)
#define GPIOB_BASE             (AHB1_PERIPH_BASE + 0x0400UL)
#define GPIOC_BASE             (AHB1_PERIPH_BASE + 0x0800UL)
#define GPIOD_BASE             (AHB1_PERIPH_BASE + 0x0C00UL)
#define GPIOE_BASE             (AHB1_PERIPH_BASE + 0x1000UL)
#define GPIOF_BASE             (AHB1_PERIPH_BASE + 0x1400UL)
#define GPIOG_BASE             (AHB1_PERIPH_BASE + 0x1800UL)
#define GPIOH_BASE             (AHB1_PERIPH_BASE + 0x1C00UL)
#define GPIOI_BASE             (AHB1_PERIPH_BASE + 0x2000UL)
#define I2C1_BASE_ADDR         (0x40005400U)






typedef struct {
	volatile uint32_t MODER;   // input,output,alternate,analog
	volatile uint32_t OTYPER;  // push , pull or open drain
	volatile uint32_t OSPEEDR; // allows fast , medium , low ,
	volatile uint32_t PUPDR;   // allows pull up or pull down or none
	volatile uint32_t IDR;     // stores data for reading from output from other nodes
	volatile uint32_t ODR;	   // to write valus to that gpio pin
	volatile uint32_t BSRR;	   // if this bit is high used to either set or reset a pin using odr
	volatile uint32_t LCKR;	   // allows user to lock the pin so value doesnt change
	volatile uint32_t AFR[2];  // to choose which afr u want to use
}GPIO_CONFIG;



#define GPIOA 	((GPIO_CONFIG *) GPIOA_BASE)
#define GPIOB 	((GPIO_CONFIG *) GPIOB_BASE)
#define GPIOC 	((GPIO_CONFIG *) GPIOC_BASE)
#define GPIOD 	((GPIO_CONFIG *) GPIOD_BASE)
#define GPIOE 	((GPIO_CONFIG *) GPIOE_BASE)
#define GPIOF 	((GPIO_CONFIG *) GPIOF_BASE)
#define GPIOG 	((GPIO_CONFIG *) GPIOG_BASE)
#define GPIOH 	((GPIO_CONFIG *) GPIOH_BASE)
#define GPIOI 	((GPIO_CONFIG *) GPIOI_BASE)




#include <stdint.h>

typedef struct {
	volatile uint32_t CR;            // 0x00: Clock control register – controls HSI, HSE, PLL on/off, ready flags
	volatile uint32_t PLL_CFGR;      // 0x04: PLL configuration register – configures PLL multipliers/dividers and clock source
	volatile uint32_t CFGR;          // 0x08: Clock configuration register – selects system clock, prescalers for AHB, APB1, APB2
	volatile uint32_t CIR;           // 0x0C: Clock interrupt register – enables and flags RCC interrupts
	volatile uint32_t AHB1RSTR;      // 0x10: AHB1 peripheral reset register – resets peripherals on AHB1 bus
	volatile uint32_t AHB2RSTR;      // 0x14: AHB2 peripheral reset register – resets peripherals on AHB2 bus
	volatile uint32_t AHB3RSTR;      // 0x18: AHB3 peripheral reset register – resets peripherals on AHB3 bus
	volatile uint32_t RESERVED1;     // 0x1C: Reserved
	volatile uint32_t APB1RSTR;      // 0x20: APB1 peripheral reset register – resets peripherals on APB1 bus
	volatile uint32_t APB2RSTR;      // 0x24: APB2 peripheral reset register – resets peripherals on APB2 bus
	volatile uint32_t RESERVED2;     // 0x28: Reserved
	volatile uint32_t RESERVED3;     // 0x2C: Reserved
	volatile uint32_t AHB1ENR;       // 0x30: AHB1 peripheral clock enable register – enables clock to AHB1 peripherals
	volatile uint32_t AHB2ENR;       // 0x34: AHB2 peripheral clock enable register – enables clock to AHB2 peripherals
	volatile uint32_t AHB3ENR;       // 0x38: AHB3 peripheral clock enable register – enables clock to AHB3 peripherals
	volatile uint32_t RESERVED4;     // 0x3C: Reserved
	volatile uint32_t APB1ENR;       // 0x40: APB1 peripheral clock enable register – enables clock to APB1 peripherals
	volatile uint32_t APB2ENR;       // 0x44: APB2 peripheral clock enable register – enables clock to APB2 peripherals
	volatile uint32_t RESERVED5;     // 0x48: Reserved
	volatile uint32_t RESERVED6;     // 0x4C: Reserved
	volatile uint32_t AHB1LPENR;     // 0x50: AHB1 peripheral clock enable in low power mode register
	volatile uint32_t AHB2LPENR;     // 0x54: AHB2 peripheral clock enable in low power mode register
	volatile uint32_t AHB3LPENR;     // 0x58: AHB3 peripheral clock enable in low power mode register
	volatile uint32_t RESERVED7;     // 0x5C: Reserved
	volatile uint32_t APB1LPENR;     // 0x60: APB1 peripheral clock enable in low power mode register
	volatile uint32_t APB2LPENR;     // 0x64: APB2 peripheral clock enable in low power mode register
	volatile uint32_t RESERVED8;     // 0x68: Reserved
	volatile uint32_t RESERVED9;     // 0x6C: Reserved
	volatile uint32_t BDCR;          // 0x70: Backup domain control register – controls RTC clock source, backup domain reset
	volatile uint32_t CSR;           // 0x74: Clock control & status register – flags for reset sources, LSION/LSEON bits
	volatile uint32_t RESERVED10;    // 0x78: Reserved
	volatile uint32_t RESERVED11;    // 0x7C: Reserved
	volatile uint32_t SSCGR;         // 0x80: Spread spectrum clock generation register – reduces EMI by modulating system clock
	volatile uint32_t PLLI2SCFGR;    // 0x84: PLLI2S configuration register – configures secondary PLL (audio, I2S, etc.)
	volatile uint32_t PLLSAICFGR;    // 0x88: PLLSAI configuration register – configures SAI PLL for audio applications
	volatile uint32_t DCKCFGR;       // 0x8C: Dedicated clock configuration register – configures dedicated peripheral clock sources
	volatile uint32_t CKGATENR;      // 0x90: Clocks gated enable register – enables/disables automatic clock gating
	volatile uint32_t DCKCFGR2;      // 0x94: Dedicated clock configuration register 2 – configures additional peripheral clocks

}CLOCK_CONFIG;

#define RCC_BASE              0x40023800UL
#define	RCC ((CLOCK_CONFIG *) RCC_BASE)






#include <stdint.h>

typedef struct {
	volatile uint32_t SR;
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t SMPR1;
	volatile uint32_t SMPR2;
	volatile uint32_t JOFR1;
	volatile uint32_t JOFR2;
	volatile uint32_t JOFR3;
	volatile uint32_t JOFR4;
	volatile uint32_t HTR;
	volatile uint32_t LTR;
	volatile uint32_t SQR1;
	volatile uint32_t SQR2;
	volatile uint32_t SQR3;
	volatile uint32_t JSQR;
	volatile uint32_t JDR1;
	volatile uint32_t JDR2;
	volatile uint32_t JDR3;
	volatile uint32_t JDR4;
	volatile uint32_t DR;

}ADC_CONFIG;

typedef struct {
	volatile uint32_t CSR;
	volatile uint32_t CCR;
	volatile uint32_t CDR;
}ADC_COM_CONFIG;


#define ADC_BASE		0x40012000UL
#define ADC1_OFFSET     0x000UL
#define ADC2_OFFSET		0x100UL
#define ADC3_OFFSET		0x200UL
#define ADC_COM_OFFSET	0x300UL

#define ADC1 	((ADC_CONFIG *) (ADC_BASE + ADC1_OFFSET))
#define ADC2 	((ADC_CONFIG *) (ADC_BASE + ADC2_OFFSET))
#define ADC3 	((ADC_CONFIG *) (ADC_BASE + ADC3_OFFSET))
#define ADC_COM	((ADC_COM_CONFIG *) (ADC_BASE + ADC_COM_OFFSET))

//timer2


typedef struct
{
	volatile uint32_t  CR1;
	volatile uint32_t  CR2;
	volatile uint32_t  SMCR;
	volatile uint32_t  DIER;
	volatile uint32_t  SR;
	volatile uint32_t  EGR;
	volatile uint32_t  CCMR1;
	volatile uint32_t  CCMR2;
	volatile uint32_t  CCER;
	volatile uint32_t  CNT;
	volatile uint32_t  PSC;
	volatile uint32_t ARR;
	volatile uint32_t Reserved;
	volatile uint32_t CCR1;
	volatile uint32_t CCR2;
	volatile uint32_t CCRR2;
	volatile uint32_t CCRR3;
	volatile uint32_t CCRR4;
	volatile uint32_t DCR;
	volatile uint32_t DMAR;
	volatile uint32_t OR;


}TIMER_Regdef_t;


#define TIMER2                  ((TIMER_Regdef_t*) 0x40000000)






typedef struct
{
    volatile uint32_t CPUID;    // 0x00
    volatile uint32_t ICSR;     // 0x04
    volatile uint32_t VTOR;     // 0x08
    volatile uint32_t AIRCR;    // 0x0C
    volatile uint32_t SCR;      // 0x10
    volatile uint32_t CCR;      // 0x14
    volatile uint8_t  SHP[12];  // 0x18–0x23
    volatile uint32_t SHCSR;    // 0x24
    volatile uint32_t CFSR;     // 0x28
    volatile uint32_t HFSR;     // 0x2C
    volatile uint32_t DFSR;     // 0x30
    volatile uint32_t MMFAR;    // 0x34
    volatile uint32_t BFAR;     // 0x38
    volatile uint32_t AFSR;     // 0x3C
    volatile uint32_t PFR[2];   // 0x40
    volatile uint32_t DFR;      // 0x48
    volatile uint32_t ADR;      // 0x4C
    volatile uint32_t MMFR[4];  // 0x50
    volatile uint32_t ISAR[5];  // 0x60
    uint32_t RESERVED0[5];      // 0x74
    volatile uint32_t CPACR;    // 0x88 ⭐
} SCB_Type;

#define SCB_BASE   (0xE000ED00UL)

#ifndef __DMA_H
#define __DMA_H

#include <stdint.h>

/* =========================
   DMA base addresses
   ========================= */

#define DMA1_BASE        (0x40026000UL)
#define DMA2_BASE        (0x40026400UL)

/* =========================
   DMA stream register map
   ========================= */

typedef struct
{
    volatile uint32_t CR;     // 0x00 Stream configuration register
    volatile uint32_t NDTR;   // 0x04 Number of data register
    volatile uint32_t PAR;    // 0x08 Peripheral address register
    volatile uint32_t M0AR;   // 0x0C Memory 0 address register
    volatile uint32_t M1AR;   // 0x10 Memory 1 address register
    volatile uint32_t FCR;    // 0x14 FIFO control register
} DMA_Stream_TypeDef;

/* =========================
   DMA controller register map
   ========================= */

typedef struct
{
    volatile uint32_t LISR;   // 0x00 Low interrupt status register
    volatile uint32_t HISR;   // 0x04 High interrupt status register
    volatile uint32_t LIFCR;  // 0x08 Low interrupt flag clear register
    volatile uint32_t HIFCR;  // 0x0C High interrupt flag clear register
    DMA_Stream_TypeDef STREAM[8];
} DMA_TypeDef;

/* =========================
   DMA instances
   ========================= */

#define DMA1   ((DMA_TypeDef *) DMA1_BASE)
#define DMA2   ((DMA_TypeDef *) DMA2_BASE)

/* =========================
   Useful bit definitions
   ========================= */

/* DMA_SxCR bits */
#define DMA_SxCR_EN        (1U << 0)
#define DMA_SxCR_DIR_MEM2PER (1U << 6)
#define DMA_SxCR_CIRC      (1U << 8)
#define DMA_SxCR_MINC      (1U << 10)

#define DMA_SxCR_PSIZE_16  (1U << 11)
#define DMA_SxCR_MSIZE_16  (1U << 13)

/* Channel selection (bits [27:25]) */
#define DMA_SxCR_CHSEL(ch) ((ch) << 25)

/* =========================
   Helper macros
   ========================= */

#define DMA_DISABLE(stream)        \
    do {                            \
        (stream)->CR &= ~DMA_SxCR_EN; \
        while ((stream)->CR & DMA_SxCR_EN); \
    } while (0)

#endif /* __DMA_H */

#include <stdint.h>

/* =========================
   DAC base address
   ========================= */

#define DAC_BASE   (0x40007400UL)

/* =========================
   DAC register map
   ========================= */

typedef struct
{
    volatile uint32_t CR;         // 0x00 DAC control register
    volatile uint32_t SWTRIGR;    // 0x04 DAC software trigger register
    volatile uint32_t DHR12R1;    // 0x08 DAC channel1 12-bit right-aligned data
    volatile uint32_t DHR12L1;    // 0x0C DAC channel1 12-bit left-aligned data
    volatile uint32_t DHR8R1;     // 0x10 DAC channel1 8-bit data
    volatile uint32_t DHR12R2;    // 0x14 DAC channel2 12-bit right-aligned data
    volatile uint32_t DHR12L2;    // 0x18 DAC channel2 12-bit left-aligned data
    volatile uint32_t DHR8R2;     // 0x1C DAC channel2 8-bit data
    volatile uint32_t DHR12RD;    // 0x20 Dual DAC 12-bit right-aligned data
    volatile uint32_t DHR12LD;    // 0x24 Dual DAC 12-bit left-aligned data
    volatile uint32_t DHR8RD;     // 0x28 Dual DAC 8-bit data
    volatile uint32_t DOR1;       // 0x2C DAC channel1 output register
    volatile uint32_t DOR2;       // 0x30 DAC channel2 output register
    volatile uint32_t SR;         // 0x34 DAC status register
} DAC_TypeDef;

/* =========================
   DAC instance
   ========================= */

#define DAC   ((DAC_TypeDef *) DAC_BASE)

/* =========================
   Useful bit definitions
   ========================= */

/* DAC_CR bits */
#define DAC_CR_EN1        (1U << 0)
#define DAC_CR_BOFF1     (1U << 1)
#define DAC_CR_TEN1      (1U << 2)
#define DAC_CR_DMAEN1    (1U << 12)

/* Trigger selection (TSEL1 bits [5:3]) */
#define DAC_CR_TSEL1_TIM6   (2U << 3)

/* =========================
   Simple helper macros
   ========================= */

#define DAC_WRITE_CH1(val)   (DAC->DHR12R1 = ((val) & 0x0FFF))


typedef struct {
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t SMCR;
	volatile uint32_t DIER;
	volatile uint32_t SR;
	volatile uint32_t EGR;
	volatile uint32_t CCMR1;
	volatile uint32_t CCMR2;
	volatile uint32_t CCER;
	volatile uint32_t CNT;
	volatile uint32_t PSC;
	volatile uint32_t ARR;
	volatile uint32_t RESERVED1;
	volatile uint32_t CCR1;
	volatile uint32_t CCR2;
	volatile uint32_t CCR3;
	volatile uint32_t CCR4;
	volatile uint32_t RESERVED2;
	volatile uint32_t DCR;
	volatile uint32_t DMAR;
	volatile uint32_t OR2;
	volatile uint32_t OR5;
}TIM_2_5_CONFIG;

typedef struct
{
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t SMCR;
    volatile uint32_t DIER;
    volatile uint32_t SR;
    volatile uint32_t EGR;
    volatile uint32_t CCMR1;
    volatile uint32_t CCMR2;
    volatile uint32_t CCER;
    volatile uint32_t CNT;
    volatile uint32_t PSC;
    volatile uint32_t ARR;
    volatile uint32_t RCR;
    volatile uint32_t CCR1;
    volatile uint32_t CCR2;
    volatile uint32_t CCR3;
    volatile uint32_t CCR4;
    volatile uint32_t BDTR;
    volatile uint32_t DCR;
    volatile uint32_t DMAR;
} TIM1_TypeDef;

#define TIM1_BASE               (0x40010000UL)
#define TIM_2_5_BASE			(0x40000000UL)
#define TIM2_OFFSET				(0x0000UL)
#define TIM3_OFFSET				(0x0400UL)
#define TIM4_OFFSET				(0x0800UL)
#define TIM5_OFFSET				(0x0C00UL)
#define TIM2_REG_ADR			(TIM_2_5_BASE + TIM2_OFFSET)
#define TIM3_REG_ADR			(TIM_2_5_BASE + TIM3_OFFSET)
#define TIM4_REG_ADR			(TIM_2_5_BASE + TIM4_OFFSET)
#define TIM5_REG_ADR			(TIM_2_5_BASE + TIM5_OFFSET)


#define TIM2_CONFIG				((TIM_2_5_CONFIG *) TIM2_REG_ADR)
#define TIM3_CONFIG				((TIM_2_5_CONFIG *) TIM3_REG_ADR)
#define TIM4_CONFIG				((TIM_2_5_CONFIG *) TIM4_REG_ADR)
#define TIM5_CONFIG				((TIM_2_5_CONFIG *) TIM5_REG_ADR)
#define	TIM1 ((TIM1_TypeDef *) TIM1_BASE)

#define TIM6_BASE   (0x40001000UL)

typedef struct
{
    volatile uint32_t CR1;    // 0x00 Control register 1
    volatile uint32_t CR2;    // 0x04 Control register 2
    volatile uint32_t SMCR;   // 0x08 Slave mode control (exists but limited)
    volatile uint32_t DIER;   // 0x0C DMA/interrupt enable
    volatile uint32_t SR;     // 0x10 Status register
    volatile uint32_t EGR;    // 0x14 Event generation
    volatile uint32_t CNT;    // 0x18 Counter
    volatile uint32_t PSC;    // 0x1C Prescaler
    volatile uint32_t ARR;    // 0x20 Auto-reload
} TIM6_CONFIG;

#define TIM6   ((TIM6_CONFIG *) TIM6_BASE)

#define FLASH_REG_ADR   0x40023C00UL

/* FLASH register structure */
typedef struct
{
    volatile uint32_t ACR;      // 0x00 Flash access control register
    volatile uint32_t KEYR;     // 0x04 Flash key register
    volatile uint32_t OPTKEYR;  // 0x08 Flash option key register
    volatile uint32_t SR;       // 0x0C Flash status register
    volatile uint32_t CR;       // 0x10 Flash control register
    volatile uint32_t OPTCR;    // 0x14 Flash option control register
} FLASH_CONFIG;

/* FLASH configuration macro */
#define FLASH_CONFIG_REG   ((FLASH_CONFIG *) FLASH_REG_ADR)



typedef struct
{
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t OAR1;
	volatile uint32_t OAR2;
	volatile uint32_t DR;
	volatile uint32_t SR1;
	volatile uint32_t SR2;
	volatile uint32_t CCR;
	volatile uint32_t TRISE;
	volatile uint32_t FLTR;
}I2C1_Regdef_t ;


#define I2C1                     ( (I2C1_Regdef_t*)I2C1_BASE_ADDR)


#endif /* STM32F446XX_H_ */


