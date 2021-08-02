ifconfig -a | grep 'ether ' | sed 's/ether//g' | sed 's/[[:blank:]]//g'
