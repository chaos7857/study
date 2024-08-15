<template>
    <div class="box1">
        <p>这是一个发送盒子</p>
        <textarea name="tosend" id="tosend" v-model="text" placeholder="输入"></textarea>
        <button class="send" @click="send">send</button>
    </div>
</template>

<script>
import Bus from '../utils/Bus';
export default {
    data() {
        return {
            text: ''
        }
    },
    methods: {
        send() {
            console.log('tosend :>> ', this.text);
            Bus.$emit('send',this.text)
            this.text=''
        }
    }
}
</script>

<style scoped>
textarea {
    width: 188px;
    height: 110px;
}
</style>