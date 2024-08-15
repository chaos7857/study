import Vue from 'vue'
import App from './App.vue'
import CommonButton from './components/CommonButton.vue'
import router from './router/index';

Vue.component('CommonButton',CommonButton)

Vue.config.productionTip = false

new Vue({
  render: h => h(App),
  router
}).$mount('#app')
