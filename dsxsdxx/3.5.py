import torch
import torchvision
from torch.utils import data
from torchvision import transforms
from d2l import torch as d2l

d2l.use_svg_display()

#读取数据集
trans = transforms.ToTensor()
mnist_train = torchvision.datasets.FashionMNIST(root="./data",train=True,transform=trans, download=True)
mnist_test = torchvision.datasets.FashionMNIST(root="./data",train=False,transform=trans, download=True)
print(len(mnist_train), len(mnist_test))

def get_fashion_mnist_labels(labels):
    '''返回文本标签'''
    text_labels = ['t-shirt','trouser','pullover','dress','coat','sandal','shirt','sneaker','bag','ankle boot']
    return [text_labels[int(i)] for i in labels]

def show_images(imgs, num_rows,num_cols,titles=None,scale = 1.5):
    '''绘制图像列表'''
    figsize = (num_cols*scale,num_rows*scale)
    _,axes = d2l.plt.subplots(num_rows,num_cols,figsize=figsize)
    axes = axes.flatten()
    for i, (ax,img) in enumerate(zip(axes,imgs)):# enumerate就是枚举一下，返回的i是索引
        if torch.is_tensor(img):
            ax.imshow(img.numpy())
        else:
            ax.imshow(img)
        ax.axes.get_xaxis().set_visible(False)
        ax.axes.get_yaxis().set_visible(False)
        if titles:
            ax.set_title(titles[i])
    return axes

x, y = next(iter(data.DataLoader(mnist_train,batch_size=18)))
show_images(x.reshape(18,28,28),2,9,titles=get_fashion_mnist_labels(y))
d2l.plt.show()

# 读取小批量
batch_size  = 256
def get_dataloader_workers():
    return 4
train_iter = data.DataLoader(mnist_train,batch_size,shuffle=True,num_workers=get_dataloader_workers())

# 整合
def load_data_fashion_mnist(batch_size,resize = None):
    trans = [transforms.ToTensor()]
    if resize:
        trans.insert(0,transforms.Resize(resize))
    trans = transforms.Compose(trans)
    mnist_train = torchvision.datasets.FashionMNIST(root="./data",train=True,transform=trans, download=True)
    mnist_test = torchvision.datasets.FashionMNIST(root="./data",train=False,transform=trans, download=True)
    return (data.DataLoader(mnist_train,batch_size,shuffle=True,num_workers=get_dataloader_workers()),data.DataLoader(mnist_test,batch_size,shuffle=True,num_workers=get_dataloader_workers()))

train_iter,test_iter = load_data_fashion_mnist(32,resize=64)
for x,y in train_iter:
    print(x.shape,x.dtype,y.shape,y.dtype)
    break

'''over!'''