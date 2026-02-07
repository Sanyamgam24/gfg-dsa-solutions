import subprocess
from datetime import datetime

def run(cmd):
    subprocess.run(["cmd", "/c", cmd])

msg = f"GFG update - {datetime.now().strftime('%Y-%m-%d %H:%M')}"

run("git add .")
run(f'git commit -m "{msg}"')
run("git push origin main")

print("✅ Changes committed and pushed to GitHub")

