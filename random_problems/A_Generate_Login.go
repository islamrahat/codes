package main

import "fmt"

func main() {
	var fname, lname string
	fmt.Scan(&fname,&lname)
	fmt.Printf("%s%c\n", fname, lname[0])
}