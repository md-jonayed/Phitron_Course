var a = [12, 23, 22, 1, 2, 3, 4, 12, 33, 23];

function removeDuplicate(a) {
    for (var i = 0; i < a.length - 1; i++) {
        for (var j = i + 1; j < a.length; j++) {
            if (a[i] === a[j]) {
                a.splice(j, 1);
                
            }
        }
    }
    return a;
}

console.log(removeDuplicate(a));

