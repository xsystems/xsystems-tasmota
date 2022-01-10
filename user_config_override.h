#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

    #ifdef FIRMWARE_EWELINK_ZB_GW03_V1_2

        #define USE_TCP_BRIDGE
        #define USE_UFILESYS

        #define USE_ZIGBEE
        #undef  USE_ZIGBEE_ZNP
        #define USE_ZIGBEE_EZSP
        #define USE_ZIGBEE_EEPROM     // T24C512A
        #undef  USE_ZIGBEE_CHANNEL
        #define USE_ZIGBEE_CHANNEL 11 // (11-26)
        
        #define USE_ETHERNET
        #undef  ETH_TYPE
        #define ETH_TYPE 0            // ETH_PHY_LAN8720
        #undef  ETH_CLKMODE
        #define ETH_CLKMODE 3         // ETH_CLOCK_GPIO17_OUT
        #undef  ETH_ADDRESS
        #define ETH_ADDRESS 1         // PHY1

    #endif

#endif  // _USER_CONFIG_OVERRIDE_H_
