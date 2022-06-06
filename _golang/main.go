package main

import (
	"fmt"
	"os"
	"time"
)

func Log(text string) {
	file, _ := os.OpenFile("_logs/log.log", os.O_APPEND|os.O_WRONLY, 0600)
	defer file.Close()
	var result string = "\n" + text + "\n" + "\n"
	_, _ = file.WriteString(time.Now().Format("[" + "2006/01/02" + " " + "15:04:05.00" + "]"))
	_, _ = file.WriteString(result)
}

var (
	tests      = make([][2]string, 0)
	exit  bool = false
	test  string
)

var (
	testName string
)

func name() {
	var nametest bool = true
	var name bool = false

	for !name {
		nametest = true
		fmt.Println("Test name?")
		fmt.Scan(&testName)

		for i := 0; i < len(tests); i++ {
			if testName == tests[i][1] {
				name = false
				fmt.Println("This name is busy")
				Log("TestN ame is busy, testName: " + testName)
				nametest = false
			}
		}

		if nametest {
			name = true
		}
	}
}

func newTest() {
	var command string
	var vernOtv string
	var while bool = true

	name()
	Log("TestName: " + testName)

	file, err := os.Create("_golang/" + testName + ".go")
	if err != nil {
		Log(string("Go error: " + err.Error()))
	}
	// defer file.Close()
	_, _ = file.WriteString("package golang" + "\n")
	_, _ = file.WriteString("" + "\n")
	_, _ = file.WriteString("import \"fmt\"" + "\n")
	_, _ = file.WriteString("" + "\n")
	_, _ = file.WriteString("func " + testName + "() int {" + "\n")
	_, _ = file.WriteString("	var result int = 0" + "\n")
	_, _ = file.WriteString("	var otv int" + "\n")
	_, _ = file.WriteString("	var vOtv int" + "\n")
	file.Close()

	for while {
		fmt.Println("Commands:")
		fmt.Println("1: New qwestion 		2: Save 		3: Delet test")
		fmt.Scan(&command)

		if command == "1" {
			Log("NewTest - New qwestion")
			fmt.Println("\n" + "True otv?")
			fmt.Scan(&vernOtv)
			file, err = os.OpenFile("_golang/"+testName+".go", os.O_APPEND|os.O_WRONLY, 0600)
			if err != nil {
				Log(string("Go error: " + err.Error()))
			}
			_, _ = file.WriteString("	var sOtv string = `" + vernOtv + "`" + "\n")
			_, _ = file.WriteString("	fmt.Println(`" + testName + "`)" + "\n")
			_, _ = file.WriteString("" + "\n")
			file.Close()

			file, err = os.OpenFile("_golang/"+testName+".go", os.O_APPEND|os.O_WRONLY, 0600)
			if err != nil {
				Log(string("Go error: " + err.Error()))
			}
			_, _ = file.WriteString("	fmt.Println(`<Qwestion>`)" + "\n")
			_, _ = file.WriteString("	fmt.Println(`1: <1otv> 		2: <2otv> 		3: <3otv> 		4: <4otv>`)" + "\n")
			_, _ = file.WriteString("	fmt.Scan(&otv)" + "\n")
			_, _ = file.WriteString("" + "\n")
			_, _ = file.WriteString("	if otv == vOtv {" + "\n")
			_, _ = file.WriteString("		fmt.Println(`Yes!`)" + "\n")
			_, _ = file.WriteString("		result++" + "\n")
			_, _ = file.WriteString("	} else {" + "\n")
			_, _ = file.WriteString("		fmt.Println(`No!`)" + "\n")
			_, _ = file.WriteString("		fmt.Println(sOtv)" + "\n")
			_, _ = file.WriteString("	}" + "\n")
			file.Close()
		} else if command == "2" {
			Log("NewTest - save")

			file, err = os.OpenFile("_golang/"+testName+".go", os.O_APPEND|os.O_WRONLY, 0600)
			if err != nil {
				Log(string("Go error: " + err.Error()))
			}
			_, _ = file.WriteString("" + "\n")
			_, _ = file.WriteString("	return result" + "\n")
			_, _ = file.WriteString("}" + "\n")
			_, _ = file.WriteString("" + "\n")
			file.Close()

			while = false
		}
	}
}

func main() {
	for !exit {
		fmt.Println("Tests:")
		fmt.Print("-1: Exit 		-2: New test")
		for i := 0; i < len(tests); i++ {
			fmt.Print(tests[i])
		}
		fmt.Print("\n")
		fmt.Scan(&test)

		if test == "-1" {
			Log("Test exit")
			break
		} else if test == "-2" {
			Log("NewTest")
			newTest()
		} else {
			Log("Unvalid test command: " + test)
		}
		// } else if test > "0" {

		// }
	}
}
