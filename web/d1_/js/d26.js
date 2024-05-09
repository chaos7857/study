var student = {
    name:"tom",
    age:20, 
    gender:"boy",
    eat:function(a){
        console.log(a+" is eating");
    },

    drink(a){
        console.log(a+" is drinking");
    },


}


console.log(student.name);
student.eat(student.name);
student.drink(student.name);


var jsonstr = '{"name":"tom","age":20}';

var obj = JSON.parse(jsonstr);
console.log(obj.name);

console.log(JSON.stringify(obj));


