var session = require('express-session')
const express = require('express')
const app = express()
app.use(session({
    secret: 'keyboard cat', // any
    resave: false, //fix
    saveUninitialized: true //fix
}))

app.post('/api/login', (req, res) => {
    // 判断失败
    // ...
    req.session.user = req.body
    req.session.isLogin = true
    res.send({
        status: 0,
        msg: 'success'
    })
})
app.get('/api/username', (req, res) => {
    if (!req.session.isLogin) {
        return res.send({
            status: 1,
            msg: 'unlogin'
        })
    }
    res.send({
        status: 0,
        msg: 'success'
    })
})
app.post('/api/logout', (req, res) => {
    req.session.destroy()
    res.send({
        status: 0,
        msg: 'success'
    })
})