package main

import (
	"fmt"
	"log"
	"net"
	"work/CustomLoger"
	"work/file"
)

func GetUserIP() net.IP {
	conn, err := net.Dial("udp", "8.8.8.8:80")
	if err != nil {
		log.Fatal(err)
	}
	defer conn.Close()

	localAddr := conn.LocalAddr().(*net.UDPAddr)

	return localAddr.IP
}

type info struct {
	name    string
	id      int
	address string
	phone   string
	ip      net.IP
}

func main() {
	fmt.Println("package")
	file.CreateFile()
	IP := GetUserIP()
	Info := info{"john", 1, "30 Aulike St.Suite 105Kailua, Hawaii 96734", "(808) 266-1222", IP}

	CustomLoger.Update(Info.name, Info.id+1)
	Info.id = Info.id + 1
	CustomLoger.Delete(Info.id, Info.ip)
	Info.id = Info.id + 1
	CustomLoger.Warning(Info.id, Info.ip)
	Epoint := "work/path/Customlog"
	Info.id = Info.id + 1
	CustomLoger.Endpoint(Info.id, Epoint)

}
