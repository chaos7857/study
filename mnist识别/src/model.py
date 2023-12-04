import torch.nn as nn
import torch.nn.functional as F


class LeNet5(nn.Module):
    def __init__(self):  # 初始化函数
        super(LeNet5, self).__init__()  # 多基层一般使用super
        self.conv1 = nn.Conv2d(1, 6, 5)  # 定义第一个卷积层，1是通道数灰度图片，6是卷积核个数，5卷积核大小
        self.pool1 = nn.MaxPool2d(2, 2)  # 池化核大小2*2，步距也为2,池化层，只改变高和宽，深度不改变
        self.conv2 = nn.Conv2d(6, 16, 5)  # 输入变为6，因为通过第一个卷积层有6个卷积核，输出深度为6
        self.pool2 = nn.MaxPool2d(2, 2)
        self.fc1 = nn.Linear(16 * 4 * 4, 120)  # 展开成一维的，第一层120个节点，输入16*4*4个节点
        self.fc2 = nn.Linear(120, 84)  # 输入120，设置84个节点
        self.fc3 = nn.Linear(84, 10)  # 输出根据训练集修改

    def forward(self, x):
        x = self.pool1(F.relu(self.conv1(x)))  # input(1,28,28),output1(6,24,24) output2(6,12,12)
        x = self.pool2(F.relu(self.conv2(x)))  # input(6,12,12),output1(16,8,8) output2(16,4,4)
        x = x.view(-1, 16 * 4 * 4)  # -1第一个维度
        x = F.relu(self.fc1(x))  # 全连接层1及其激活函数
        x = F.relu(self.fc2(x))  # 全连接层3得到输出
        x = self.fc3(x)
        return x


if __name__ == '__main__':
    net = LeNet5()
    print(net)
