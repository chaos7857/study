import requests
from plotly import offline
from plotly.graph_objs import Bar


url = "https://api.github.com/search/repositories?q=language:python&sort=stars"
headers = {'Accept':'application/vnd.github.v3+json'}
r = requests.get(url, headers = headers)
print(f"Status code:{r.status_code}")
response_dict = r.json()
repo_dicts = response_dict['items']
repo_names,stars = [], []
for repo_dict in repo_dicts:
    repo_names.append(repo_dict['name'])
    stars.append(repo_dict['stargazers_count'])

data = [{
    'type': 'bar',
    'x': repo_names,
    'y': stars,
    }]
my_layout = {
    'title': 'GitHub上最受欢迎的python项目',
    'xaxis': {'title': 'Repository'},
    'yaxis': {'title': 'stars'},
    }
fig = {'data': data, 'layout': my_layout}
offline.plot(fig, filename='./pp0017API/python_repos.html')




# C:\Users\Cc\AppData\Local\Packages\PythonSoftwareFoundation.Python.3.7_qbz5n2kfra8p0\LocalCache\local-packages\Python37\site-packages