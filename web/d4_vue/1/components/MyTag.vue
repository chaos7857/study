<template>
    <div class="my-tag">
        <input v-if="isEdit" 
        v-focus
        class="input" 
        type="text" 
        placeholder="输入标签" 
        @blur="isEdit=false"
        @keyup.enter="handleChange"/>
        <div v-else class="text" @dblclick="isEdit=true">{{value}}</div>
    </div>
</template>

<script>
export default {
    props:{
        value:String
    },
    data() {
        return {
            isEdit: false
        }
    },
    methods:{
        handleChange(e){
            this.$emit('input',e.target.value)
            this.isEdit=false
        }
    }
}
</script>

<style lang="less">
.my-tag {
    cursor: pointer;

    .input {
        appearance: none;
        outline: none;
        border: 1px solid #ccc;
        width: 100px;
        height: 40px;
        box-sizing: border-box;
        padding: 10px;
        color: #666;

        &::placeholder {
            color: #666;
        }
    }
}
</style>