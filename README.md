# xSystems Tasmota

> Tasmota builds and build configuration for certain devices.

## Devices

- [Eachen eWeLink Ethernet Zigbee Gateway ZB-GW03-V1.2][ewelink_zb-gw03-v1.2]

## Builds

### Released

Released builds are located [here][releases].

### Create a build

Set the environment variable `TASMOTA_VERSION` to the version of Tasmota you want to use to build de firmware for the devices and run de script `build.sh`. 

For example running the following:

```sh
TASMOTA_VERSION=v10.1.0 ./build.sh
```

results in build output like this:

```
Tasmota/build_output/firmware/tasmota32-v10.1.0-ewelink-zb_gw03_v1.2.bin
```

[ewelink_zb-gw03-v1.2]: https://templates.blakadder.com/ewelink_ZB-GW03.html "eWelink ZB-GW03-V1.2"
[releases]: https://github.com/xsystems/xsystems-tasmota/releases "Releases"