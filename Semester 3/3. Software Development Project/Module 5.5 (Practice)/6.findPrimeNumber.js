var number = 2;

function detectPrime(number) {
    var isPrime = true;
    for (var i = 2; i <= number-1; i++){
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

var result = detectPrime(number)
if (result == true) {
    console.log(number, " is prime");
}
else {
    console.log(number, " not prime");
}