/* -----------------------------------------------------------------------------
  Filename:    xcp_cfg.h
  Description: Toolversion: 01.01.00.00.80.01.45.02.00.00
                
                Serial Number: CBD0800145
                Customer Info: McLaren Automotive Ltd.
                               McLaren / MC9S12X / Cosmic 4.7.8 / SC + MC + LIN Master
                
                
                Generator Fwk   : GENy 
                Generator Module: Cp_Xcp
                
                ECU: 
                        TargetSystem: Hw_Mcs12xCpu
                        Compiler:     Cosmic
                        Derivates:    MCS12X
                
                Channel "vehicle":
                        Databasefile: vehicle.dbc
                        Bussystem:    CAN
                        Manufacturer: McLaren
                        Node:         BMS
                Channel "isa":
                        Databasefile: isa_control.dbc
                        Bussystem:    CAN
                        Manufacturer: McLaren
                        Node:         mmc
                Channel "charger":
                        Databasefile: charger.dbc
                        Bussystem:    CAN
                        Manufacturer: McLaren
                        Node:         BMS

  Generated by , 2015-02-25  17:50:19
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2008 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__XCP_CFG_H__)
#define __XCP_CFG_H__

/*  */
#include "v_inc.h"
/*  */
/* General settings */
#define XCP_ENABLE_PARAMETER_CHECK
#define XCP_DISABLE_SEND_EVENT
#define XCP_DISABLE_TESTMODE
#define XCP_DISABLE_BOOTLOADER_DOWNLOAD
#define XCP_DISABLE_WRITE_PROTECTION
#define XCP_DISABLE_READ_PROTECTION
#define XCP_ENABLE_CONTROL
#define XCP_DISABLE_GET_XCP_DATA_POINTER
#define XCP_DISABLE_OPENCMDIF
/*  */
/* EEPROM access */
#define XCP_DISABLE_READ_EEPROM
#define XCP_ENABLE_WRITE_EEPROM
/*  */
/* Service request message */
#define XCP_DISABLE_SERV_TEXT
#define XCP_DISABLE_SERV_TEXT_PUTCHAR
#define XCP_DISABLE_SERV_TEXT_PRINTF
/*  */
/* Standard commands */
#define kXcpStationIdLength                  11
#define XCP_ENABLE_COMM_MODE_INFO
#define XCP_DISABLE_SEED_KEY
#define XCP_DISABLE_MODIFY_BITS
#define XCP_DISABLE_SHORT_DOWNLOAD
#define XCP_ENABLE_USER_COMMAND
#define XCP_DISABLE_VECTOR_MAPNAMES
#define XCP_DISABLE_TL_COMMAND
/*  */
/* Block transfer */
#define XCP_DISABLE_BLOCK_UPLOAD
#define XCP_DISABLE_BLOCK_DOWNLOAD
#define kXcpBlockDownloadMinSt               0
/*  */
/* Checksum */
#define XCP_ENABLE_CHECKSUM
#define XCP_DISABLE_AUTOSAR_CRC_MODULE
#define kXcpChecksumMethod                   XCP_CHECKSUM_TYPE_CRC16CCITT
#define kXcpChecksumBlockSize                256
/*  */
/* Synchronous Data Acquisition (DAQ) */
#define XCP_DISABLE_DAQ
#define XCP_DISABLE_STIM
#define XCP_DISABLE_UNALIGNED_MEM_ACCESS
#define XCP_DISABLE_SEND_QUEUE
#define XCP_DISABLE_DAQ_PRESCALER
#define XCP_DISABLE_DAQ_OVERRUN_INDICATION
#define XCP_DISABLE_WRITE_DAQ_MULTIPLE
#define XCP_DISABLE_DAQ_HDR_ODT_DAQ
#define XCP_DISABLE_DAQ_RESUME
#define XCP_DISABLE_DAQ_PROCESSOR_INFO
#define XCP_DISABLE_DAQ_RESOLUTION_INFO
/*  */
/* Events */
#define XCP_DISABLE_DAQ_EVENT_INFO
/*  */
/* DAQ Timestamp */
#define XCP_DISABLE_DAQ_TIMESTAMP
#define XCP_DISABLE_DAQ_TIMESTAMP_FIXED
/*  */
/* Page switching */
#define XCP_ENABLE_CALIBRATION_PAGE
#define kXcpMaxSegment                       1
#define XCP_DISABLE_PAGE_INFO
#define XCP_ENABLE_PAGE_COPY
#define XCP_DISABLE_PAGE_FREEZE
/*  */
/* Programming */
#define XCP_ENABLE_PROGRAM
#define kXcpProgramMinStPgm                  0
/*  */
#define CP_XCPDLL_VERSION                    0x0209u
#define CP_XCPDLL_RELEASE_VERSION            0x01u
/* Transport Layer */
/*  */
#define kXcpNumberOfCanChannels              3
#define XCP_DISABLE_MULTI_CHANNEL
#define XCP_DISABLE_MULTI_CONNECTION_PROTECTION
#define XCP_TRANSPORT_LAYER_TYPE_CAN
#define XCP_TRANSPORT_LAYER_VERSION          0x0100u
#define kXcpMaxCTO                           8
#define kXcpMaxDTO                           8
#define XCP_DISABLE_VARIABLE_DLC
/*  */
#define CP_XCPONCANDLL_VERSION               0x0106u
#define CP_XCPONCANDLL_RELEASE_VERSION       0x00u

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 184458331
      #error "The magic number of the generated file <C:\work\pr4\bms\nightwing\sw\mmc\proto\canbedded\gen\xcp_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 184458331
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __XCP_CFG_H__ */
