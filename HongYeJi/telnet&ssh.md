텔넷
---
텔넷 : TCP/IP 프로토콜에서 응용 계층에 위치한 프로토콜 중 하나   
텔넷을 사용하기 위해선 텔넷 클라이언트와 텔넷 서버가 필요   
텔넷 서비스를 제공하기 위해서는 텔넷 서비스가 설치되어 있어야 하고, 텔넷으로 시스템에 접속하기 위해서는 텔넷 클라이언트가 있어야 함   

'dpkg -l | grep telnet'명령어로 설치 확인   
![확인](https://ifh.cc/g/DvVMC4.png)

About Telnet Server
-------------------
텔넷 서버는 슈퍼 데몬인 xinetd에 의해 동작함(텔넷은 혼자서 동작하는 독자형 데몬이 아니라 슈퍼데몬인 xinetd에 의해 동작하기 때문)   
-> xinetd가 없으면 텔넷 서버는 서비스를 제공할 수 없음   
-> xineted를 설치하고 난 후에 텔넷 서비스를 설치해야 함   

'sudo apt install xinetd'명령어로 xinetd 설치   
![xinetd](https://ifh.cc/g/cC4fbk.jpg)

'sudo apt-get install telnetd'명령어로 telnet 서버 설치(telnetd는 telnet 서버의 이름)   
![telnet](https://ifh.cc/g/mIqcPw.jpg)

📌 특징 : 텔넷 서버와 크라이언트 사이에 주고받는 패킷이 암호화되어 있지 않음   

SSH
---
SSH는 텔넷처럼 원격에서 시스템에 접속할 수 있도록 하지만 모든 통신을 암호화하여 주고 받음   
리눅스를 사용하다 보면 원격에서 접속해야 할 일이 많으므로 보안을 강화한 SSH를 사용하는 것이 바람직함

