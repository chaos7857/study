import jieba
path = r'C:\Users\Cc\Desktop'
font = r'C:\Windows\Fonts\FZSTK.TTF'#电脑自带的字体
def tcg(texts):
    cut = jieba.cut(texts)  #分词
    string = ' '.join(cut)
    return string
text = (open(path+r'\新建 文本文档.txt','r',encoding='utf-8')).read()
string = tcg(text)
wc = WordCloud(
    background_color='white',
    width=1000,
    height=800,
    mask=img_array, #设置背景图片
    font_path=font,
    stopwords=stopword
)
img = Image.open(path+r'\background.png') #打开图片
img_array = np.array(img) #将图片装换为数组
wc.generate_from_text(string)#绘制图片
plt.imshow(wc)
plt.axis('off')#隐藏坐标轴
plt.show()  #显示图片
wc.to_file(path+r'\beautifulcloud.png')  #保存图片
print(string)