<template>
    <div v-loading="isLoading">
        <slot name="head">热榜</slot>
        <div v-for="(item, index) in msg" :key='index'>
            <span>{{ index }}:</span>
            <a :href=item.articleDetailUrl>{{ item.articleTitle }}</a>
        </div>
        <slot name="foot">结束</slot>
    </div>
</template>

<script>
import axios from 'axios';
export default {
    data() {
        return {
            msg: [],
            isLoading: true
        }
    },
    async created() {

        let result = await axios({
            url: 'http://114.55.247.229:89/hot/csdn'
        })
        console.log('result :>> ', result.data.msg);
        this.msg = result.data.msg
        this.isLoading = false


    },
    directives: {
        loading: {
            inserted(el, binding) {
                binding.value ? el.classList.add('loading') : el.classList.remove('loading')
            },
            update(el, binding) {
                binding.value ? el.classList.add('loading') : el.classList.remove('loading')
            }
        }
    }
}
</script>

<style>
.loading::before {
    content: '';
    position: absolute;
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    background: #fff url('../assets/loading.gif') no-repeat center;
}
</style>