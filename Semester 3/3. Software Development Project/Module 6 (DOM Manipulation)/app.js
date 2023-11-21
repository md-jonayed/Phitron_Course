// alert("Hello World");

// var h1 = document.getElementsByTagName("h1");
// console.log(h1); // This will log the HTMLCollection of h1 elements

var title = (document.getElementById("title").style.color="red");
// console.log(title)
(document.getElementById("title").style.removeProperty("color"));

// var child = document.getElementsByClassName("child");
// // console.log(child);
// console.log(child[0]);

var img = document.getElementById("image");
// console.log(img.getAttribute("src"));
img.setAttribute("alt", "picture");
(console.log(img.getAttribute('alt')));

var hero = document.getElementById("hero");
(console.log(hero.innerText));

var int = document.getElementById("int");
(console.log(int.value));

var parent = (document.getElementById("parent").innerHTML);
console.log(parent);

var divTest = document.getElementsByClassName("middle");
(console.log(divTest[0].childNodes[1].parentNode.parentNode.childNodes[5]));

var newDiv = document.getElementById("new");

// var p = document.createElement("p");
// p.innerText = "new text";
// newDiv.appendChild(p);

function createElement() {
    var p = document.createElement("p");
    p.innerText="I am jonayed";
    newDiv.appendChild(p);
}

createElement();

document.getElementById("submit").addEventListener("click", function (e) {
    console.log("Yess!!");
    createElement();
    var inputValue = document.getElementById("int").value;
    console.log(inputValue);
})

// document.getElementById("int").addEventListener("blur", function (e) {
//     console.log(e.target.value);
// })

document.getElementById("int").addEventListener("blur", change);
function change(e) {
    console.log(e.target.value)
}