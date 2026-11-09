#!/bin/sh
export_dir="/mnt/udisk/ZXhwb3J0X2Rpcgo="
export_txt="ZXhwb3J0LnR4dAo="
dis_passwd="disable"

function log()
{
    echo "option log !!!"
    mkdir -p /userdata/AcLog
    mkdir -p /userdata/AcLog/uilog
    df -h > /userdata/AcLog/sys_volume.log
    dmesg > /userdata/AcLog/sys_kernel.log
    ps > /userdata/AcLog/ps.log
    iostat > /userdata/AcLog/iostat.log
    date > /userdata/AcLog/date.log
    free > /userdata/AcLog/free.log
    top -b n 1 > /userdata/AcLog/top.log
    cat /proc/meminfo > /userdata/AcLog/meminfo.log
    echo "gkapi: $(md5sum /userdata/app/gk/gkapi | awk '{ print $1 }')" > /userdata/AcLog/md5sum_log.txt
    echo "gklib: $(md5sum /userdata/app/gk/gklib | awk '{ print $1 }')" >> /userdata/AcLog/md5sum_log.txt
    echo "K3SysUi: $(md5sum /userdata/app/gk/K3SysUi | awk '{ print $1 }')" >> /userdata/AcLog/md5sum_log.txt
    echo "engineMode: $(md5sum /userdata/app/gk/engineMode | awk '{ print $1 }')" >> /userdata/AcLog/md5sum_log.txt
    echo "gkcam: $(md5sum /userdata/app/gk/gkcam | awk '{ print $1 }')" >> /userdata/AcLog/md5sum_log.txt
    echo "printer.cfg: $(md5sum /userdata/app/gk/printer.cfg | awk '{ print $1 }')" >> /userdata/AcLog/md5sum_log.txt
    echo "api.cfg: $(md5sum /userdata/app/gk/config/api.cfg | awk '{ print $1 }')" >> /userdata/AcLog/md5sum_log.txt
    cp -fd /tmp/* /userdata/AcLog
    cp -fd /data/app/log/* /userdata/AcLog/uilog
    cp -fd /userdata/app/gk/version_log.txt /userdata/AcLog
    cp -fd /useremain/dev/version /userdata/AcLog
    cd /userdata
    if [ "${dis_passwd}" == "disable" ];then
	zip -r -P 2YLVrATRvUEnMeXk6Vtc7qxfzYM4TJzrLnEBma8zpUKeGtseGWqp4LXs7e8KeU2u AC_LOG.pack AcLog
    else
        zip -r AC_LOG.pack AcLog
    fi
    rm -rf ${export_dir}/AC_LOG.pack
    cp -fd AC_LOG.pack ${export_dir}
    rm -rf AC_LOG.pack AcLog
    sync
}

function cfg()
{
    echo "option cfg !!!"
    mkdir -p /userdata/AcConfig
    cp -fd /userdata/app/gk/printer_mutable.cfg /userdata/AcConfig
    cp -fd /userdata/app/gk/printer.cfg /userdata/AcConfig
    cp -fd /userdata/app/gk/printer-* /userdata/AcConfig
    cp -fd /userdata/app/gk/printer_mutable_* /userdata/AcConfig
    cp -fd /userdata/app/gk/config/* /userdata/AcConfig
    cd /userdata
    if [ "${dis_passwd}" == "disable" ];then
        zip -r -P 2YLVrATRvUEnMeXk6Vtc7qxfzYM4TJzrLnEBma8zpUKeGtseGWqp4LXs7e8KeU2u AC_CONF.pack AcConfig
    else
        zip -r AC_CONF.pack AcConfig
    fi
    rm -rf ${export_dir}/AC_CONF.pack
    cp -fd AC_CONF.pack ${export_dir}
    rm -rf AC_CONF.pack AcConfig
    sync
}

function dis_passwd()
{
    echo "option dis_passwd !!!"
    dis_passwd="enable"
}

if [ -f "${export_dir}/${export_txt}" ];then
    echo "${export_txt} file exist !!!"
    export_txt_value=$(cat ${export_dir}/${export_txt})
    for value in ${export_txt_value}
    do
        echo "${value}"
        if [ "${value#*:}" == "1" ];then
            case ${value%%:*} in
                dis_passwd) dis_passwd;;
                log) log ;;
		cfg) cfg ;;
            esac
        fi
    done
    echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable
    sleep 1
    echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable
    sleep 1
    echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable
    sleep 1
    echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable
fi

sync
