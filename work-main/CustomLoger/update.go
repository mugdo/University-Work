package CustomLoger

import (
	"strconv"
	"work/file"
)

func Update(name string, Id int) {
	id := strconv.Itoa(Id)
	data1 := "Log Type : (Update)" + "userId : {" + id + "}, Name : [" + name + "] : `upadate data'."
	file.Insertdata(data1)

}
