import re
import urllib.request


def ask_url(url):
    head = {}
    req = urllib.request.Request(url=url, headers=head)
    html = ""
    try:
        response = urllib.request.urlopen(req)
        html = response.read()
    except Exception as result:
        print(result)
    return html


img_link = re.compile()


def get_img_srcs(url):
    bs = Beautifulsoup(html, "html.parser")
    names = []
    srcs = []
    for item in bs.find_all("img"):
        item = str(item)
        img_src = re.findall(img_link, item)
        if (len(img_src))!= 0:
            imgname = ""
            if img_src[0][0] != "":
                imgname = img_src[0][0] + "." + getFileType(img_src[0][1])
            else:
                imgname = getfilename(img_src[0][1])
            names.append(imgname)
            srcs.append(img_src[0][1])
    return names, srcs
"""<img src="https://pics5.baidu.com/feed/c995d143ad4bd113bd7b07b59bdf7d054afb057a.jpeg?token=529505ca8f960bece45e207875a56561" width="640" class="index-module_large_1mscr">"""



"""Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/104.0.5112.102 Safari/537.36 Edg/104.0.1293.63"""