from torch.utils.tensorboard import SummaryWriter
import numpy as np
from  PIL import Image

writer = SummaryWriter("logs")
image_path = "data/train/bees_image/132826773_dbbcb117b9.jpg"
img_PIL = Image.open(image_path)
img_array = np.array(img_PIL)
print(img_array.shape)


writer.add_image("test",img_array, 1, dataformats="HWC")

for i in range(100):
    writer.add_scalar("y=2x",3*i,i)

writer.close()