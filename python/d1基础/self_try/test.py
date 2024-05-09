from docx import Document
filename = "测试文档.docx"
dc = Document(r"C:\Users\Cc\Desktop\%s" % filename)
for paragraph in dc.paragraphs:
    print(paragraph.text)