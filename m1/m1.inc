; error codes
EC_Z80_M1_CRC                   equ $01
EC_Z80_M1_UPPER_ADDRESS         equ $02
EC_Z80_RAM_DATA_00              equ $04
EC_Z80_RAM_DATA_55              equ $05
EC_Z80_RAM_DATA_AA              equ $06
EC_Z80_RAM_DATA_FF              equ $07
EC_Z80_RAM_ADDRESS_A0_A7        equ $08
EC_Z80_RAM_ADDRESS_A8_A10       equ $09
EC_Z80_68K_COMM_ERROR_DATA      equ $0c
EC_Z80_68K_COMM_ERROR_CLEAR     equ $0d

EC_YM2610_IO_ERROR              equ $10
EC_YM2610_IRQ_FLAG_ERROR        equ $11
EC_YM2610_IRQ_TIMING_ERROR      equ $12
EC_YM2610_IRQ_UNEXPECTED        equ $13

EC_Z80_M1_BANK_ERROR_16K        equ $14
EC_Z80_M1_BANK_ERROR_8K         equ $15
EC_Z80_M1_BANK_ERROR_4K         equ $16
EC_Z80_M1_BANK_ERROR_2K         equ $17

YM2610_IRQ_EXPECTED		equ $42
YM2610_IRQ_NOT_EXPECTED		equ $bd