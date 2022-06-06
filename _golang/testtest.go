package golang

import "fmt"

func TestName() int {
	var result int = 0
	var otv int
	var vOtv int
	var sOtv string = "<Vern Otv>"
	fmt.Println("<TestName>")

	fmt.Println("<Qwestion>")
	fmt.Println("1: <1otv> 		2: <2otv> 		3: <3otv> 		4: <4otv>")
	fmt.Scan(&otv)

	if otv == vOtv {
		fmt.Println("Yes!")
		result++
	} else {
		fmt.Println("No!")
		fmt.Println(sOtv)
	}

	return result
}
