var array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function findMaximumValue(array) {
    var max = 0;
    for (var i = 1; i < array.length; i++){
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

console.log(findMaximumValue(array));