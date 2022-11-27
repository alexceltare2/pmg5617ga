ifconfig ra0 down
ifconfig rai0 down
/usr/bin/sys led on
echo active 7 0 > /proc/tc3162/gpio_output
