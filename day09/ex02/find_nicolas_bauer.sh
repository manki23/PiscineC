cat "$1" | grep -i "nicolas	bauer" | grep "-" | awk '{print $(NF - 1)}'
