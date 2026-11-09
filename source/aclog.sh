#!/bin/sh
export USE_MUTABLE_CONFIG=1
export LD_LIBRARY_PATH=/userdata/app/gk:$LD_LIBRARY_PATH

while true
do
    ./logmain -file="/tmp/gkui.log" -size=1024 -backups=1
    sleep 120
done
