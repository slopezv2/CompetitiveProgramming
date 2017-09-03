vowels = ["a", "e", "i", "o", "u"]

cases = int(input())
phrases = []
newPhrases = []

for i in range(cases):
    phrases.append(input())

for p in phrases:
    for v in vowels:
        p = p.replace(v, v + "p" + v)
    print(p)


