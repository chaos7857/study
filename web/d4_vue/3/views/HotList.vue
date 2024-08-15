<template>
  <div class="article-page">
    <div class="article-item" v-for="(item, index) in msg" :key="index" @click="$router.push(`/detail?id=${item.articleDetailUrl}`)">
      <div class="head">
        <img :src="item.avatarUrl" alt="item" />
        <div class="info">
          <p class="title">{{ item.articleTitle }}</p>
          <p class="author">{{ item.nickName }} | {{ item.period }}</p>
        </div>
      </div>
      <div class="body">
        <!-- 封面，待做 -->
        <!-- <img src="@/assets/logo.png" alt="" /> -->
        内容虽然百度这几年发展势头落后于AT，甚至快被京东赶上了，毕竟瘦死的骆驼比马大，面试还是相当有难度和水准的。一面1.询问你的项目经验、学习经历、主修语言（照实答）2.解释ES6的暂时性死区（ let 和 var
        的区别）3.箭头函数、闭包、异步（老生常谈，参见上文）4.高阶函数（呃……我真不太清楚这是啥，听起来挺像闭包的）5.求N的阶乘末尾有多少个0，在线码代码或讲思路（求因数，统计2、5、10的个数
      </div>
      <div class="foot">收藏 {{ item.favorCount }} | 浏览 {{item.viewCount}}</div>
    </div>
  </div>
</template>

<script>
import axios from 'axios';
export default {
  data() {
    return {
      msg: []
    }
  },
  async created() {
    let result = await axios({
      url: 'http://114.55.247.229:89/hot/csdn'
    })
    // console.log('result :>> ', result.data.msg);
    // console.log('result pic:>> ', result.data.msg[0].avatarUrl);
    this.msg = result.data.msg
    // this.isLoading = false
  },
  methods: {

  }
}
</script>

<style lang="less" scoped>
.article-page {
  background: #f5f5f5;
}

.article-item {
  padding: 15px;

  .head {
    display: flex;

    img {
      width: 40px;
      height: 40px;
      border-radius: 50%;
      overflow: hidden;
    }

    .info {
      padding-left: 15px;


      p {
        line-height: 1.5;
        margin: 0;

        &.title {
          text-overflow: ellipsis;
          overflow: hidden;
          width: 100%;
          white-space: nowrap;
        }

        &.author {
          color: #999;
          font-size: 12px;
        }
      }
    }
  }

  .body {
    // display: flex;

    font-size: 14px;
    color: #666;
    line-height: 1.6;
    margin-top: 10px;
    overflow: hidden;
    text-overflow: ellipsis;
    display: -webkit-box;
    -webkit-line-clamp: 2;
    -webkit-box-orient: vertical;

    img {
      border: 1px solid #e4e4e4;
      width: 100px;
      height: 100px;
    }
  }

  .foot {
    font-size: 12px;
    color: #999;
    margin-top: 10px;
  }
}
</style>