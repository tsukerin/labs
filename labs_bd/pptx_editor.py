from pptx import Presentation

print('Напишите имя пользователя')
username = input()
prof = []
points = []

print('Напишите название профессии и процент набранных баллов за неё, если закончили, наберите "exit"')
while True:
    
    print('Название профессии')
    prof_add = input()
    if prof_add.lower() == 'exit':
        break
    prof.append(prof_add)
    
    print('Кол-во процентов')
    points_add = input()
    if points_add.lower() == 'exit':
        break
    points.append(points_add)

prs = Presentation()

title_slide_layout = prs.slide_layouts[0]
slide = prs.slides.add_slide(title_slide_layout)

title = slide.shapes.title
subtitle = slide.placeholders[1]

title.text = f"Сертификат выдан пользователю {username}"

str_prof = ""
for i in range(len(prof)):
    str_prof += f"{prof[i]}: {points[i]}%\n"

subtitle.text = f"Итоги теста:\n{str_prof}"

prs.save("labs_bd/test.pptx")
