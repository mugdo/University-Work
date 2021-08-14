package CustomLoger

import (
	"strconv"
	"work/file"
)

func Endpoint(Id int, path string) {
	id := strconv.Itoa(Id)
	data1 := "Log Type : (Endpoint)" + " userID : {" + id + "} " + "Endpoint : {" + path + "}: ``."
	file.Insertdata(data1)

}
