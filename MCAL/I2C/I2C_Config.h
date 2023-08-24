/*
 * I2C_Config.h
 *
 *
 *     Author: Sherif Mohamed
 */
#ifndef MCAL_I2C_I2C_CONFIG_H_
#define MCAL_I2C_I2C_CONFIG_H_


/*============================================================================================*/
/*   SELECT I2C_SLAVE_ADDRESS RANGE -> [ 1 TO 119 ]   */
/*============================================================================================*/
#define I2C_SLAVE_ADDRESS                1

/*============================================================================================*/
/*   I2C_GENERAL_CALL OPTIONS -> [ I2C_DEISABLE , I2C_ENABLE ]   */
/*============================================================================================*/
#define I2C_GENERAL_CALL           I2C_DEISABLE

/*============================================================================================*/
/*   SELECT FCPU IN MHZ   */
/*============================================================================================*/
#define I2C_F_CPU           16

/*============================================================================================*/
/*   SELECT FSCL IN KHZ   */
/*============================================================================================*/
#define I2C_F_SCL           400

#endif /* MCAL_I2C_I2C_CONFIG_H_ */
