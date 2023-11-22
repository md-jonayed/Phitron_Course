const loadData = () => {
    const searchText = document.getElementById("searchInput").value;
    // console.log(searchText);
    fetch(`www.themealdb.com/api/json/v1/1/search.php?f=${searchText}`)
        .then((res) => res.json)
        .then((data) => displayData(data.meals));
};

const displayData = (data) => {
    document.getElementById("totalMeal").innerText = data.length;
    const meals = document.getElementById("mealsContainer");
    data.forEach((meal) => {
        console.log(meal);
        const card = document.createElement("div");
        card.innerHTML = `
        <img src=""alt="">
        <h2>${meal?.strMeal}</h2>
        <p></p>
        <button>Details</button>
        `;
        meals.appendChild(card);
    });
}