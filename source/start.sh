ps | grep wpa_supplicant | grep -v grep | awk '{print $1}' | xargs kill
ps | grep adbd | grep -v grep | awk '{print $1}' | xargs kill
killall adbd
export USE_MUTABLE_CONFIG=1
export LD_LIBRARY_PATH=/userdata/app/gk:$LD_LIBRARY_PATH
#echo $LD_LIBRARY_PATH

./checkUsbStatus.sh &

is_process_alive() {
    ps | grep -w "$1" | grep -v grep >/dev/null 2>&1
}

start_gklib() {
    ./gklib -a /tmp/unix_uds1 printer.cfg &
    local pid=$!
    sleep 5
    
    if ! is_process_alive "$pid"; then
        echo "warn: gklib start failure, retry..."
        ./gklib -a /tmp/unix_uds1 printer.cfg &
        pid=$!
        sleep 5
        if ! is_process_alive "$pid"; then
            echo "error: gklib start failure"
            return 1
        fi
    fi
    
    echo "gklib started (PID: $pid)"
    return 0
}

# 启动服务
start_gklib
sleep 5
./gkapi >> /tmp/gkapi_echo.log 2>&1 &
./K3SysUi &
sleep 6
./gkcam  &
