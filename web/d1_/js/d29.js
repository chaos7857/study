var a = document.getElementById('h1');
console.log(a);

var b = document.getElementsByTagName("div");
console.log(b);

var c = document.getElementsByName("hobby");
console.log(c);

var d = document.getElementsByClassName("cls");
console.log(d);




var div1 = document.getElementsByClassName("cls")[0];
div1.innerHTML = "*****";