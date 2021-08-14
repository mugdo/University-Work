package CustomLoger

import (
	"net"
	"strconv"
	"work/file"
)

func Delete(Id int, ip net.IP) {
	id := strconv.Itoa(Id)
	data1 := "Log Type : (Delete)" + " userID : {" + id + "} " + "IP : {" + ip.String() + "}: `Delete data By Id`."
	file.Insertdata(data1)

}
