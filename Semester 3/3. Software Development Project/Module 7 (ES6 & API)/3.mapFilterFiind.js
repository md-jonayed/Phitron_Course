let num = [1, 2, 3];
let square = num.map(x => x * x);
console.log(square);
//  map returns an array 

// filter :
// helps finds certain type all Element from many elements :
const product = [
    { id: 19101019, name: "Jonayed", roll: 19 },
    { id: 19101020, name: "Jonayed", roll: 20 },
    { id: 19101021, name: "Sarkar", roll: 21 },
    { id: 19101022, name: "Jonayed", roll:22 },
]

const result = product.filter((pd) => pd.name == "Jonayed");
console.log(result);

// find :
// we can find a certain element using find , if there is multiple same name then it will give the first value
const result2 = product.find((pd) => pd.name == "Jonayed");
console.log(result2);