currentStat='0xf'
utilityPower='0x0'
replaceBattery='0x1'
lowBattery='0x2'
onBattery='0x4'
missingBattery='0x8'

if [ "$1" == "upsTest" ]; then
	echo "Start UPS Test Mode (^C to quit)"
	while :
		do
			while read upsStats; do
			
				if [ "$currentStat" == "$upsStats" ]; then
					continue
				else
					currentStat=$upsStats
				fi
				
				if [ 1 == $(($replaceBattery&$currentStat)) ]; then
					echo "Replace Battery State	[HIGH]"
				else
					echo "Replace Battery State	[LOW]"	
				fi

				if [ 2 == $(($lowBattery&$currentStat)) ]; then
					echo "Low Battery State	[HIGH]"
				else
					echo "Low Battery State	[LOW]"
				fi

				if [ 4 == $(($onBattery&$currentStat)) ]; then
					echo "On Battery State	[HIGH]"
				else
					echo "On Battery State	[LOW]"
				fi

				if [ 8 == $(($missingBattery&$currentStat)) ]; then
					echo "Missing Battery State	[HIGH]"
				else
					echo "Missing Battery State	[LOW]"
				fi
				
				if [ $utilityPower == $currentStat ]; then
                                        echo -e "\e[0;31mUtility power is on, GPIO All LOW\e[0m"
                                fi

				if [ 15 == $((0xf&$currentStat)) ]; then
					echo -e "\e[0;31mUPS is disconneted, GPIO All HIGH\e[0m"
				fi
				
				echo "=================================="
				
			done < /proc/tc3162/ups_stats
			sleep 1
		done
else
		echo "The only parameter is 'upsTest'"
fi
