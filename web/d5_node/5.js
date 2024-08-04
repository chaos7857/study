const mysql = require('mysql')
const db = mysql.createPool({
    host: '127.0.0.1',
    user: 'root',
    password: '1234',
    database: 'password'
})
db.query('select * from email', (err, results) => {
    if (err) {
        return console.log(err.message);
    }
    console.log(results);
})