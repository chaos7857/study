<template>
  <div id="app">
    <div class="content">
      <keep-alive>
        <router-view></router-view>
      </keep-alive>
    </div>
  </div>
</template>

<script>
export default {
  name: 'App',
  components: {

  }, data() {
    return {
      title: '你好',
      isLoading: true
    }
  }
}
</script>

<style lang="less" scoped>
#app {
  position: absolute;
  // border: 1px solid black;
}

.content {
  // border: 2px solid pink;
  margin-bottom: 51px;
}
</style>
