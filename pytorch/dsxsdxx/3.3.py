import numpy as np 
import torch
from torch.utils import data
from d2l import torch as d2l

# '''generate data'''
true_w = torch.tensor([2,-3.4])
true_b = 4.2
features, labels = d2l.synthetic_data(true_w,true_b,1000)#Generate y = Xw + b + noise.1000个

# '''read data'''
def load_array(data_arrays,batch_size,is_train=True):
    '''construct a 迭代器 '''

    dataset = data.TensorDataset(*data_arrays)
    '''这里*的意思
    例如 data_arrays = [tensor1, tensor2, tensor3]，
    那么 *data_arrays 将把列表中的元素解包，
    相当于传递了参数 tensor1, tensor2, tensor3 给 data.TensorDataset。
    这样，data.TensorDataset 将使用这些张量来创建一个数据集对象。
    '''
    return data.DataLoader(dataset,batch_size,shuffle=is_train)


batch_size = 10
data_iter = load_array((features,labels),batch_size)
print(next(iter(data_iter)))

# 定义模型
from torch import nn
net = nn.Sequential(nn.Linear(2,1))
'''
sequential类将多个层串联
全连接层在linear中定义
参数包括，输入特征形状，输出特征形状，
输出特征形状为单个标量，因此是1
'''
#初始化模型
net[0].weight.data.normal_(0,0.01)
net[0].bias.data.fill_(0)

#定义损失函数
loss = nn.MSELoss()# L2 范数

# 定义优化算法
trainer = torch.optim.SGD(net.parameters(), lr=0.03)
'''第一个参数指的是要优化的参数'''

# 训练
num_epochs = 3
for epoch in range(num_epochs):
    for x,y in data_iter:
        l = loss(net(x),y)
        trainer.zero_grad()
        l.backward()
        trainer.step()
    l = loss(net(features),labels)
    print(f'epoch{epoch+1},loss {l:f}')