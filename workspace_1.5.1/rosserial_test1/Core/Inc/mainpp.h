/*
 * mainpp.h
 *
 *  Created on: Feb 20, 2021
 *      Author: pranav
 */

#ifndef INC_MAINPP_H_
#define INC_MAINPP_H_

#ifdef __cplusplus
extern "C" {
#endif

void setup(void);
void loop(void);
void servo_write(int angle);

#ifdef __cplusplus
}
#endif

#endif /* INC_MAINPP_H_ */
