const product = [
    { id: 19101019, name: "Jonayed", roll: 19 },
    { id: 19101020, name: "Jonayed", roll: 20 },
    { id: 19101021, name: "Sarkar", roll: 21 },
    { id: 19101022, name: "Jonayed", roll:22 },
]

const productContainer = document.getElementById("productContainer");
const result = product.forEach((product) => {
    console.log(product);
    const h1 = document.createElement("h1");
    h1.innerText = product.id;
    productContainer.appendChild(h1);
});