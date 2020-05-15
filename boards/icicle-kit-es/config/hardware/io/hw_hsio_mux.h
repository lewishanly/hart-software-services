/*******************************************************************************
 * Copyright 2019-2020 Microchip FPGA Embedded Systems Solutions.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_hsio_mux.h
 * @author Microchip-FPGA Embedded Systems Solutions
 * 
 * Generated using Libero version: 12.900.0.16-PFSOC_MSS:2.0.100
 * Libero design name: PFSOC_MSS_C0
 * MPFS part number used in design: MPFS250T_ES
 * Date generated by Libero: 05-04-2020_23:17:23
 * Format version of XML description: 0.3.1
 * PolarFire SoC Configuration Generator version: 0.3.4
 * 
 * Note 1: This file should not be edited. If you need to modify a parameter,
 * without going through the Libero flow or editing the associated xml file,
 * the following method is recommended:
 *   1. edit the file platform//config//software//mpfs_hal//mss_sw_config.h
 *   2. define the value you want to override there. (Note: There is a 
 *      commented example in mss_sw_config.h)
 * Note 2: The definition in mss_sw_config.h takes precedence, as 
 * mss_sw_config.h is included prior to the hw_hsio_mux.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_HSIO_MUX_H_
#define HW_HSIO_MUX_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_TRIM_OPTIONS)
/*User trim options- set option to 1 to use */ 
#define LIBERO_SETTING_TRIM_OPTIONS    0x00000000UL
    /* TRIM_DDR_OPTION                   [0:1]    */ 
    /* TRIM_SGMII_OPTION                 [1:1]    */ 
#endif
#if !defined (LIBERO_SETTING_DDR_IOC_REG0)
/*Manual trim values */ 
#define LIBERO_SETTING_DDR_IOC_REG0    0x00000000UL
    /* BANK_PCODE                        [0:6]   RW value= 0x0 */ 
    /* BANK_NCODE                        [6:6]   RW value= 0x0 */ 
#endif
#if !defined (LIBERO_SETTING_SGMII_IOC_REG0)
/*Manual trim values */ 
#define LIBERO_SETTING_SGMII_IOC_REG0    0x00000000UL
    /* BANK_PCODE                        [0:6]   RW value= 0x0 */ 
    /* BANK_NCODE                        [6:6]   RW value= 0x0 */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_HSIO_MUX_H_ */
