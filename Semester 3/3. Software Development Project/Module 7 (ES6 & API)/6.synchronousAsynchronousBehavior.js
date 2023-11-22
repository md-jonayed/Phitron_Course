console.log(1);
console.log(2);
console.log(3);
console.log(4);
fun(5);
console.log(6);
console.log(7);
console.log(8);
console.log(9);

function fun(value) {
    fetch('https://fakestoreapi.com/products/1')
    // .then((res)=>console.log(res))
    .then((response) => response.json())
    .then((data) => {
        console.log(data);
        console.log(5);
    })
    .catch((error) => {
        console.log(error);

    });
}