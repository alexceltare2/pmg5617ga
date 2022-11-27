ifconfig ra0 up
ifconfig rai0 up
echo 1 > /proc/tc3162/led_wlan
echo 1 > /proc/tc3162/led_wlan_5g
/usr/bin/sys led recover
