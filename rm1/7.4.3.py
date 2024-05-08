import sys, os
sys.path.append(os.pardir)
from common.util import im2col# ModuleNotFoundError: No module named 'common.util'
import numpy as np

x1 = np.random.rand(1,3,7,7)
coll = im2col(x1, 5,5,stride = 1, pad = 0)
print(coll.shape)