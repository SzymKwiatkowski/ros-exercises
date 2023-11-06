# Prerequisites
Before working with repo install:
- ubuntu 22.04 (can be installed using wsl 2)
- [ros humble](https://docs.ros.org/en/humble/Installation.html)

If using WSL 2 install [X11 server](https://sourceforge.net/projects/vcxsrv/)

# To install dependencies:
```bash
rosdep install -r --from-path src
```

# Exercise
Goal:
- Vehicle is driving within specified range with specified error
- Estimated time is being calculated(simplified)
- Publishing result
- Reporting each step with feedback