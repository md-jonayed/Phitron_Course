fetch('https://fakestoreapi.com/products/1')
    // .then((res)=>console.log(res))
    .then((response) => response.json())
    .then((data) => {
        console.log(data);
    })
    .catch((error) => {
        console.log(error);
    });