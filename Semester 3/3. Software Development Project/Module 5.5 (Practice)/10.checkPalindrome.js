var str = "abba"

function checkPlaindrome(str) {
    var str1 = "";
    for (var i = str.length-1; i >=0 ; i--){
        str1 = str1 + str[i];
    }
    if (str == str1) {
        console.log(str, " is plaindrome");
    }
    else {
        console.log(str, " not plaindrome");
    }
}

checkPlaindrome(str);