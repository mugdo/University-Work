package CustomLoger

import (
	"net"
	"strconv"
	"work/file"
)

func Warning(Id int, ip net.IP) {
	id := strconv.Itoa(Id)
	data1 := "Log Type : (Warning)" + " userID : {" + id + "} " + "IP : {" + ip.String() + "}: `Something worng`."
	file.Insertdata(data1)

}
