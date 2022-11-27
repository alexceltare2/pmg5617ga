e2p=$1
address=$2

if [ "$e2p" == "24g" ];
then
	iwpriv ra0 e2p $address
elif [ "$e2p" == "5g" ];
then
	iwpriv rai0 e2p $address
else
	echo "EX: /etc/wlChk.sh [ 24g | 5g ] [ address ]"
fi
