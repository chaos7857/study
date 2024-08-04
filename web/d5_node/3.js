const exp = require('constants');
const express = require('express')
const app = express()

app.use(express.static('assert'))
app.listen(88,()=>{
    console.log(`express sever running at http://127.0.0.1:88`);
})

app.get('/',(req,res)=>{
    res.send({name:'lsy',age:20})
    console.log(req.query);
})
app.get('/user/:id',(req,res)=>{
    // res.send({name:'lsy',age:20})
    console.log(req.query);
    console.log(req.params);
    res.send(req.params)
})
app.post('/',(req, res)=>{
    console.log('post');
})