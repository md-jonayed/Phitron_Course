var name = ["Mohammad", "Jonayed", "sarkar"];
console.log(name);
console.log(name[0]);
console.log(name.length);

// some array methods 

name.push("Shakil");
console.log(name);

name.pop();
console.log(name);
name.unshift("Shakil"); // add elements at beginnig
console.log(name);
name.shift();     // removes elements from beginning
console.log(name);

letters = ['a', 'b'];
console.log(letters.concat('c'));

// reversing an array : 
console.log(name.reverse());

// slicing an array : 
letters = ['a', 'b', 'c', 'd', 'e'];
console.log(letters.slice(2, 4));
console.log(letters.slice(2, 5));     // from index 2 to n-1
console.log(name.indexOf('Jonayed'));