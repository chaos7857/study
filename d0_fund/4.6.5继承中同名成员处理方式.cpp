/*
当子类继承父类时同名对象

默认直接访问的是子类中的对象

如果要访问父类中的，需要用
    对象.Father：：name
    写上成员作用域


如果是同名函数
    同理
    这里有个注意，如果子类和父类重名后，子类会把父类所有相关同名函数全部隐藏
    也就是说啊，
    即使父类中某个重载函数并没有在子类中出现
    也不能直接调用
*/