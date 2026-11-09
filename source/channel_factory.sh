#!/bin/sh
update_file_path="/useremain/update_swu"
to_gcode_path="/useremain"
swu_path="/mnt/udisk/aGVscF9zb3Nf"
update_f_name="update_f.sh"
export_dir="/mnt/udisk/ZXhwb3J0X2Rpcgo="
export_txt="ZXhwb3J0LnR4dAo="
import_dir="/mnt/udisk/aW1wb3J0X2Rpcgo="
import_txt="aW1wb3J0LnR4dAo="
file_dir="ZmlsZV9kaXIK"

source /etc/profile

if [ -f ${swu_path}/update.swu ]
then
    echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable
    sleep 1
    echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable
    rm -rf ${to_gcode_path}/update.swu
    rm -rf ${to_gcode_path}/update_swu
    cp -fd ${swu_path}/update.swu /useremain
    unzip -P U2FsdGVkX1+lG6cHmshPLI/LaQr9cZCjA8HZt6Y8qmbB7riY ${to_gcode_path}/update.swu -d ${to_gcode_path}
    rm -rf ${to_gcode_path}/update.swu
    if [ -f ${update_file_path}/setup.tar.gz ];then
        tar zxf ${update_file_path}/setup.tar.gz -C ${update_file_path}
    elif [ -f ${update_file_path}/setup.tar ];then
        tar xf ${update_file_path}/setup.tar -C ${update_file_path}
    fi
    chmod +x ${update_file_path}/update.sh
    ${update_file_path}/update.sh
elif [[ -f "${export_dir}/${export_txt}" || -f "${import_dir}/${import_txt}" ]]
then
    /userdata/ex_and_im.sh
fi
