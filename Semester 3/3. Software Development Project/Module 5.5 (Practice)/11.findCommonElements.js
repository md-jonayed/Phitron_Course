var a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
var b = [1, 3, 5, 7, 9];

function findCommon(a, b) {
    var c = [];
    for (var i = 0; i < a.length; i++){
        for(var j = 0; j < b.length; j++)
        if (a[i] == b[j]) {
            c.push(a[i]);
        }
    }
    console.log(c);
}

findCommon(a, b);
