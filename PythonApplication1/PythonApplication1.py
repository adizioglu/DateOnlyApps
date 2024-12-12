from datetime import datetime, date

today = datetime.now()

birthday = datetime.strptime("25/12/1961", "%d/%m/%Y").date()

print(birthday.strftime("%B %d, %Y"))

print(f"Today full format: {today}")
print(f"Today just date: {today.date()}")
print(f"Birthday full format: {birthday}")

