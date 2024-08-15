<template>
  <div>
    <nav class="nav" @click="$router.back()">&lt; 面经详情</nav>
  </div>
</template>

<script>
export default {
  mounted() {
    console.log('$route.query.id :>> ', this.$route.query.id);
  }
}
</script>

<style lang="less" scoped>
.nav {
  height: 44px;
  border-bottom: 1px solid #e4e4e4;
  line-height: 44px;
  text-align: center;
  .back {
    font-size: 18px;
    color: #666;
    position: absolute;
    left: 10px;
    top: 0;
    transform: scale(1, 1.5);
  }
}
</style>