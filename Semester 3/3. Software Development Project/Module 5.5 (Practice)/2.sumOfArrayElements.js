var numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function sumOfArrays(numbers) {
     var sum = 0;
    for (var i = 0; i < numbers.length; i++){
        sum = sum + numbers[i];
    }
    return sum;
}

console.log(sumOfArrays(numbers));