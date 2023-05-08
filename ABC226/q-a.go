package main

import (
	"fmt"
)

func main() {
	var a float32
	fmt.Scan(&a)
	b := int(a)

	c := float32(b)

	if (a - c) >= 0.5 {
		b += 1
	}

	fmt.Println(b)

}
