<template>
    <div class="box1">
        <p>这是一个接收盒子</p>
        <div class="te" style="text-align: center;">
            <p>{{ text }}</p>
        </div>
    </div>
</template>

<script>
import Bus from '../utils/Bus.js';
export default {
    created() {
        Bus.$on('send', (text) => {
            this.text = text
        })
    },
    data() {
        return {
            text: '这里会接收消息'
        }
    }
}
</script>

<style>
.box1 {
    width: 200px;
    height: 200px;
    border: 1px solid black;
    color: black;
}
.te{
    width: 188px;
    height: 110px;
    border: 1px solid lightblue;
    margin: 0 auto;
}
</style>