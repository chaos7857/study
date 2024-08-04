const jwt = require('jsonwebtoken')
const expressJwt = require('express-jwt')
const express = require('express')
const {
    userInfo
} = require('os')
const app = express()
const secretKey = 'achaohhh'

app.use(expressJwt.expressjwt({secret:secretKey,algorithms:["ES256"]}).unless({path:[/^\/api\/login/]}))
app.get('/api/login', (req, res) => {
    // ...
    
    res.send({
        status: 200,
        message: 'success',
        token: jwt.sign({
            username: userInfo.username
        }, 
        secretKey, 
        {
            expiresIn: '30s'// 有效期
        })
    })
})

app.get('/api/getinfo',(req,res)=>{
    console.log(req.user);
    res.send({
        status:200,
        msg:'success',
        data:req.user
    })
})
app.use((err,req,res,next)=>{
    if(err.name ==='UnauthorizedError'){
        return res.send({
            status:401,
            message:'invalid token'
        })
        res.send({status:500,message:'unknown'})
    }
})
app.listen(88,()=>{
    console.log('server listen at http://127.0.0.1:88');
})