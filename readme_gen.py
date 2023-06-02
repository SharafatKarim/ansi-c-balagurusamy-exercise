import os
from natsort import natsorted

# read the directory names inside the solutions directory
def get_directories():
    return os.listdir("solutions")

# Function to generate the README.md file
def generate_readme():
    contribs = get_directories()

    # read from readme/head.md
    with open("readme/head.md", "r") as head:
        head_md = head.read()
        with open("README.md", "w") as readme:
            readme.write(head_md)
            readme.write("\n")

    # read from readme/toc.md
    with open("readme/toc.md", "r") as toc:
        toc_md = toc.read()
        with open("README.md", "a") as readme:
            readme.write(toc_md)
            readme.write("\n")

    # read files from directory questions and write to README.md
    with open("README.md", "a") as readme:
        readme.write("# Index\n")
        for file in natsorted(os.listdir("questions")):
            if file.endswith(".txt"):
                chapter_number = file.split(".")[0]
                readme.write(f"- [Chapter {chapter_number}](#chapter-{chapter_number}) \n\n")
        readme.write("---\n")

    # read files from directory questions
    for file in natsorted(os.listdir("questions")):
        if file.endswith(".txt"):
            with open(f"questions/{file}", "r") as question:
                question_md = question.read()
                with open("README.md", "a") as readme:
                    readme.write(f"## Chapter {file.split('.')[0]} \n\n")
                    question = question_md.split("\n\n")
                    count = 1
                    for q in question:
                        readme.write(f"{q.strip()}\n")
                        for contrib in contribs:
                            # check if the file exists
                            if os.path.exists(f"solutions/{contrib}/{file.split('.')[0]}/{count}.c"):
                                readme.write(f"- [{contrib}](solutions/{contrib}/{file.split('.')[0]}/{count}.c)\n")
                        count += 1
                        # readme.write(question_md)
                        readme.write("\n")
    
    # read from readme/foot.md
    with open("readme/foot.md", "r") as foot:
        foot_md = foot.read()
        with open("README.md", "a") as readme:
            readme.write(foot_md)
            readme.write("\n")


if __name__ == "__main__":
    generate_readme()