## 安装

anacoda

```powershell
conda create -n pytorch python=3.6

选择自己的版本到官网找命令安装pytorch

activate pytorch

conda install jupyter

jupyter notebook
```





 ```python
 os.path.join(str1,str2)                      return str1+str2
 os.listdir(path)# 返回path下的所有文件组成的一个列表
 ```





```python
from torch.utils.tensorboard import SummaryWriter
writer = SummaryWriter("logs")

# writer.add_image()

for i in range(100):
    writer.add_scalar("y=x",i,i)

writer.close()








tensorboard --logdir=logs --port=6006

```











transforms

创建具体的工具

```python
tensor_trans = transforms.ToTensor()
```

使用工具

```python
tensor_img = tensor_trans(img)
```







![Snipaste_2023-10-20_22-34-33](C:\Users\Admin\Desktop\markdown\Snipaste_2023-10-20_22-34-33.png)
