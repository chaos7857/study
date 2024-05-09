from torch.utils.tensorboard import SummaryWriter
from torchvision import transforms
from PIL import Image


# 为什么需要tensor类型的数据类型？

img_path = "data/train/ants_image/0013035.jpg"
img = Image.open(img_path)
print(img)

writer = SummaryWriter("logs")






# transforms 如何使用？
# 创建对象
tensor_trans = transforms.ToTensor()
# 实例化后传参
tensor_img = tensor_trans(img)
print(tensor_img)


writer.add_image("tensor_img", tensor_img)
writer.close()