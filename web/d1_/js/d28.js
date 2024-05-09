// dom

function fn1(){
    document.getElementById('tb1').innerHTML="学员成绩表";
}

function fn2(){
    document.getElementById('tb1').style="font-size: 30px; text-align: center; color: red;"
}

function fn3(){
   var trs = document.getElementsByClassName('data');
   trs[trs.length-1].remove();
}

