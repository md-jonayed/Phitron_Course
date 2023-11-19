var userInput = 10;

if (userInput % 2 == 0) {
    console.log(userInput, " is even");
}
else {
    console.log(userInput, " is Odd");
}

var nums = [2, 3, 1, 4, 6, 2, 6, 7, 3, 5,12,11,10];
console.log(nums.sort(function (a, b) {
    return a - b;
}));


var friends = ["Mohammad", "Jonayed", "sarkar"];
var maxLength = 0;
var largestName;

for (var i = 0; i < friends.length; i++){
    if (friends[i].length >= maxLength) {
        maxLength = friends[i].length
        largestName = friends[i];
    }
}
console.log(largestName);