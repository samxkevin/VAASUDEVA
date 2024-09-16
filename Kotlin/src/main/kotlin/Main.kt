/*
fun main(args: Array<String>){
    val n= readln()!!.toInt()
    var n1=0
    var n2= n*n
    println("$n square = $n2 ")
    while (n2>0){
        n1=n1+n2%10
        n2=n2/10
    }

    if(n1==n){
        println( "$n is a neon number ")
    }
    else{
        println("$n is not a neon number")
    }
}*/
fun main() {
    val number = readln()!!.toInt()
    var sum = 0
    var n = number
    while (n > 0) {
        sum += n % 10
        n /= 10
    }

    while (sum > 9) {
        var newSum = 0
        var m = sum
        while (m > 0) {
            newSum += m % 10
            m /= 10
        }
        sum = newSum
    }

    println("The single-digit sum of $number is $sum")
}
