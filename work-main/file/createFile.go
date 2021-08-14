package file

import (
	"log"
	"os"
)

var file *os.File
var err error

func CreateFile() {
	file, err = os.OpenFile("CLog.txt", os.O_CREATE|os.O_APPEND|os.O_WRONLY, 0666) //0666 parmission
	if err != nil {
		log.Fatal("File not working")

	}

}

func Insertdata(data string) {

	log.SetOutput(file)
	log.Println(data)

}
