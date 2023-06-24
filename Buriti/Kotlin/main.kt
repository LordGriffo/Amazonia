fun main() {
    var num1: Int
    var num2: Int
    var soma: Int
    var subtracao: Int
    var multi: Int
    var div: Int
    var res: Int

    print("Digite o Primeiro Numero: ")
    num1 = readLine()!!.toInt()
    print("Digite o Segundo Numero: ")
    num2 = readLine()!!.toInt()

    soma = num1 + num2
    subtracao = num1 - num2
    multi = num1 * num2
    div = num1 / num2
    res = num1 % num2

    println("+: $soma")
    println("-: $subtracao")
    println("*: $multi")
    println("/: $div")
    println("%: $res")
}
