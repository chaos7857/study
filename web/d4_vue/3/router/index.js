import Vue from 'vue';
import vueRouter from 'vue-router';
import HotList from '@/views/HotList.vue';
import ChatView from '@/views/ChatView.vue';
import MyView from '@/views/MyView.vue';
import DetailView from '@/views/DetailView.vue';
import LayoutView from '@/views/LayoutView.vue';
Vue.use(vueRouter)
const router = new vueRouter({
    routes: [
        {   
            path:'/',
            redirect:'/my',
            component:LayoutView,
            children:
            [
                {
                    path:'my',
                    component:MyView
                },
                {
                    path: 'hot',
                    component: HotList,
                    children: [
                        {
                            path: 'csdn',
                            component: HotList
                        },
                        {
                            path:'bilibili',
                            component: HotList
                        }
                    ]
                },
                {
                    path: 'chat',
                    component: ChatView
                }
            ]
        },
        {
            path:'/detail',
            component:DetailView
        }
    ],
    mode: 'history'
})

export default router