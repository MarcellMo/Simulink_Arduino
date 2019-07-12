/**
 ******************************************************************************
 * @file    arduino_wrapper.c
 * @author  Marcell Mocher
 * @version V0.0.1
 * @date
 * @brief   wrapper code to call c functions from simulink
 ******************************************************************************
 * @attention
 *
 *
 *
 *
 ******************************************************************************
 */
#include <Arduino.h>
#include "arduino_wrapper.h"

/* Directly linked cpp files ------------------------------------------------ */
extern "C" {
    
    
#include "libraries/arduino/Servo/Servo.h"
    
#if defined(ARDUINO_ARCH_AVR)
#include "libraries/arduino/Servo/avr/Servo.cpp"
#elif defined(ARDUINO_ARCH_SAM)
#include "libraries/arduino/Servo/sam/Servo.cpp"
#else
#error "This library only supports boards with an AVR or SAM processor."
#endif
    
    
}

/* Global variables --------------------------------------------------------- */
static bool did_init = false;

extern "C" {
    Servo wrapper_servo;
}
/**
 * @author Marcell Mocher
 * @date
 * @brief  initialization function
 * @return
 */
extern "C" void _arduino_wrapper_init(){
    if(!did_init){
        
        
        did_init = true;
    }
}

/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for Serial.begin function
 * @return
 */
extern "C" void _serial_init(uint32_t baud){
    
    Serial.begin(baud);
    
    return;
}

/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for Serial.print function
 * @return
 */
extern "C" void _serial_print(double val){
    
    Serial.print(val,4);
    
    
    return;
}

/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for Serial.write function
 * @return
 */
extern "C" void _serial_write(uint8_t* val,uint8_t length){
    
    Serial.write(val,length);
    
    return;
}

/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for Serial.read function
 * @return
 */
extern "C" uint8_t _serial_read(uint8_t num){
    uint8_t val = 0;
    
    
    val = Serial.read();
    
    return val;
}

/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for Serial.available function
 * @return
 */
extern "C" uint8_t _serial_available(uint8_t num){
    uint8_t val = 0;
    
    val = Serial.available();
    
    return val;
}


/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for micros function
 * @return
 */
extern "C" uint32_t _get_time(void)
{
    return micros();
}


/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for delayMicroseconds function
 * @return
 */
extern "C" void _delay_us(uint32_t time)
{
    delayMicroseconds(time);
    return;
}


/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for delayMicroseconds function
 * @return
 */
extern "C" void _servo_attach(uint8_t num)
{
    wrapper_servo.attach(num);
}

/**
 * @author Marcell Mocher
 * @date
 * @brief  wrapper for delayMicroseconds function
 * @return
 */
extern "C" void _servo_writeMicroseconds(uint32_t val)
{
    wrapper_servo.writeMicroseconds(val);
}
