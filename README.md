# xv6 System Call Tracing Implementation – Team CIS Final Project

---

## TEAM MEMBERS
- Cole Nickelson  
- Sam Tilly  
- Ian Weber  

---

## PREREQUISITES
- make is needed  
- QEMU is needed  
- Git is need (to clone repo)

---

## COMMANDS TO COMPILE

```bash
git clone -b feature/system-call-tracing https://github.com/iweber63/TeamCIS-Final-Project
make clean
make
make qemu-nox
```

---

## HOW TO TEST

When xv6 loads run:
```bash
trace_test
trace_test2
