const http = require('http');
const path = require('path')
const fs = require('fs')

const sever = http.createServer()
sever.on('request', (req, res) => {
    // console.log('requested');
    // console.log(req.url)
    if (req.url === '/') {
        req.url = `/assert/index.html`
    }
    const url = path.join(__dirname, req.url)
    console.log(url);
    let content = `${req.url} not found`
    res.setHeader('content-type', 'text/html;charset=utf-8')
    fs.readFile(url, 'utf-8', (err, data) => {
        if (err) {
            return res.end(`资源请求失败`)
        }
        res.end(data)
    })
})

sever.listen(8880, () => {
    console.log('created on http://127.0.0.1:8080');
})