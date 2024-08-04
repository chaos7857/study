import { axios } from "./axios.min.js";
axios({
    url:'http://hmajax.itheima.net/api/city',
    params:{
        pname:'浙江省'
    }
}).then(result =>{
    document.write(result.data.list);
})