ifconfig -a | grep "ether " | sed 's/ether//g;s/ //g;s/	//g'
