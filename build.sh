#!/bin/sh

if [ -z "${TASMOTA_VERSION}" ]; then
  echo "The TASMOTA_VERSION environment variable is NOT set, but is required."
  exit
fi

USER=`id --user`
GROUP=`id --group`

if [ ! -d Tasmota ]; then
    git clone https://github.com/arendst/Tasmota.git
fi

git -C Tasmota fetch --all --tags
git -C Tasmota checkout "tags/${TASMOTA_VERSION}" -B "release-${TASMOTA_VERSION}"

cp Tasmota/platformio_override_sample.ini Tasmota/platformio_override.ini
cp user_config_override.h                 Tasmota/tasmota

envsubst < platformio_tasmota_cenv.ini >  Tasmota/platformio_tasmota_cenv.ini

docker run  --pull always \
            --tty \
            --interactive \
            --rm \
            --volume `pwd`/Tasmota:/tasmota \
            --user "${USER}:${GROUP}" \
            blakadder/docker-tasmota -e "tasmota32-${TASMOTA_VERSION}-ewelink-zb_gw03_v1.2"
