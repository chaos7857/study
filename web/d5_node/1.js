const {
    log
} = require('console');
const fs = require('fs')

// fs.writeFile('./1.txt', 'hhh')

fs.readFile('./assert/1.txt', 'utf-8', (err, data) => {
    if (err) {
        return console.log('err');
    }
    console.log(data);
})