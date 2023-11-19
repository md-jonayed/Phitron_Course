var num1 = 70.56;
var num2 = 70;
console.log(num1 + num2);

// if we want the result in integer format:
console.log(parseInt(num1 + num2));

var num3 = '100';
var num4 = 100;
console.log(num3 + num4);     //it merges two variables

// converting string to number: 
console.log(parseInt(num3) + num4);

// + sign indicates merge operation when there is a string but during multiplication and subtraction divison it works fine

console.log(num3 * num4);
console.log(num3 - num4);
console.log(num3 / num4);

// to convert a number into float :
var num5 = "100.456";
var num6 = 23.67;
console.log(parseFloat(num5) + num6);

// if we want value only for 2 decimal spaces : 
var result = parseFloat(num5) + num6;
console.log(result.toFixed(2));
