/*
 * Configuration of module Port (Port_Cfg.h)
 *
 * Created by: 
 * Configured for (MCU): TMS570
 *
 * Module vendor: ArcCore
 * Module version: 2.0.2
 *
 * 
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Fri Dec 10 07:52:22 CET 2010
 */


#if (PORT_SW_MAJOR_VERSION != 1) 
#error "Port: Configuration file version differs from BSW version."
#endif


#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "Std_Types.h"


/** Build version info API */
#define PORT_VERSION_INFO_API				STD_ON
/** Enable Development Error Trace */
#define PORT_DEV_ERROR_DETECT				STD_ON
/** Build change pin direction API */
#define PORT_SET_PIN_DIRECTION_API	        STD_ON
/** Allow Pin mode changes during runtime */
#define PORT_SET_PIN_MODE_API               STD_ON

#define PORT_NUMBER_OF_PINS	10

#define PORT_FUNC		(1 << 1)
#define PORT_FUNC_NO	(0 << 1)
#define PORT_PULL_NONE	(1 << 2)
#define PORT_PULL_UP	(1 << 3)
#define PORT_PULL_DOWN	(0 << 3)
#define PORT_ODE_ENABLE	(1 << 4)

/** HW specific symbolic names of pins */
/** @req PORT013 */
typedef enum
{
	PORT_PIN_DCAN1_TX = 0x0800,
	PORT_PIN_DCAN1_RX = 0x0801,
	PORT_PIN_DCAN2_TX = 0x0900,
	PORT_PIN_DCAN2_RX = 0x0901,
	PORT_PIN_DCAN3_TX = 0x0a00,
	PORT_PIN_DCAN3_RX = 0x0a01,
	PORT_PIN_GIOA0 = 0x0000,
	PORT_PIN_GIOA3 = 0x0003,
	PORT_PIN_GIOA4 = 0x0004,
	PORT_PIN_GIOA5 = 0x0005,  
} Port_PinType;

typedef struct {
	Port_PinType pin;
	uint8 conf;
} Port_ConfiguredPinType;

/** Top level configuration container */
/** @req PORT073 */
typedef struct
{
  const Port_ConfiguredPinType pins[PORT_NUMBER_OF_PINS];
} Port_ConfigType;

/** Instance of the top level configuration container */
extern const Port_ConfigType PortConfigData;


#endif /*PORT_CFG_H_*/
