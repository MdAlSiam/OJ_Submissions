line = input()
line = "#"+line+"#"

nAts = line.count("@")
# print(nAts)

ansLine = ""

nEmails = 0

atEncountered = 0;

for i, char in enumerate(line):
    # print(i, char)
    if char != "#":
        ansLine += char
    if char == "@":
        atEncountered += 1
    if i > 0 and line[i-1] == "@":
        if line[i] != "@" and line[i-2] != "@" and line[i] != "#" and line[i-2] != "#":
            line = line[:i-2]+"#"+"#"+"#"+line[i+1:]
            nEmails += 1
            if atEncountered < nAts:
                ansLine += ","
        else:
            print("No solution")
            quit()
        
if nEmails:
    print(ansLine)
else:
    print("No solution")