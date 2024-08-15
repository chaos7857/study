<template>
  <div id="app">
    <div class="sandr">
      <BoxA></BoxA>
      <BoxB></BoxB>
      
    </div>
    <HotList>
      <template #head>
        <div>
          我是热榜的头
        </div>
      </template>
      <template #foot>
        <div>
          我是热榜的jio
        </div>
      </template>
    </HotList>

    <!-- <img alt="Vue logo" src="./assets/logo.png"> -->
    <!-- <CommonButton></CommonButton> -->
    <HelloVue></HelloVue>
    
  </div>
</template>

<script>
import HelloVue from './components/HelloVue.vue';
import BoxB from './components/BoxB.vue';
import BoxA from './components/BoxA.vue';
import HotList from './components/HotList.vue';

export default {
  name: 'App',
  components: {
    HotList,
    HelloVue,
    BoxB,
    BoxA
  },data () {
    return {
      title:'你好',
      isLoading:true
    }
  }
}
</script>

<style lang="less" scoped>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  color: #2c3e50;
  margin-top: 60px;

  p {
    color: red;
  }
}
.sandr{
  display: flex;
}
</style>
