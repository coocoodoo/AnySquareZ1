export LD_LIBRARY_PATH=/userdata/app/gk:$LD_LIBRARY_PATH
while :
do
	count=`ps | grep gklib | grep -v "grep"  | wc -l`
	if [ $count -eq 0 ] ;
	then
		echo "gklib not found."
		./gklib -a /tmp/unix_uds1 printer.cfg &
	fi

	count=`ps | grep gkapi | grep -v "grep"  | wc -l`
        if [ $count -eq 0 ] ;
        then
                echo "gkapi not found."
		killall gkcam
                ./gkapi  >> /tmp/gkapi_echo.log 2>&1 &
		./gkcam &
        fi

        count=`ps | grep K3SysUi | grep -v "grep"  | wc -l` 
        if [ $count -eq 0 ] ;
        then
                echo "K3SysUi not found."
                ./K3SysUi &        
        fi

        count=`ps | grep gkcam | grep -v "grep"  | wc -l` 
        if [ $count -eq 0 ] ;
        then
                echo "gkcam not found."
                ./gkcam &        
        fi

	sleep 5
done
