from docx import Document
import re
from docx.shared import Pt, Cm
# filename = input("")
filename = "测试文档.docx"
dc = Document(r"C:\Users\Cc\Desktop\%s" % filename)


def remove_blank(string):
    return "".join(string.split())


def clear_blank_para():
    p = paragraph._element
    p.getparent().remove(p)
    p._p = p._element = None


for paragraph in dc.paragraphs:
    for run in paragraph.runs:
        run.text = remove_blank(run.text)
    if len(paragraph.text) == 0:
       clear_blank_para()

dc.save(r"C:\Users\Cc\Desktop\%s" % filename)


