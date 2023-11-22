// array destructuring :
let a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// destructuring starts from beginning
let [one, two, three] = a;
console.log(one, two, three);

// object destructuring :

let obj = {
    name: "Jonayed",
    age: 25,
    friend: 2,
    github :true,
}

const { github, name, age } = obj;
console.log(github, name);

// nested object : 

const object = [{
    name: "Jonayed",
    age: 25,
    friend: ['a', 'b', 'c',{
        name: "Mohammad",
    }],
    github :true,
}, {
    name : "Sarkar",
}, {}];
console.log(object[0].friend[1]);
console.log(object[1].name);
console.log(object[0].friend[3].name);