var name = "Jonayed";

function reverse(name) {
    var revName = "";
    for (var i = name.length-1; i >=0 ; i--){
        revName = revName + name[i];
    }
    return revName;
}

console.log(reverse(name));