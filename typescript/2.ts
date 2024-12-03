// 使用字面量
function changeDirection(direction: 'up' | 'down' | 'left' | 'right') {
    console.log('direction :>> ', direction);
}

// 约定枚举名称和枚举中的值都以大写字母开头
enum Direction {Up,Down,Left,Right}
function changeDirection2(direction:Direction){

}
changeDirection2(Direction.Up)
// 默认第一个是0，可以自定义
enum Direction2 {Up=2,Down=4,Left,Right}
console.log('direction2.left :>> ', Direction2.Left);// 5
console.log('direction2.left :>> ', Direction2.Right);// 6
// 若枚举的是字符串则每个都需要定义