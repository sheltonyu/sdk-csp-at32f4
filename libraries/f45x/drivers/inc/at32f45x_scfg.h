/**
  **************************************************************************
  * @file     at32f45x_scfg.h
  * @brief    at32f45x system config header file
  **************************************************************************
  *                       Copyright notice & Disclaimer
  *
  * The software Board Support Package (BSP) that is made available to
  * download from Artery official website is the copyrighted work of Artery.
  * Artery authorizes customers to use, copy, and distribute the BSP
  * software and its related documentation for the purpose of design and
  * development in conjunction with Artery microcontrollers. Use of the
  * software is governed by this copyright notice and the following disclaimer.
  *
  * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
  * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
  * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
  * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
  * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
  *
  **************************************************************************
  */

/* define to prevent recursive inclusion -------------------------------------*/
#ifndef __AT32F45x_SCFG_H
#define __AT32F45x_SCFG_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "at32f45x.h"

/** @addtogroup AT32F45x_periph_driver
  * @{
  */

/** @addtogroup SCFG
  * @{
  */

#define SCFG_REG(value)                  PERIPH_REG(SCFG_BASE, value)
#define SCFG_REG_BIT(value)              PERIPH_REG_BIT(value)

/** @defgroup SCFG_exported_types
  * @{
  */

/**
  * @brief scfg xmc addres mapping swap type
  */
typedef enum
{
  SCFG_XMC_SWAP_NONE                     = 0x00, /* no swap */
  SCFG_XMC_SWAP_MODE1                    = 0x01  /* sdram 0x60000000 and 0x70000000, nor psram sram nand2 0xC00000000 and 0xD0000000 */
} scfg_xmc_swap_type;

/**
  * @brief scfg qspi addres mapping swap type
  */
typedef enum
{
  SCFG_QSPI_SWAP_NONE                    = 0x00, /* no swap */
  SCFG_QSPI_SWAP_MODE1                   = 0x01  /* qspi 0x09000000 - 0x18FFFFFF */
} scfg_qspi_swap_type;

/**
  * @brief scfg infrared modulation signal source selecting type
  */
typedef enum
{
  SCFG_IR_SOURCE_TMR10                   = 0x00  /* infrared signal source select tmr10 */
} scfg_ir_source_type;

/**
  * @brief scfg infrared output polarity selecting type
  */
typedef enum
{
  SCFG_IR_POLARITY_NO_AFFECTE            = 0x00, /* infrared output polarity no affecte */
  SCFG_IR_POLARITY_REVERSE               = 0x01  /* infrared output polarity reverse */
} scfg_ir_polarity_type;

/**
  * @brief scfg memory address mapping selecting type
  */
typedef enum
{
  SCFG_MEM_MAP_MAIN_MEMORY               = 0x00, /* 0x00000000 address mapping from main memory */
  SCFG_MEM_MAP_BOOT_MEMORY               = 0x01, /* 0x00000000 address mapping from boot memory */
  SCFG_MEM_MAP_INTERNAL_SRAM             = 0x03  /* 0x00000000 address mapping from internal sram */
} scfg_mem_map_type;

/**
  * @brief scfg can timestamp counting source type
  */
typedef enum
{
  SCFG_CAN_TIMESTAMP_TMR3                = 0x00, /* can timestamp counting source select tmr3 */
  SCFG_CAN_TIMESTAMP_TMR5                = 0x01  /* can timestamp counting source select tmr5 */
} scfg_can_timestamp_source_type;

/**
  * @brief scfg can index
  */
typedef enum
{
  SCFG_CAN1                              = 0x00, /* can1 */
  SCFG_CAN2                              = 0x01, /* can2 */
  SCFG_CAN3                              = 0x02  /* can3 */
} scfg_can_type;

/**
  * @brief scfg pin source type
  */
typedef enum
{
  SCFG_PINS_SOURCE0                      = 0x00,
  SCFG_PINS_SOURCE1                      = 0x01,
  SCFG_PINS_SOURCE2                      = 0x02,
  SCFG_PINS_SOURCE3                      = 0x03,
  SCFG_PINS_SOURCE4                      = 0x04,
  SCFG_PINS_SOURCE5                      = 0x05,
  SCFG_PINS_SOURCE6                      = 0x06,
  SCFG_PINS_SOURCE7                      = 0x07,
  SCFG_PINS_SOURCE8                      = 0x08,
  SCFG_PINS_SOURCE9                      = 0x09,
  SCFG_PINS_SOURCE10                     = 0x0A,
  SCFG_PINS_SOURCE11                     = 0x0B,
  SCFG_PINS_SOURCE12                     = 0x0C,
  SCFG_PINS_SOURCE13                     = 0x0D,
  SCFG_PINS_SOURCE14                     = 0x0E,
  SCFG_PINS_SOURCE15                     = 0x0F
} scfg_pins_source_type;

/**
  * @brief gpio port source type
  */
typedef enum
{
  SCFG_PORT_SOURCE_GPIOA                 = 0x00,
  SCFG_PORT_SOURCE_GPIOB                 = 0x01,
  SCFG_PORT_SOURCE_GPIOC                 = 0x02,
  SCFG_PORT_SOURCE_GPIOD                 = 0x03,
  SCFG_PORT_SOURCE_GPIOE                 = 0x04,
  SCFG_PORT_SOURCE_GPIOF                 = 0x05,
  SCFG_PORT_SOURCE_GPIOG                 = 0x06,
  SCFG_PORT_SOURCE_GPIOH                 = 0x07
} scfg_port_source_type;

/**
  * @brief scfg emac interface selecting type
  */
typedef enum
{
  SCFG_EMAC_SELECT_MII                   = 0x00, /* emac interface select mii mode */
  SCFG_EMAC_SELECT_RMII                  = 0x01  /* emac interface select rmii mode */
} scfg_emac_interface_type;

/**
  * @brief scfg ultra high sourcing/sinking strength pins type
  */
typedef enum
{
  SCFG_ULTRA_DRIVEN_PB9                  = MAKE_VALUE(0x2C, 0),
  SCFG_ULTRA_DRIVEN_PB8                  = MAKE_VALUE(0x2C, 1),
  SCFG_ULTRA_DRIVEN_PD12                 = MAKE_VALUE(0x2C, 2),
  SCFG_ULTRA_DRIVEN_PD13                 = MAKE_VALUE(0x2C, 3),
  SCFG_ULTRA_DRIVEN_PD14                 = MAKE_VALUE(0x2C, 4),
  SCFG_ULTRA_DRIVEN_PD15                 = MAKE_VALUE(0x2C, 5)
} scfg_ultra_driven_pins_type;

/**
  * @brief type define system config register all
  */
typedef struct
{
  /**
    * @brief scfg cfg1 register, offset:0x00
    */
  union
  {
    __IO uint32_t cfg1;
    struct
    {
      __IO uint32_t mem_map_sel          : 2; /* [1:0] */
      __IO uint32_t reserved1            : 3; /* [4:2] */
      __IO uint32_t ir_pol               : 1; /* [5] */
      __IO uint32_t ir_src_sel           : 2; /* [7:6] */
      __IO uint32_t reserved2            : 2; /* [9:8] */
      __IO uint32_t swap_xmc             : 1; /* [10] */
      __IO uint32_t reserved3            : 1; /* [11] */
      __IO uint32_t swap_qspi            : 1; /* [12] */
      __IO uint32_t reserved4            : 19;/* [31:13] */
    } cfg1_bit;
  };

  /**
    * @brief scfg cfg2 register, offset:0x04
    */
  union
  {
    __IO uint32_t cfg2;
    struct
    {
      __IO uint32_t lockup_lk            : 1; /* [0] */
      __IO uint32_t sram_operr_lk        : 1; /* [1] */
      __IO uint32_t pvm_lk               : 1; /* [2] */
      __IO uint32_t reserved1            : 5; /* [7:3] */
      __IO uint32_t sram_operr_sts       : 1; /* [8] */
      __IO uint32_t reserved2            : 14;/* [22:9] */
      __IO uint32_t mii_rmii_sel         : 1; /* [23] */
      __IO uint32_t can1_tst_sel         : 1; /* [24] */
      __IO uint32_t can2_tst_sel         : 1; /* [25] */
      __IO uint32_t can3_tst_sel         : 1; /* [26] */
      __IO uint32_t reserved3            : 5; /* [31:27] */
    } cfg2_bit;
  };

  /**
    * @brief scfg exintc1 register, offset:0x08
    */
  union
  {
    __IO uint32_t exintc1;
    struct
    {
      __IO uint32_t exint0               : 4; /* [3:0] */
      __IO uint32_t exint1               : 4; /* [7:4] */
      __IO uint32_t exint2               : 4; /* [11:8] */
      __IO uint32_t exint3               : 4; /* [15:12] */
      __IO uint32_t reserved1            : 16;/* [31:16] */
    } exintc1_bit;
  };

  /**
    * @brief scfg exintc2 register, offset:0x0C
    */
  union
  {
    __IO uint32_t exintc2;
    struct
    {
      __IO uint32_t exint4               : 4; /* [3:0] */
      __IO uint32_t exint5               : 4; /* [7:4] */
      __IO uint32_t exint6               : 4; /* [11:8] */
      __IO uint32_t exint7               : 4; /* [15:12] */
      __IO uint32_t reserved1            : 16;/* [31:16] */
    } exintc2_bit;
  };

  /**
    * @brief scfg exintc3 register, offset:0x10
    */
  union
  {
    __IO uint32_t exintc3;
    struct
    {
      __IO uint32_t exint8               : 4; /* [3:0] */
      __IO uint32_t exint9               : 4; /* [7:4] */
      __IO uint32_t exint10              : 4; /* [11:8] */
      __IO uint32_t exint11              : 4; /* [15:12] */
      __IO uint32_t reserved1            : 16;/* [31:16] */
    } exintc3_bit;
  };

  /**
    * @brief scfg exintc4 register, offset:0x14
    */
  union
  {
    __IO uint32_t exintc4;
    struct
    {
      __IO uint32_t exint12              : 4; /* [3:0] */
      __IO uint32_t exint13              : 4; /* [7:4] */
      __IO uint32_t exint14              : 4; /* [11:8] */
      __IO uint32_t exint15              : 4; /* [15:12] */
      __IO uint32_t reserved1            : 16;/* [31:16] */
    } exintc4_bit;
  };

  /**
    * @brief crm reserved1 register, offset:0x18~0x28
    */
  __IO uint32_t reserved1[5];

  /**
    * @brief scfg uhdrv register, offset:0x2C
    */
  union
  {
    __IO uint32_t uhdrv;
    struct
    {
      __IO uint32_t pb8_uh               : 1; /* [0] */
      __IO uint32_t pb9_uh               : 1; /* [1] */
      __IO uint32_t pd12_uh              : 1; /* [2] */
      __IO uint32_t pd13_uh              : 1; /* [3] */
      __IO uint32_t pd14_uh              : 1; /* [4] */
      __IO uint32_t pd15_uh              : 1; /* [5] */
      __IO uint32_t reserved1            : 26;/* [31:6] */
    } uhdrv_bit;
  };

} scfg_type;

/**
  * @}
  */

#define SCFG                             ((scfg_type *) SCFG_BASE)

/** @defgroup SCFG_exported_functions
  * @{
  */

void scfg_reset(void);
void scfg_infrared_config(scfg_ir_source_type source, scfg_ir_polarity_type polarity);
scfg_mem_map_type scfg_mem_map_get(void);
void scfg_xmc_mapping_swap_set(scfg_xmc_swap_type xmc_swap);
void scfg_qspi_mapping_swap_set(scfg_qspi_swap_type qspi_swap);
flag_status scfg_sram_operr_status_get(void);
void scfg_sram_operr_lock_enable(confirm_state new_state);
void scfg_lockup_enable(confirm_state new_state);
void scfg_pvm_lock_enable(confirm_state new_state);
void scfg_can_timestamp_source_set(scfg_can_type can_index, scfg_can_timestamp_source_type source);
void scfg_emac_interface_set(scfg_emac_interface_type mode);
void scfg_exint_line_config(scfg_port_source_type port_source, scfg_pins_source_type pin_source);
void scfg_pins_ultra_driven_enable(scfg_ultra_driven_pins_type value, confirm_state new_state);


/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif
