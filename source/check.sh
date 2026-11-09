
export LD_LIBRARY_PATH=/userdata/app/gk:$LD_LIBRARY_PATH
while :
do
	sleep 5

	count=`ps | grep gkapi | grep -v "grep"  | wc -l`
        if [ $count -eq 0 ] ;
        then
                echo "gkapi not found."
		killall gkcam
                ./gkapi >> /tmp/gkapi.log 2>&1 &
		./gkcam >> /tmp/gkcam.log 2>&1 &
        fi

done
