if [ "$1" == "inputTest" ]; then
	echo "Start Input Test Mode (^C to quit)"
	while :
		do
			if ( !(grep "0" /proc/tc3162/wps_button > null) ); then
				echo "WPS Button is Pressed"
			elif ( !(grep "0" /proc/tc3162/reset_button > null) ); then
				echo "RESET Button is Pressed"
			fi
			sleep 1
		done
else
		echo "The only parameter is 'inputTest'"
fi
