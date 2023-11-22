var name = "Jonayed";
console.log(name)
let name1 = "Mohammad";
console.log(name1);

const name2 = "Sarkar";
console.log(name2);

// here var works as a functional scope but (let and const) works as block scope 
// difference between functional scope and block scope: 
// functional scope :
// function printname() {
//     if (true) {
//         var x = "Jonayed";
//     }
    // x is still printing outside of the if block although it was declared inside the if block
    // console.log(x);
// }

// printname();

//block scope :
function printname() {
    if (true) {
        let x = "Jonayed";
        const y = "sarkar";
    }
    // x and y will not print outside of the if block because it was declared inside the if block it will raise an error
    // console.log(x,y);
}

printname();

// let is changeable we can reinitialize variable under let but we can not do the same using const 
//multiple line string :
const n = `i 
am 
jonayed `

console.log(n);

// template string 
const test = "Hello ";
const text = `world ${test}`;
console.log(text);
// console.log(text + test);

// spread operator :
let num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];
console.log(...num);

let numArray = ["jonayed", "sarkar", ...num];
console.log(numArray);

console.log(Math.max(...num));

// #arrow function : 
const fun = () => 2 * 2;
console.log(fun());

const fun1 = (value) => {
    console.log("Hi",value);
    return "bro";
}
console.log(fun1("JOnayed"));

