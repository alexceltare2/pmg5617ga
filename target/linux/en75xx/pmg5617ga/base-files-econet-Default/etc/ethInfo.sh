if [ "$1" == "1" ]; then
	cat /proc/tc3162/gsw_link_st | grep Port1
elif [ "$1" == "2" ]; then
	cat /proc/tc3162/gsw_link_st | grep Port2
elif [ "$1" == "3" ]; then
	cat /proc/tc3162/gsw_link_st | grep Port3
elif [ "$1" == "4" ]; then
	cat /proc/tc3162/gsw_link_st | grep Port4
else
	echo "EX: /etc/ethInfo.sh [1|2|3|4]"
	echo "The number input should be between 1-4 or NOT empty"
fi
