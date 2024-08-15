<template>
  <div>
    <router-view></router-view>
    <nav class="nav">
      <router-link to="hot">热榜</router-link>
      <router-link to="chat">聊天</router-link>
      <router-link to="my">我的</router-link>
    </nav>
  </div>
</template>

<script>
export default {

}
</script>

<style lang="less" scoped>

.nav {
  bottom: 0;
  width: 100%;
  height: 50px;
  line-height: 50px;
  text-align: center;
  position: fixed;
  display: flex;
  border-top: 1px solid #e4e4e4;
  background: white;

  a {
    border-right: 1px solid #e4e4e4;
    display: block;
    flex: 1;
    border-radius: 5px;
    text-decoration: none;
    
  }
}
a.router-link-active{
  background: orange;
}
</style>