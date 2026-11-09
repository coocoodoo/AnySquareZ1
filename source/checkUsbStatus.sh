#!/bin/sh

# 0c45:6366  13d3:784b
VENDOR_ID="13d3"
PRODUCT_ID="784b"

check_usb_device() {
    lsusb | grep -i "$VENDOR_ID:$PRODUCT_ID" > /dev/null 2>&1
    return $?
}

reset_xhci() {
    echo "Resetting xhci-hcd.0.auto..."
    echo -n "xhci-hcd.0.auto" > /sys/bus/platform/drivers/xhci-hcd/unbind
    sleep 1
    echo -n "xhci-hcd.0.auto" > /sys/bus/platform/drivers/xhci-hcd/bind
    echo "Reset complete."
}

sleep 3

reset_xhci

sleep 5

ttyacm0=$(ls /dev/ttyACM* | grep "/dev/ttyACM0")
if [ "${ttyacm0}" == "/dev/ttyACM0" ];then
    echo "/dev/ttyACM0 is connected"
else
    echo "/dev/ttyACM0 is not found"
    reset_xhci
fi
