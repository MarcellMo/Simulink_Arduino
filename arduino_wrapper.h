/**
 ******************************************************************************
 * @file    arduino_wrapper.h
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
#ifndef _ARDUINO_WRAPPER_H_
#define _ARDUINO_WRAPPER_H_
#include "rtwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

    void _arduino_wrapper_init();
    void _serial_init(uint32_t baud);
    void _servo_attach(uint8_t num);
    void _servo_writeMicroseconds(uint32_t val);
    void _serial_print(double val);
    void _serial_write(uint8_t* val,uint8_t length);
    uint8_t _serial_read(uint8_t num);
    uint8_t _serial_available(uint8_t num);
    uint32_t _get_time(void);
    void _delay_us(uint32_t time);
    
#ifdef __cplusplus
}
#endif
#endif // _ARDUINO_WRAPPER_H_
