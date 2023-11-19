var number = 5;

function factorial(number) {
    var val = 1;
    for (var i = 1; i <= number; i++){
        val = val * i;
    }
    console.log(val)
}

factorial(number)