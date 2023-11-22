const getData = new Promise(function (resolve, reject) {
    // return resolve(20); 
    return reject("No data found");
});

getData
    .then(data => console.log(data))
    .catch(error => console.log(error));

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


const loadData = async () => {
    try {
        const response = await fetch("https://fakestoreapi.com/products/1");
        const data = await response.json();
        console.log(data);
    }
    catch {
        error => {
            console.log(error);
        };
    }
};

loadData();