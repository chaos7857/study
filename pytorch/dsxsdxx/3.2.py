import random
import torch
from d2l import torch as d2l

# 生成数据集
def synthetic_data(w, b, num_examples):
    '''生成y=Xw+b+噪声'''
    x=torch.normal(0, 1, (num_examples, len(w)))
    y = torch.matmul(x,w)+b
    y += torch.normal(0, 0.01, y.shape)
    return x,y.reshape((-1,1))

true_w = torch.Tensor([2,-3.4])
true_b = 4.2
features,labels = synthetic_data(true_w,true_b,1000)

# print(features[0])
# print(labels[0])

d2l.set_figsize()
d2l.plt.scatter(features[:,(1)].detach().numpy(),labels.detach().numpy(),1)
# d2l.plt.show()

# 读取数据集
def data_iter(batch_size,features,labels):
    num_examples = len(features)
    indices = list(range(num_examples))
    random.shuffle(indices)
    for i in range(0,num_examples,batch_size):
        batch_indices = torch.tensor(indices[i:min(i+batch_size,num_examples)])
        yield features[batch_indices], labels[batch_indices]

batch_size = 10
for x,y in data_iter(batch_size, features, labels):
    # print(x,"\n",y)
    break

w = torch.normal(0,0.01,(2,1),requires_grad=True)
b = torch.zeros(1,requires_grad=True)

# 定义模型
def linreg(x,w,b):
    '''线性回归模型'''
    return torch.matmul(x,w)+b

# 定义损失
def squared_loss(y_hat,y):
    '''均方损失'''
    return (y_hat-y.reshape(y_hat.shape))**2/2

# 定义优化算法
def sgd(params,lr,batch_size):
    '''小批量随机梯度下降'''
    with torch.no_grad():
        for param in params:
            param -= lr*param.grad/batch_size
            param.grad.zero_()

# 定义超参数
lr = 0.03
num_epochs = 3
net = linreg
loss = squared_loss

# 训练
for epoch in range(num_epochs):
    for x, y in data_iter(batch_size,features,labels):
        l = loss(net(x,w,b),y)
        l.sum().backward()
        sgd([w,b],lr,batch_size)
    with torch.no_grad():
        train_l = loss(net(features,w,b),labels)
        print(f'epoch{epoch+1},loss {float(train_l.mean()):f}')