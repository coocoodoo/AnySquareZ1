#!/bin/sh

ps | grep wpa_supplicant | grep -v grep | awk '{print $1}' | xargs kill
export USE_MUTABLE_CONFIG=1
export LD_LIBRARY_PATH=/userdata/app/gk:$LD_LIBRARY_PATH
#echo $LD_LIBRARY_PATH
#./klipper.elf &> elf.log &
killall gklib
killall gkapi
killall K3SysUi
killall gkcam
echo 116 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio116/direction
echo 0 > /sys/class/gpio/gpio116/value
sleep 0.1
echo 1 > /sys/class/gpio/gpio116/value
./gklib -a /tmp/unix_uds1 printer.cfg &> /tmp/gklib.log &
sleep 5
./gkapi &> /tmp/gkapi.log &
./K3SysUi &> /tmp/gkui.log &
sleep 6
./gkcam &

